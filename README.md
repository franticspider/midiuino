# midiuino
midi-centric arduino projects

##Examples

See the example projects (in the *examples* folder) to see how midi can be used with the arduino. 

There's only one project in there at the moment, which uses midi to control a piezo buzzer. 



##Setting up

Various things have to be set up in order to allow midi to be handled by an arduino. 

### Baud speed

Specifies the speed in baud of the MIDI interface. The correct rate for MIDI is 31250 baud; generic PC serial ports, however, cannot produce this speed due to the clock rate of their UARTs. 38400 baud is the fallback rate, producible by standard PC serial ports and expected by devices with a PC serial port interface.

so we need to set baud of 38400 on ttyMIDI and arduino MIDI to make things time right

###ttyMIDI

Instructions at: http://www.varal.org/ttymidi/

Is all set up. Run with the following command:

    ttymidi -s /dev/ttyACM0 -b 38400 -v -n arduino
    
###Arduino MIDI

```https://github.com/FortySevenEffects/arduino_midi_library```


![GitHub Logo](/home/sjh/Arduino/sketch_ttymidi_buzz_tone/midi_piezo_3led_bb.png)


##Synth projects directory

I've also created an archive of synth projects from the web. I'm going to use these to
create the synth/drum machine engines that is driven by the midi. 
Most synths below create audio output that can work with the same circuits for Audio and LEDs:

```
Arduino		  10k pot     Audio jack

              pot,1-------3.5mm

AUDIOPIN------pot,2       

GND-----------pot,3   |---3.5mm
          |           |
          |___________|
          
          
LEDPIN--------10kresistor--------LED----
GND____________________________________|          
```

The potentiometer is a crude volume pot. 

Here are the synths I've tried so far: 

### 01: Arduino Modular

This is based on a circuit at: 

http://rcarduino.blogspot.co.uk/2012/10/arduino-modular-synthesizer-part-one.html

AUDIOPIN is Digital 6 - see #define on line 27


### 02: Illutron B

Most recent links first: 

http://rcarduino.blogspot.co.uk/2014/02/rcarduino-downloads.html  
http://www.instructables.com/id/Turn-your-Arduino-into-a-4-voice-wavetable-synth-w/  
https://github.com/dzlonline/the_synth  

AUDIOPIN is Digital 6 - there's a more refined output circuit than mine, using a capacitor...

### 03: my_Drum

A very simple Drum machine example. Main advantage is that it is all in one file, with no libraries, but the control is very primitive. 

AUDIOPIN is 6 or 7, but can be any PWM pin

http://www.instructables.com/id/Randomized-Arduino-Drum-Machine/  

### 04: myMozziAM synth

AUDIOPIN is Digital 9

Based on a Mozzi example


### 05: MozziDrums

AUDIOPIN is Digital 9

##### fixed:
Based on a Mozzi example midi needs tweaking - noteon/off works, but frequency is wrong. Drums run nicely, but __independently__ of the midi clock.

On further investigation using vkeybd, the FIRST note that is played is sounded, but nothing after that - noteoff doesn't seem to work either. (needed to set 
  Serial.begin(38400);)


Added a bitCrush at line 174, works for values between 2 and 14 on the drums...


###06: my Soulsby ATMegatron

Attempt to run the soulsby stuff without the board - trying to understand the synthesis engine. Hard work!!

###07: cheapsynth PolyDrums 

AUDIOPIN is Digital 9

Seems to be based on Mozzi. handles midi in and out, but not to play notes, rather to change patterns...


		
