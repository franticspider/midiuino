

#Dev notes for jamjar midi drums


##PWM carrier frequency

As possibly noted elsewhere, the carrier frequency of mozzi in STANDARD mode was audible to young people. 

This can be fixed (following http://sensorium.github.io/Mozzi/learn/output/ ) by changing the Audio mode to STANDARD_PLUS 

To do this, in ```Mozzi/mozzi_config.h``` uncomment STANDARD_PLUS and comment out STANDARD. It isn't clear whether the AUDIO_RATE also needs to be changed to avoid the whine - this has been done in the current version just to be sure. 


##Making samples

Now we've fixed the PWM, we need to make samples that adhere to the 


##MIDI



##Combining/timing samples to make output




##Effects
