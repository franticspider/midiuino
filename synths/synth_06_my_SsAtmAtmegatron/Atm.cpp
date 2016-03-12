//Atm.cpp  Atmegatron class (add this object to Arduino sketch)
//Copyright (C) 2015  Paul Soulsby info@soulsbysynths.com
//
//This program is free software: you can redistribute it and/or modify
//it under the terms of the GNU General Public License as published by
//the Free Software Foundation, either version 3 of the License, or
//(at your option) any later version.
//
//This program is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.
//
//You should have received a copy of the GNU General Public License
//along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include <Arduino.h>

#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdlib.h>
#include <avr/eeprom.h>
#include "AtmHardwareBase.h"
#include "SsHelpers.h"
#include "LedRgb.h"
#include "LedCircular.h"
#include "Led.h"
#include "AnalogueControl.h"
#include "Switch.h"
#include "RotaryEncoder.h"


#include "AtmEngineBase.h"
#include "AtmHardwareBase.h"


#include "AtmAudio.h"
#include "AtmOscillator.h"
#include "AtmPatch.h"
#include "AtmPatchBase.h"
#include "Envelope.h"
#include "Amplifier.h"
#include "AtmEngineProgmem.h"
#include "AtmEngineBase.h"
#include "AtmEngineSettings.h"
#include "BiquadFilter.h"
#include "MasterClock.h"
#include "Lfo.h"
#include "Portamento.h"
#include "AtmPitch.h"
#include "Midi.h"
#include "MidiBase.h"
#include "Arpeggiator.h"
#include "ArpeggiatorBase.h"
#include "Wavecrusher.h"
#include "Flanger.h"
#include "ClipDistortion.h"
#include "Pwm.h"
#include "AtmEngine.h"
#include "AtmHardware.h"

#include "Atm.h"

// default constructor
Atm::Atm() : engine_(AtmEngine::getInstance()), hardware_(AtmHardware::getInstance())
{
	engine_.construct(this);
	hardware_.construct(this);
} //Atm

// default destructor
Atm::~Atm()
{
} //~Atm

void Atm::initialize()
{
	hardware_.getRotEncoder(AtmHardware::FUNCTION).setContinuous(true);
	hardware_.beginMidi(MIDI_UBRR);
	if(hardware_.getMidiChannelSelectMode()==false)
	{
		engine_.initialize();
		engine_.getMidiPtr()->setChannel(hardware_.getMidiChannel());
		for(unsigned char i=0;i<2;++i)
		{
			hardware_.getLedSwitch(i).flash(4,LED_FLASH_TICKS,LED_FLASH_TICKS,LedRgb::RED,LedRgb::GREEN,true);
		}
	}
}

void Atm::poll(unsigned char ticksPassed)
{
	hardware_.pollMidi();
	hardware_.pollAnlControls(ticksPassed);
	hardware_.pollSwitches(ticksPassed);
	hardware_.pollRotEncoders(ticksPassed);
	hardware_.refreshFlash(ticksPassed);
	hardware_.refreshLeds();
	if(hardware_.getMidiChannelSelectMode()==false)
	{
		engine_.poll(ticksPassed);
		engine_.refreshSysex();		
	}
}

bool Atm::isShiftHold(AtmEngine::Func func)
{
	unsigned char i = func>>3;
	return (bool)bitRead(IS_SHIFT_HOLD[i],func-(i*8));
}

bool Atm::isFuncFill(AtmEngine::Func func) const
{
	unsigned char i = func>>3;
	return (bool)bitRead(IS_FUNC_FILL[i],func-(i*8));
}

//***********engine events*********************
void Atm::engineFunctionChanged(unsigned char func, unsigned char val, bool opt)
{
	bool col;
	
	hardware_.getRotEncoder(AtmHardware::VALUE).setValue((char)val);
	if(isFuncFill((AtmEngine::Func)func)==true)
	{
		hardware_.getRotEncoder(AtmHardware::VALUE).setContinuous(false);
		hardware_.getLedCircular(AtmHardware::VALUE).fill(val);
	}
	else
	{
		hardware_.getRotEncoder(AtmHardware::VALUE).setContinuous(true);
		hardware_.getLedCircular(AtmHardware::VALUE).select(val);
	}
	hardware_.getLedCircular(AtmHardware::FUNCTION).select((unsigned char)func);
	if(func==AtmEngine::FUNC_AENVD)
	{
		col = engine_.getMidiPtr()->getSysexEnable();
	}
	else
	{
		col = opt;
	}
	if(col==true)
	{
		hardware_.getLedSwitch(AtmHardware::FUNCTION).setColour(LedRgb::GREEN);
	}
	else
	{
		hardware_.getLedSwitch(AtmHardware::FUNCTION).setColour(LedRgb::RED);
	}

}
void Atm::engineBankChanged(unsigned char bank)
{
	hardware_.getLedSwitch(AtmHardware::BANK).flashStop();
	if(bank==HIGH)
	{
		hardware_.getLedSwitch(AtmHardware::BANK).setColour(LedRgb::GREEN);
	}
	else
	{
		hardware_.getLedSwitch(AtmHardware::BANK).setColour(LedRgb::RED);
	}
}
void Atm::engineMidiTransmit(unsigned char data)
{
	hardware_.writeMidi(data);
}
void Atm::engineSysexComplete()
{
	hardware_.getLedSwitch(AtmHardware::VALUE).flash(4,LED_FLASH_TICKS,LED_FLASH_TICKS,LedRgb::RED,LedRgb::GREEN,true);
}

//**************************hardware events************************************
void Atm::hardwareAnalogueControlChanged(unsigned char control, unsigned char newValue)
{
	engine_.getPatchPtr()->setCtrlValue(engine_.getBank(),control,newValue);
}

void Atm::hardwareSwitchChanged(unsigned char sw, unsigned char newValue)
{
	bool opt;

	if(sw==AtmHardware::FUNCTION)
	{
		if(isShiftHold(engine_.getFunction())==true)
		{
			if(newValue==HIGH)
			{
				hardware_.getLedSwitch(AtmHardware::FUNCTION).setColour(LedRgb::GREEN);
			}
			else
			{
				hardware_.getLedSwitch(AtmHardware::FUNCTION).flashStop();
				hardware_.getLedSwitch(AtmHardware::FUNCTION).setColour(LedRgb::RED);
				if(hardware_.getSwitch(sw).getHoldTime()>AtmHardware::HOLD_EVENT_TICKS)
				{
					switch(engine_.getFunction())
					{
						case AtmEngine::FUNC_AENVA:
						engine_.writeSysexPatch(engine_.getPatchPtr()->getFunctionValue(AtmEngine::FUNC_MEM));
						break;
						case AtmEngine::FUNC_AENVR:
						engine_.writeSysexMemDump();
						break;
						case AtmEngine::FUNC_MEM:
						engine_.getPatchPtr()->writePatch(engine_.getPatchPtr()->getFunctionValue(AtmEngine::FUNC_MEM));
						break;
					}
				}
				else
				{
					switch(engine_.getFunction())
					{
						case AtmEngine::FUNC_MEM:
						engine_.getPatchPtr()->readPatch(engine_.getPatchPtr()->getFunctionValue(AtmEngine::FUNC_MEM));
						break;
					}
				}
			}
		}
		else if(newValue==HIGH)
		{
			if(engine_.getFunction()==AtmEngine::FUNC_AENVD)
			{
				opt = !engine_.getMidiPtr()->getSysexEnable();
				engine_.getMidiPtr()->setSysexEnable(opt);
			}
			else
			{
				opt = !engine_.getPatchPtr()->getOptionValue(engine_.getFunction());
				engine_.getPatchPtr()->setOptionValue(engine_.getFunction(),opt);
			}
			if(opt==true)
			{
				hardware_.getLedSwitch(AtmHardware::FUNCTION).setColour(LedRgb::GREEN);
			}
			else
			{
				hardware_.getLedSwitch(AtmHardware::FUNCTION).setColour(LedRgb::RED);
			}
		}
	}

	
	if(sw==AtmHardware::VALUE)
	{
		if(newValue==HIGH)
		{
			hardware_.getRotEncoder(AtmHardware::VALUE).setUpdateVal(false);
			hardware_.getLedSwitch(AtmHardware::VALUE).setColour(LedRgb::GREEN);
			engine_.midiNoteOnReceived(testNote_,127);
		}
		else
		{
			hardware_.getRotEncoder(AtmHardware::VALUE).setUpdateVal(true);
			hardware_.getLedSwitch(AtmHardware::VALUE).setColour(LedRgb::RED);
			engine_.midiNoteOffReceived(testNote_);
		}
	}
	
	if(sw==AtmHardware::BANK)
	{
		if(newValue==HIGH)
		{
			engine_.setBank(HIGH-engine_.getBank());
		}
	}
}
void Atm::hardwareSwitchHeld(unsigned char sw)
{

	if(sw==AtmHardware::FUNCTION && isShiftHold(engine_.getFunction())==true)
	{
		hardware_.getLedSwitch(AtmHardware::FUNCTION).flash(8,LED_FLASH_TICKS,LED_FLASH_TICKS,LedRgb::GREEN,LedRgb::RED,true);
	}
	if(sw==AtmHardware::BANK)
	{
		if(engine_.getBank()==LOW)
		{
			hardware_.getLedSwitch(AtmHardware::BANK).flash(8,LED_FLASH_TICKS,LED_FLASH_TICKS,LedRgb::RED,LedRgb::YELLOW,true);
		}
		else
		{
			hardware_.getLedSwitch(AtmHardware::BANK).flash(8,LED_FLASH_TICKS,LED_FLASH_TICKS,LedRgb::GREEN,LedRgb::YELLOW,true);
		}
		engine_.getPatchPtr()->easterEgg(engine_.getMasterClock().getOutput());
	}
}
void Atm::hardwareRotaryEncoderChanged(unsigned char rotary, unsigned char newValue, bool clockwise)
{
	if(rotary==AtmHardware::FUNCTION)
	{
		engine_.setFunction((AtmEngine::Func)newValue);
	}

	if(rotary==AtmHardware::VALUE)
	{
		if(hardware_.getSwitch(AtmHardware::VALUE).getState()==HIGH)
		{
			if(testNote_<127 && testNote_>0)
			{
				engine_.midiNoteOffReceived(testNote_);
				if(clockwise==true)
				{
					testNote_++;
				}
				else
				{
					testNote_--;
				}
				engine_.midiNoteOnReceived(testNote_,127);
			}
		}
		else
		{
			engine_.getPatchPtr()->setFunctionValue(engine_.getFunction(),newValue);
		}
	}

}
void Atm::hardwareMidiChannelChanged(unsigned char channel)
{
	engine_.getMidiPtr()->setChannel(channel);
}
void Atm::hardwareMidiReceived(unsigned char data)
{
	hardware_.getLedMidi().flash(1,LED_FLASH_TICKS,LED_FLASH_TICKS,true);  //do at this level, not in hardware
	engine_.getMidiPtr()->read(data);
}
void Atm::hardwareMidiError(unsigned char errorType)
{
	hardware_.getLedSwitch(AtmHardware::VALUE).setColour((LedRgb::LedRgbColour)(3-(unsigned char)hardware_.getLedSwitch(AtmHardware::VALUE).getColour()));
	hardware_.getLedCircular(AtmHardware::VALUE).fill(errorType);
}

