#include <MIDI.h>

//#include "pitches.h"

MIDI_CREATE_DEFAULT_INSTANCE();

#define LED  13           // LED pin on Arduino Uno

#define LEDB  9  
#define LEDG 10
#define LEDR 11

#define BUZZPIN 3

/*Based on info at:
https://www.arduino.cc/en/Tutorial/toneMelody
http://www.princetronics.com/supermariothemesong/
*/

// ---------------------------------------------------------------------------

/*************************************************
 * Public Constants
 *************************************************/

//These are the notes as defined in "pitches.h", used a lookup table for the midi values:
const int notemap[127] = {
          31,
/*C1*/    33,  35,  37,  39,  41,  44,  46,  49,  52,  55,  58,  62, 
/*C2*/    65,  69,  73,  78,  82,  87,  93,  98, 104, 110, 117, 123,
/*C3*/   131, 139, 147, 156, 165, 175, 185, 196, 208, 220, 233, 247,
/*C4*/   262, 277, 294, 311, 330, 349, 370, 392, 415, 440, 466, 494,
/*C5*/   523, 554, 587, 622, 659, 698, 740, 784, 831, 880, 932, 988,
/*C6*/  1047,1109,1175,1245,1319,1397,1480,1568,1661,1760,1865,1976,
/*C7*/  2093,2217,2349,2489,2637,2794,2960,3136,3322,3520,3729,3951,
/*C8*/  4186,4435,4699,4978
};

// -----------------------------------------------------------------------------

int ctoggle = 0;

void handleControlChange(byte channel, byte pitch, byte velocity)
{
  /* To avoid having to put a delay, we'll toggle LEDG on or off when a message is recieved */
    if(ctoggle)
      digitalWrite(LED,HIGH);
    else  
      digitalWrite(LED,LOW);
    ctoggle = 1-ctoggle;
}



// This function will be automatically called when a NoteOn is received.
// It must be a void-returning function with the correct parameters,
// see documentation here:
// http://arduinomidilib.fortyseveneffects.com/a00022.html

boolean ledon[3];
byte    lednote[3];
char    led = 0;

void handleNoteOn(byte channel, byte pitch, byte velocity)
{
    // Do whatever you want when a note is pressed.

    // Try to keep your callbacks short (no delays ect)
    // otherwise it would slow down the loop() and have a bad impact
    // on real-time performance.


    tone(BUZZPIN,notemap[(int) pitch]);

    int ledtoggle = led+9;

    digitalWrite(ledtoggle,HIGH);

    ledon[led]=true;
    lednote[led]=pitch;
    
    led++;
    led = led>2?0:led;
}



void handleNoteOff(byte channel, byte pitch, byte velocity)
{
    // Do something when the note is released.
    // Note that NoteOn messages with 0 velocity are interpreted as NoteOffs.
    
    //digitalWrite(13, LOW);
    noTone(BUZZPIN);

    for(int ii=0;ii<3;ii++){
      if(ledon[ii]){
        if(lednote[ii] == pitch){
          digitalWrite(ii+9,LOW);
          ledon[ii]=false; 
        }
      }
    }
    
}




// -----------------------------------------------------------------------------

void setup()
{
    pinMode(LED, OUTPUT);
    pinMode(LEDR, OUTPUT);
    pinMode(LEDG, OUTPUT);
    pinMode(LEDB, OUTPUT);

    pinMode(BUZZPIN, OUTPUT);//buzzer
    
    // Connect the handleNoteOn function to the library,
    // so it is called upon reception of a NoteOn.
    MIDI.setHandleNoteOn(handleNoteOn);  // Put only the name of the function

    // Do the same for NoteOffs
    MIDI.setHandleNoteOff(handleNoteOff);

    // And for Control Changes
    MIDI.setHandleControlChange(handleControlChange);
    
    MIDI.begin(4);          // Launch MIDI and listen to channel 4
   
    /* Now the problem is that serial port at the computer is only
    able to read serial data at 'standard' baud rates. MIDI baud rate
    that Arduino MIDI library is using, is not one of these.
    One way of fixing this is to edit line 54 of file MIDI.h and set
    Arduino MIDI library to use some other baud rate.
    
    However, one can just simply change the baud rate
    of serial line to some standard baud rate by calling Serial.begin(int)
    immediately after calling MIDI.begin(int). Here we set the speed
    to default baud rate of ttymidi, 115200! This is all you need to
    remember to do if you want to read the data with ttymidi running
    on your computer.  
    */
    Serial.begin(38400);/* This baud rate is recommended for ALSA: http://alsa.opensrc.org/Serial  */

}

void loop()
{
    MIDI.read();                // If we have received a message
}
