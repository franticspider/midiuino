//SSAtmAtmegatron.ino   Atmegatron Arduino sketch
//Copyright (C) 2015  Paul Soulsby
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

/* sjh: Idea here is to have a self-contained project, and then to make a version that *only* outputs to the audio jack (without need for buttons etc.)*/


#include "AtmEngineBase.h"

#include "Arpeggiator.h"
#include "AtmPatchBase.h"
#include "Midi.h"
#include "AtmEngine.h"

#include "AtmHardwareBase.h"
#include "AnalogueControl.h"
#include "Switch.h"
#include "RotaryEncoder.h"
#include "LedCircular.h"
#include "LedRgb.h"
#include "Led.h"
#include "AtmHardware.h"

#include "Atm.h"
//#include <AtmEngineBase.h>
//#include <AtmHardwareBase.h>
//#include <AtmAudio.h>
//#include <Wavetable.h>
//#include <AtmOscillator.h>
#include "AtmPatch.h"
//#include <SsHelpers.h>
//#include <Envelope.h>
//#include <Amplifier.h>
//#include <BiquadFilter.h>
//#include <MasterClock.h>
//#include <Lfo.h>
//#include <Portamento.h>
//#include <AtmPitch.h>
//#include <Arpeggiator.h>
//#include <Wavecrusher.h>
//#include <Flanger.h>
//#include <ClipDistortion.h>
//#include <Pwm.h>
//#include <AnalogueControl.h>
//#include <Switch.h>
//#include <RotaryEncoder.h>



Atm atmegatron;

void setup()
{
	atmegatron.initialize();
}

void loop()
{
	static unsigned long last_millis;
	unsigned char ticksPassed = millis() - last_millis;
	last_millis += ticksPassed;
	atmegatron.poll(ticksPassed);	
}

