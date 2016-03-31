/*  Example of a sound being triggered by MIDI input.

    Demonstrates playing notes with Mozzi in response to MIDI input,
    using the standard Arduino MIDI library:
    http://playground.arduino.cc/Main/MIDILibrary

    Mozzi help/discussion/announcements:
    https://groups.google.com/forum/#!forum/mozzi-users

    Tim Barrass 2013.
    This example code is in the public domain.

    sgreen - modified to use standard Arduino midi library, added saw wave, lowpass filter
    Audio output from pin 9 (pwm)
    Midi plug pin 2 (centre) to Arduino gnd, pin 5 to RX (0)
    http://www.philrees.co.uk/midiplug.htm
    Now with drums!


    sjh: Much of this is now based on code here:
    https://github.com/fakebitpolytechnic/cheapsynth/blob/master/Mozzi_drumsDG0_0_2BETA/

*/


#include <MIDI.h>

MIDI_CREATE_DEFAULT_INSTANCE();


#include <MozziGuts.h>
#include <Oscil.h> // oscillator template
#include <Line.h> // for envelope
#include <Sample.h>

//#include <tables/sin2048_int8.h> // sine table for oscillator
#include <tables/saw2048_int8.h>
#include "kick909.h"
#include "snare909.h"
#include "hihatc909.h"
#include "hihato909.h"

#include "tech1909bd.h"
#include "thiswav.h"
#include "tech1fx2.h"
#include "tech1fx3.h"

#include <mozzi_midi.h>
#include <ADSR.h>
//#include <fixedMath.h>
#include <LowPassFilter.h>

// use #define for CONTROL_RATE, not a constant
#define CONTROL_RATE 128 // powers of 2 please

unsigned long ctrlCounter = 0;

// audio sinewave oscillator
//Oscil <SIN2048_NUM_CELLS, AUDIO_RATE> osc(SIN2048_DATA);
Oscil <SAW2048_NUM_CELLS, AUDIO_RATE> osc(SAW2048_DATA);

// drums
//Sample <kick909_NUM_CELLS, AUDIO_RATE> kickSamp((const int8_t *) kick909_DATA);
Sample <tech1909bdwav_NUM_CELLS, AUDIO_RATE> kickSamp((const int8_t *) tech1909bdwav_DATA);

//swapping out while I test the bass drum
Sample <snare909_NUM_CELLS, AUDIO_RATE> snareSamp((const int8_t *) snare909_DATA);


Sample <hihatc909_NUM_CELLS, AUDIO_RATE> hihatcSamp((const int8_t *)hihatc909_DATA);
Sample <hihato909_NUM_CELLS, AUDIO_RATE> hihatoSamp((const int8_t *)hihato909_DATA);
//drumfx
Sample <mywav_NUM_CELLS, AUDIO_RATE> mywavSamp((const int8_t *)mywav_DATA);
Sample <tech1fx2wav_NUM_CELLS, AUDIO_RATE> tech1fx2wavSamp((const int8_t *)tech1fx2wav_DATA);
Sample <tech1fx3wav_NUM_CELLS, AUDIO_RATE> tech1fx3wavSamp((const int8_t *)tech1fx3wav_DATA);


char bckk = 0;
char bcsn = 0;
char bchc = 0;
char bcho = 0;
char bcf1 = 0;
char bcf2 = 0;
char bcf3 = 0;


/* We only need this if we aren't doing midi drums:
  byte pattern[4][16] = {
  //0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15
  1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0,  // 0 hhc
  0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1,  // 1 hho
  0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0,  // 2 snare
  //  1, 0, 1, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1   // 3 kick
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0   // 3 kick (silent for testing midi)
  };
*/

// envelope generator
ADSR <CONTROL_RATE, AUDIO_RATE> envelope;
LowPassFilter lpf;
int crushCtrl = 0;

#define LED 13 // to see if MIDI is being recieved

#define LEDA 5
#define LEDB 2
#define LEDC 3
#define LEDD 4

void HandleNoteOn(byte channel, byte note, byte velocity) {

  switch (note) {
    /*KICK*/
    case 36:  //Going to try to set the bass drum going!
      kickSamp.start();
      digitalWrite(LEDA, HIGH);
      break;

    /*TRAP*/
    case 40://38: //Going to try to set the bass drum going!
    case 41:
      snareSamp.start();
      digitalWrite(LEDB, HIGH);
      break;

    /*TISH*/
    case 47://40:
      hihatoSamp.start();
      digitalWrite(LEDC, HIGH);
      break;
    case 45://41:
      hihatcSamp.start();
      digitalWrite(LEDC, HIGH);
      break;

    /*BLIP*/
    case 48:
      mywavSamp.start();
      digitalWrite(LEDD, HIGH);
      break;
    case 49:
      tech1fx2wavSamp.start();
      digitalWrite(LEDD, HIGH);
      break;
    case 50:
      tech1fx3wavSamp.start();
      digitalWrite(LEDD, HIGH);
      break;

  }

  digitalWrite(LED, HIGH);
}



void HandleNoteOff(byte channel, byte note, byte velocity) {
  envelope.noteOff();
  digitalWrite(LED, LOW);

  switch (note) {
    /*KICK*/
    case 36:  //Going to try to set the bass drum going!
      //kickSamp.stop();
      digitalWrite(LEDA, LOW);
      break;

    /*TRAP*/
    case 40://38: //Going to try to set the bass drum going!
    case 41:
      //snareSamp.stop();
      digitalWrite(LEDB, LOW);
      break;

    /*TISH*/
    case 47://40:
      //hihatoSamp.stop();
      digitalWrite(LEDC, LOW);
      break;
    case 45://41:
      //hihatcSamp.stop();
      digitalWrite(LEDC, LOW);
      break;

    /*BLIP*/
    case 48:
      //mywavSamp.stop();
      digitalWrite(LEDD, LOW);
      break;
    case 49:
      //tech1fx2wavSamp.stop();
      digitalWrite(LEDD, LOW);
      break;
    case 50:
      //tech1fx3wavSamp.stop();
      digitalWrite(LEDD, LOW);
      break;
  }

}


float MidiSetFreq(byte value, int rate, int ncells){

    float freq;
  /* What range do we want to run this? */ if(value > 64){
          freq = ((float) rate / ((float) 0.5 *  ncells));  
      }
      else if(value < 64){
          freq = ((float) rate / ((float) 2.0 *  ncells));   
      }
      else{//Value = 64
          freq = ((float) rate / (float) ncells);      
      }
        

      return freq;
  
}




void HandleControlChange (byte channel, byte number, byte value)
{
  // http://www.indiana.edu/~emusic/cntrlnumb.html
  switch (number) {
    //case 1:      // modulation wheel
    case 105:
    case 91:  //reverb on vkeybd
      lpf.setCutoffFreq(value << 4); // control messages are in [0, 127] range
      break;
    case 106:
    case 93:  //Chorus on vkeybd
      lpf.setResonance(value << 4);
      break;
    case 66:  //Sostenuto on vkeybd
      crushCtrl = value >> 4;
      break;
    case 77: /* trying a frequency manipulation on the snare - could use a midi frequency table to do it right, if the processor'll handle it */
      snareSamp.setFreq(MidiSetFreq(value,snare909_SAMPLERATE,snare909_NUM_CELLS));
      break;
  }
}

void setup() {
  pinMode(LED, OUTPUT);

  pinMode(LEDA, OUTPUT);
  pinMode(LEDB, OUTPUT);
  pinMode(LEDC, OUTPUT);
  pinMode(LEDD, OUTPUT);

  //just in case...
  digitalWrite(LEDA, LOW);
  digitalWrite(LEDB, LOW);
  digitalWrite(LEDC, LOW);
  digitalWrite(LEDD, LOW);


  // Initiate MIDI communications, listen to all channels
  MIDI.begin(MIDI_CHANNEL_OMNI);
  Serial.begin(38400);/* This baud rate is recommended for ALSA: http://alsa.opensrc.org/Serial  */

  // Connect the HandleNoteOn function to the library, so it is called upon reception of a NoteOn.
  MIDI.setHandleNoteOn(HandleNoteOn);  // Put only the name of the function
  MIDI.setHandleNoteOff(HandleNoteOff);  // Put only the name of the function
  MIDI.setHandleControlChange(HandleControlChange);

  envelope.setADLevels(127, 64);
  envelope.setTimes(50, 200, 10000, 200); // 10000 is so the note will sustain 10 seconds unless a noteOff comes

  lpf.setResonance(200);
  lpf.setCutoffFreq(255);

  osc.setFreq(440); // default frequency

  //kickSamp.setFreq((float) kick909_SAMPLERATE / (float) kick909_NUM_CELLS);
  kickSamp.setFreq((float) tech1909bdwav_SAMPLERATE / (float) tech1909bdwav_NUM_CELLS);
  
  snareSamp.setFreq((float) snare909_SAMPLERATE / (float) snare909_NUM_CELLS);
  
  hihatcSamp.setFreq((float) hihatc909_SAMPLERATE / (float) hihatc909_NUM_CELLS);
  hihatoSamp.setFreq((float) hihato909_SAMPLERATE / (float) hihato909_NUM_CELLS);

  mywavSamp.setFreq((float) mywav_SAMPLERATE / ((float)1.5* mywav_NUM_CELLS));
  tech1fx2wavSamp.setFreq((float) tech1fx2wav_SAMPLERATE / ((float)0.5 * tech1fx2wav_NUM_CELLS));
  tech1fx3wavSamp.setFreq((float) tech1fx3wav_SAMPLERATE / ((float)1.5*  tech1fx3wav_NUM_CELLS));

  //mywavSamp.setStart(1024);//Attempt to remove the click...
  //mywavSamp.setLoopingOn();//just curious....loops forever - might be good for long samples...

  //snareSamp.start();

  startMozzi(CONTROL_RATE);
}

int beat = 0;
int oldBeat = 0;

void updateControl() {
  MIDI.read();

  /*
    envelope.update();
    // drums
    ctrlCounter++;
    // this is called at 128Hz -> 120bmp!?
    beat = ((ctrlCounter * 2 * 4) >> 7);
    if (beat != oldBeat) {
      //if (pattern[0][beat & 0xf]) hihatcSamp.start();
      //if (pattern[1][beat & 0xf]) hihatoSamp.start();
      //if (pattern[2][beat & 0xf]) snareSamp.start();
      //if (pattern[3][beat&0xf]) kickSamp.start();
    }
    oldBeat = beat;
  */
}

// strip the low bits off!
int bitCrush(int x, int a)
{
  return (x >> a) << a;
}

// strip the low bits off!
int MidibitCrush(int x)
{
  return (x >> crushCtrl) << crushCtrl;
}


int updateAudio() {

  /*
    //return (int) (envelope.next() * osc.next())>>8;
    // return (int) (envelope.next() * lpf.next(osc.next()))>>8;
    int x = (int) (envelope.next() * osc.next()) >> 8;

    //int x = (envelope.next() * lpf.next(osc.next()))>>8;
    //x = bitCrush(x, crushCtrl>>4);
    //x = (x * crushCtrl)>>4;  // simple gain
    x = bitCrush(x, 4);
    //x = MidibitCrush(x);
    x = lpf.next(x);
  */
  // drums please!
  int drums = (~(kickSamp.next())) + snareSamp.next() + hihatcSamp.next() + hihatoSamp.next()
              + mywavSamp.next() + tech1fx2wavSamp.next() + tech1fx3wavSamp.next();

  //TODO: Should be straightforward to bitcrush individual drums...
  drums = MidibitCrush(drums);
  return drums << 1;
  /*
    //drums = MidibitCrush(drums);
    //x += drums << 1;
    x = drums << 1;
    return x;
  */
}


void loop() {
  audioHook(); // required here
}

