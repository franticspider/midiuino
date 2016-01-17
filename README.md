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