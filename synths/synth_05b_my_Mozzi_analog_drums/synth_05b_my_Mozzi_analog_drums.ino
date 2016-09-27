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

//TODO: remember, division maths is 40* slower than multiplication! remove all /, or precalculate, 



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

///////////////////////////////////////////////////////////////////////////
/*BASS DRUM VARIABLES - From Line_Gliss_Double_32k_HIFI in mozzi examples*/

Oscil <SAW2048_NUM_CELLS, AUDIO_RATE> abd_aSaw1(SAW2048_DATA);
byte abd_lo_note = 24; // midi note numbers




///////////////////////////////////////////////////////////////////////////



// audio sinewave oscillator
//Oscil <SIN2048_NUM_CELLS, AUDIO_RATE> osc(SIN2048_DATA);
//Oscil <SAW2048_NUM_CELLS, AUDIO_RATE> osc(SAW2048_DATA);

// drums
//Sample <kick909_NUM_CELLS, AUDIO_RATE> kickSamp((const int8_t *) kick909_DATA);
Sample <tech1909bdwav_NUM_CELLS, AUDIO_RATE> kickSamp((const int8_t *) tech1909bdwav_DATA);

//
Sample <snare909_NUM_CELLS, AUDIO_RATE> snareSamp((const int8_t *) snare909_DATA);


Sample <hihatc909_NUM_CELLS, AUDIO_RATE> hihatcSamp((const int8_t *)hihatc909_DATA);
Sample <hihato909_NUM_CELLS, AUDIO_RATE> hihatoSamp((const int8_t *)hihato909_DATA);
//drumfx
Sample <mywav_NUM_CELLS, AUDIO_RATE> tech1fx1wavSamp((const int8_t *)mywav_DATA);
Sample <tech1fx2wav_NUM_CELLS, AUDIO_RATE> tech1fx2wavSamp((const int8_t *)tech1fx2wav_DATA);
Sample <tech1fx3wav_NUM_CELLS, AUDIO_RATE> tech1fx3wavSamp((const int8_t *)tech1fx3wav_DATA);

/* Bit Crush Settings */
byte bc_bd=0;
byte bc_sn=0;
byte bc_hc=0;
byte bc_ho=0;
byte bc_f1=0;
byte bc_f2=0;
byte bc_f3=0;


/* Freqshift Settings */
byte fq_bd=64;
byte fq_sn=64;
byte fq_hc=64;
byte fq_ho=64;
byte fq_f1=64;
byte fq_f2=64;
byte fq_f3=64;



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



void reset_params(){
  /* Bit Crush Settings */
  bc_bd=0;
  bc_sn=0;
  bc_hc=0;
  bc_ho=0;
  bc_f1=0;
  bc_f2=0;
  bc_f3=0;
  
  
  /* Freqshift Settings */
  byte value = 64;
  kickSamp.setFreq(MidiSetFreq(value,tech1909bdwav_SAMPLERATE,tech1909bdwav_NUM_CELLS));
  snareSamp.setFreq(MidiSetFreq(value,snare909_SAMPLERATE,snare909_NUM_CELLS));
  hihatcSamp.setFreq(MidiSetFreq(value,hihatc909_SAMPLERATE,hihatc909_NUM_CELLS));
  hihatoSamp.setFreq(MidiSetFreq(value,hihato909_SAMPLERATE,hihato909_NUM_CELLS));
  tech1fx1wavSamp.setFreq(MidiSetFreq(value,mywav_SAMPLERATE,mywav_NUM_CELLS));
  tech1fx2wavSamp.setFreq(MidiSetFreq(value,tech1fx2wav_SAMPLERATE,tech1fx2wav_NUM_CELLS));
  tech1fx3wavSamp.setFreq(MidiSetFreq(value,tech1fx2wav_SAMPLERATE,tech1fx2wav_NUM_CELLS));
}


void HandleNoteOn(byte channel, byte note, byte velocity) {

  switch (note) {



    /*RESET*/
    case 24: 
      reset_params();
      
      digitalWrite(LEDA, HIGH);
      digitalWrite(LEDB, HIGH);
      digitalWrite(LEDC, HIGH);
      digitalWrite(LEDD, HIGH);
      digitalWrite(LED , HIGH);
      break;


    
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
    case 45://41:
      hihatcSamp.start();
      digitalWrite(LEDC, HIGH);
      break;
    case 47://40:
      hihatoSamp.start();
      digitalWrite(LEDC, HIGH);
      break;

    /*BLIP*/
    case 48:
      tech1fx1wavSamp.start();
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
  //envelope.noteOff();
  digitalWrite(LED, LOW);

  switch (note) {
    
    /*RESET*/
    case 24: 
      reset_params();
      
      digitalWrite(LEDA, LOW);
      digitalWrite(LEDB, LOW);
      digitalWrite(LEDC, LOW);
      digitalWrite(LEDD, LOW);
      digitalWrite(LED , LOW);
      break;



    /*Strategy - since there is no stop() function, set start() to the end of the sample...*/
      
    /*KICK*/
    case 36:  //Going to try to set the bass drum going!
      kickSamp.stop();//tart(tech1909bdwav_NUM_CELLS-1);
      digitalWrite(LEDA, LOW);
      break;

    /*TRAP*/
    case 40://38: //Going to try to set the bass drum going!
    case 41:
      snareSamp.stop();//start(snare909_NUM_CELLS-1);
      digitalWrite(LEDB, LOW);
      break;

    /*TISH*/
    case 45://41:
      hihatcSamp.stop();//.start(hihatc909_NUM_CELLS-1);
      digitalWrite(LEDC, LOW);
      break;
    case 47://40:
      hihatoSamp.stop();//.start(hihato909_NUM_CELLS-1);
      digitalWrite(LEDC, LOW);
      break;

    /*BLIP*/
    case 48:
      tech1fx1wavSamp.stop();//.start(mywav_NUM_CELLS-1);
      digitalWrite(LEDD, LOW);
      break;
    case 49:
      tech1fx2wavSamp.stop();//.start(tech1fx2wav_NUM_CELLS-1);
      digitalWrite(LEDD, LOW);
      break;
    case 50:
      tech1fx3wavSamp.stop();//.start(tech1fx3wav_NUM_CELLS-1);
      digitalWrite(LEDD, LOW);
      break;
  }

}


int MidiSetStart(byte value,int ncells){

  return 0.0078125 * value * ncells;
  
}


float MidiSetFreq(byte value, int rate, int ncells){

    float freq;
    /* What range do we want to run this? */ 
    
    //=0.5+(val/128)
    /* This is usable, but not particularly extreme */
    //return ( 0.5 +  ((float) value /128) ) * ((float) rate / ((float) ncells)) ; 

    
    /* This is usable, but not particularly extreme */
    return ( 0.1 +  ((float)1.8 *  value /128) ) * ((float) rate / ((float) ncells)) ; 
    


  /*
      if(value > 64){
          freq = ((float) rate / ((float) 0.5 *  ncells));  
      }
      else if(value < 64){
          freq = ((float) rate / ((float) 2.0 *  ncells));   
      }
      else{//Value = 64
          freq = ((float) rate / (float) ncells);      
      }
        

      return freq;
    */
}


byte val_to_bc(byte value){
  return value >> 4 ;
}


void HandleControlChange (byte channel, byte number, byte value)
{
  /* ORGANISATION:
   *  
   *  Start with the controller number at 32 - this is easy to select in seq24
   *  
   *  BITCRUSH:
   *  
   *  basic strategy is to map 0-127 to 0-15 via a rightshift, and then 
   *  
   *  32: BD
   *  33: SD
   *  34: HC
   *  35: HO
   *  36: F1
   *  37: F2
   *  38: F3
   *  
   *  FREQUENCY:
   *  
   *  
   *  SAMPLE_START:
   *  
   *  SAMPLE_END:
   *  
   */  
  
  // http://www.indiana.edu/~emusic/cntrlnumb.html
  switch (number) {
    //case 1:      // modulation wheel

    /* BITCRUSHING */
    case 32:
      bc_bd = val_to_bc(value);
      break;
    case 33:
      bc_sn = val_to_bc(value);
      break;
    case 34:
      bc_hc = val_to_bc(value);
      break;
    case 35:
      bc_ho = val_to_bc(value);
      break;
    case 36:
      bc_f1 = val_to_bc(value);
      break;
    case 37:
      bc_f2 = val_to_bc(value);
      break;
    case 38:
      bc_f3 = val_to_bc(value);
      break;

    /* FREQUENCY */
    case 48:
      kickSamp.setFreq(MidiSetFreq(value,tech1909bdwav_SAMPLERATE,tech1909bdwav_NUM_CELLS));
      break;
    case 49:
      snareSamp.setFreq(MidiSetFreq(value,snare909_SAMPLERATE,snare909_NUM_CELLS));
      break;
    case 50:
      hihatcSamp.setFreq(MidiSetFreq(value,hihatc909_SAMPLERATE,hihatc909_NUM_CELLS));
      break;
    case 51:
      hihatoSamp.setFreq(MidiSetFreq(value,hihato909_SAMPLERATE,hihato909_NUM_CELLS));
      break;
    case 52:
      tech1fx1wavSamp.setFreq(MidiSetFreq(value,mywav_SAMPLERATE,mywav_NUM_CELLS));
      break;
    case 53:
      tech1fx2wavSamp.setFreq(MidiSetFreq(value,tech1fx2wav_SAMPLERATE,tech1fx2wav_NUM_CELLS));
      break;
    case 54:
      tech1fx3wavSamp.setFreq(MidiSetFreq(value,tech1fx2wav_SAMPLERATE,tech1fx2wav_NUM_CELLS));
      break;

    /* START */
    case 64:
      kickSamp.setStart(MidiSetStart(value,tech1909bdwav_NUM_CELLS));
      break;
    case 65:
      snareSamp.setStart(MidiSetStart(value,snare909_NUM_CELLS));
      break;
    case 66:
      hihatcSamp.setStart(MidiSetStart(value,hihatc909_NUM_CELLS));
      break;
    case 67:
      hihatoSamp.setStart(MidiSetStart(value,hihato909_NUM_CELLS));
      break;
    case 68:
      tech1fx1wavSamp.setStart(MidiSetStart(value,mywav_NUM_CELLS));
      break;
    case 69:
      tech1fx2wavSamp.setStart(MidiSetStart(value,tech1fx2wav_NUM_CELLS));
      break;
    case 70:
      tech1fx3wavSamp.setStart(MidiSetStart(value,tech1fx2wav_NUM_CELLS));
      break;


  }
}


float calc_freq(float rate, float ncels, byte val){



  
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

//  osc.setFreq(440); // default frequency

  //kickSamp.setFreq((float) kick909_SAMPLERATE / (float) kick909_NUM_CELLS);
  kickSamp.setFreq(MidiSetFreq(64,  tech1909bdwav_SAMPLERATE,  tech1909bdwav_NUM_CELLS));   //(float) tech1909bdwav_SAMPLERATE / (float) tech1909bdwav_NUM_CELLS);
  
  //snareSamp.setFreq((float) snare909_SAMPLERATE / (float) snare909_NUM_CELLS);
  snareSamp.setFreq(MidiSetFreq(64,  snare909_SAMPLERATE,   snare909_NUM_CELLS));   //(float) snare909_SAMPLERATE / (float) snare909_NUM_CELLS);
  
  //hihatcSamp.setFreq((float) hihatc909_SAMPLERATE / (float) hihatc909_NUM_CELLS);
  hihatcSamp.setFreq(  MidiSetFreq(64,  hihatc909_SAMPLERATE,   hihatc909_NUM_CELLS));   //(float) hihatc909_SAMPLERATE / (float) hihatc909_NUM_CELLS);

  
  //hihatoSamp.setFreq((float) hihato909_SAMPLERATE / (float) hihato909_NUM_CELLS);
  hihatoSamp.setFreq(  MidiSetFreq(64,  hihato909_SAMPLERATE,   hihato909_NUM_CELLS));   //(float) hihato909_SAMPLERATE / (float) hihato909_NUM_CELLS);

  tech1fx1wavSamp.setFreq((float) mywav_SAMPLERATE / ((float)1.5* mywav_NUM_CELLS));
  tech1fx2wavSamp.setFreq((float) tech1fx2wav_SAMPLERATE / ((float)0.5 * tech1fx2wav_NUM_CELLS));
  tech1fx3wavSamp.setFreq((float) tech1fx3wav_SAMPLERATE / ((float)0.5*  tech1fx3wav_NUM_CELLS));

  //tech1fx1wavSamp.setStart(1024);//Attempt to remove the click...
  //tech1fx1wavSamp.setLoopingOn();//just curious....loops forever - might be good for long samples...

  //snareSamp.start();

  startMozzi(CONTROL_RATE);
}

int beat = 0;
int oldBeat = 0;

void updateControl() {
  MIDI.read();
}


// strip the low bits off!
int bitCrush(int x, int a)
{
  return (x >> a) << a;
}

// strip the low bits off!
/* x comes in as an int to get the space we need to do the bitshifting.. I think? */
inline int8_t MidibitCrush(int x, byte bc)
{
//  if(bc)
    return (x >> bc) << bc;
//  else
//    return x;
}


int updateAudio() {


  //hmmm - bitcrushing each sample seems a bit too processor heavy...
  int drums = 
              MidibitCrush( kickSamp.next(), bc_bd) + 
              MidibitCrush( snareSamp.next(), bc_sn)  + 
              MidibitCrush( hihatcSamp.next(), bc_hc)  + 
              MidibitCrush( hihatoSamp.next(), bc_ho)  + 
              MidibitCrush( tech1fx1wavSamp.next(), bc_f1)  + 
              MidibitCrush( tech1fx2wavSamp.next(), bc_f2)  + 
              MidibitCrush( tech1fx3wavSamp.next(), bc_f3) ;
              
  /*            
  int drums = 
              kickSamp.next() + 
              snareSamp.next()  + 
              hihatcSamp.next() + 
              hihatoSamp.next()  + 
              tech1fx1wavSamp.next() + 
              tech1fx2wavSamp.next() + 
              tech1fx3wavSamp.next();
  */            
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

