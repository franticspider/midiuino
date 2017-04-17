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

/*TESTING*/


#include <MozziGuts.h>
#include <Sample.h>

#include "jjbd.h"
#include "jjsn.h"
#include "jjch.h"
#include "jjoh.h"
#include "jjfx1.h"
#include "jjfx2.h"
#include "jjfx3.h"

#include <mozzi_midi.h>
//#include <ADSR.h>
//#include <fixedMath.h>
//#include <LowPassFilter.h>

// use #define for CONTROL_RATE, not a constant
#define CONTROL_RATE 128 // powers of 2 please

unsigned long ctrlCounter = 0;

///////////////////////////////////////////////////////////////////////////

Sample <jjbd_NUM_CELLS, AUDIO_RATE> jjbdSamp((const int8_t *) jjbd_DATA);

Sample <jjsn_NUM_CELLS, AUDIO_RATE> jjsnSamp((const int8_t *) jjsn_DATA);

Sample <jjch_NUM_CELLS, AUDIO_RATE> jjchSamp((const int8_t *) jjch_DATA);
Sample <jjoh_NUM_CELLS, AUDIO_RATE> jjohSamp((const int8_t *) jjoh_DATA);

Sample <jjfx1_NUM_CELLS, AUDIO_RATE> jjfx1Samp((const int8_t *)jjfx1_DATA);
Sample <jjfx2_NUM_CELLS, AUDIO_RATE> jjfx2Samp((const int8_t *)jjfx2_DATA);
Sample <jjfx3_NUM_CELLS, AUDIO_RATE> jjfx3Samp((const int8_t *)jjfx3_DATA);

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


/* looping Settings */
boolean loop_bd=false;
boolean loop_sn=false;
boolean loop_ch=false;
boolean loop_oh=false;
boolean loop_fx1=false; //true;  //for testing
boolean loop_fx2=false;
boolean loop_fx3=false;

#define LETSHAVELEDS

#define LED 6   //RED  // to see if MIDI is being recieved

#define LEDA 5  //YELLOW
#define LEDB 2  //BLUE
#define LEDC 3  //GREEN
#define LEDD 4  //Bike LED (superbright)


void reset_params(){
  /* Bit Crush Settings */
  bc_bd=0;
  bc_sn=0;
  bc_hc=0;
  bc_ho=0;
  bc_f1=0;
  bc_f2=0;
  bc_f3=0;

  
 fq_bd=64;
 fq_sn=64;
 fq_hc=64;
 fq_ho=64;
 fq_f1=64;
 fq_f2=64;
 fq_f3=64;


/* looping Settings */
 loop_bd=false;
 loop_sn=false;
 loop_ch=false;
 loop_oh=false;
 loop_fx1=false; //true;  //for testing
 loop_fx2=false;
 loop_fx3=false;
 
}


void fireLED(int led, boolean val){
#ifdef LETSHAVELEDS
  digitalWrite(led, val);
#endif  
}




void HandleNoteOn(byte channel, byte note, byte velocity) {

  switch (note) {



    /*RESET*/
    case 24: 
      reset_params();
      
      fireLED(LEDA, HIGH);
      fireLED(LEDB, HIGH);
      fireLED(LEDC, HIGH);
      fireLED(LEDD, HIGH);
      fireLED(LED , HIGH);
      break;
    
    /*KICK*/
    case 36:  //Going to try to set the bass drum going!
      jjbdSamp.start();
      if(loop_bd){
        jjbdSamp.setLoopingOn();
      }
      fireLED(LEDA, HIGH);
      break;

    /*TRAP*/
    case 40://38: //Going to try to set the bass drum going!
    case 41:
      jjsnSamp.start();
      if(loop_sn){
        jjsnSamp.setLoopingOn();
      }
      fireLED(LEDB, HIGH);
      break;

    /*TISH*/
    case 45://41:
      jjchSamp.start();
      if(loop_ch){
        jjchSamp.setLoopingOn();
      }
      fireLED(LEDC, HIGH);
      break;
      
    case 47://40:
      jjohSamp.start();
      if(loop_oh){
        jjohSamp.setLoopingOn();
      }
      fireLED(LEDC, HIGH);
      break;

    /*BLIP*/
    case 48:
      jjfx1Samp.start();
      if(loop_fx1){
        jjfx1Samp.setLoopingOn();
      }
      fireLED(LEDD, HIGH);
      break;
    
    case 49:
      jjfx2Samp.start();
      if(loop_fx2){
        jjfx2Samp.setLoopingOn();
      }
      fireLED(LEDD, HIGH);
      break;
    case 50:
      jjfx3Samp.start();
      if(loop_fx3){
        jjfx3Samp.setLoopingOn();
      }
      fireLED(LEDD, HIGH);
      break;

  }

}



void HandleNoteOff(byte channel, byte note, byte velocity) {
  //envelope.noteOff();
  fireLED(LED, LOW);

  switch (note) {
    
    /*RESET*/
    case 24: 
      reset_params();
      
      fireLED(LEDA, LOW);
      fireLED(LEDB, LOW);
      fireLED(LEDC, LOW);
      fireLED(LEDD, LOW);
      fireLED(LED , LOW);
      break;
      
    /*KICK*/
    case 36:  
    jjbdSamp.stop();
      fireLED(LEDA, LOW);
      break;

    /*TRAP*/
    case 40://38: //Going to try to set the bass drum going!
    case 41:
      jjsnSamp.stop();//start(jjsn_NUM_CELLS-1);
      fireLED(LEDB, LOW);
      break;

    /*TISH*/
    case 45://41:
      jjchSamp.stop();//.start(jjch_NUM_CELLS-1);
      fireLED(LEDC, LOW);
      break;
  
    case 47://40:
      jjohSamp.stop();//.start(jjoh_NUM_CELLS-1);
      fireLED(LEDC, LOW);
      break;

    /*BLIP*/
    case 48:
      jjfx1Samp.stop();//.start(jjfx1_NUM_CELLS-1);
      //jjfx1Samp.setLoopingOff(); /*no need to do this - Called inside stop */
      
      fireLED(LEDD, LOW);
      break;
    
    case 49:
      jjfx2Samp.stop();//.start(jjfx2_NUM_CELLS-1);
      fireLED(LEDD, LOW);
      break;
    
    case 50:
      jjfx3Samp.stop();//.start(jjfx3_NUM_CELLS-1);
      fireLED(LEDD, LOW);
      break;
  }

}


int MidiSetStart(byte value,int ncells){

  return 0.0078125 * value * ncells;
  
}

/* TODO: Get rid of the divides here! */
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
   *  
   *  
   *  LOOPING:
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
      jjbdSamp.setFreq(MidiSetFreq(value,jjbd_SAMPLERATE,jjbd_NUM_CELLS));
      break;
    case 49:
      jjsnSamp.setFreq(MidiSetFreq(value,jjsn_SAMPLERATE,jjsn_NUM_CELLS));
      break;
    case 50:
      jjchSamp.setFreq(MidiSetFreq(value,jjch_SAMPLERATE,jjch_NUM_CELLS));
      break;
    case 51:
      jjohSamp.setFreq(MidiSetFreq(value,jjoh_SAMPLERATE,jjoh_NUM_CELLS));
      break;
    case 52:
      jjfx1Samp.setFreq(MidiSetFreq(value,jjfx1_SAMPLERATE,jjfx1_NUM_CELLS));
      break;
    case 53:
      jjfx2Samp.setFreq(MidiSetFreq(value,jjfx2_SAMPLERATE,jjfx2_NUM_CELLS));
      break;
    case 54:
      jjfx3Samp.setFreq(MidiSetFreq(value,jjfx2_SAMPLERATE,jjfx2_NUM_CELLS));
      break;

    /* START */
    case 64:
      jjbdSamp.setStart(MidiSetStart(value,jjbd_NUM_CELLS));
      break;
    case 65:
      jjsnSamp.setStart(MidiSetStart(value,jjsn_NUM_CELLS));
      break;
    case 66:
      jjchSamp.setStart(MidiSetStart(value,jjch_NUM_CELLS));
      break;
    case 67:
      jjohSamp.setStart(MidiSetStart(value,jjoh_NUM_CELLS));
      break;
    case 68:
      jjfx1Samp.setStart(MidiSetStart(value,jjfx1_NUM_CELLS));
      break;
    case 69:
      jjfx2Samp.setStart(MidiSetStart(value,jjfx2_NUM_CELLS));
      break;
    case 70:
      jjfx3Samp.setStart(MidiSetStart(value,jjfx2_NUM_CELLS));
      break;


    /* LOOP */
    case 80:
      if(value > 64)
        loop_bd = true;
      else
        loop_bd = false;
      break;
    case 81:
      if(value > 64)
        loop_sn = true;
      else
        loop_sn = false;
      break;
    case 82:
      if(value > 64)
        loop_ch = true;
      else
        loop_ch = false;
      break;
    case 83:
      if(value > 64)
        loop_oh = true;
      else
        loop_oh = false;
      break;
    case 84:
      if(value > 64)
        loop_fx1 = true;
      else
        loop_fx1 = false;
      break;
    case 85:
      if(value > 64)
        loop_fx2 = true;
      else
        loop_fx2 = false;
      break;
    case 86:
      if(value > 64)
        loop_fx3 = true;
      else
        loop_fx3 = false;
      break;


  }
}


//float calc_freq(float rate, float ncels, byte val){
//}



void setup() {

  //This is from mintysynth - check it woiks!
  DIDR0 = 0x3F;   //disable the digital input buffers on the analog pins to save a bit of power and reduce noise.




#ifdef LETSHAVELEDS
  pinMode(LED, OUTPUT);
  pinMode(LEDA, OUTPUT);
  pinMode(LEDB, OUTPUT);
  pinMode(LEDC, OUTPUT);
  pinMode(LEDD, OUTPUT);
#endif

  //just in case...
  fireLED(LEDA, LOW);
  fireLED(LEDB, LOW);
  fireLED(LEDC, LOW);
  fireLED(LEDD, LOW);


  // Initiate MIDI communications, listen to all channels
  MIDI.begin(MIDI_CHANNEL_OMNI);
  Serial.begin(38400);/* This baud rate is recommended for ALSA: http://alsa.opensrc.org/Serial  */

  // Connect the HandleNoteOn function to the library, so it is called upon reception of a NoteOn.
  MIDI.setHandleNoteOn(HandleNoteOn);  // Put only the name of the function
  MIDI.setHandleNoteOff(HandleNoteOff);  // Put only the name of the function
  MIDI.setHandleControlChange(HandleControlChange);

  //envelope.setADLevels(127, 64);
  //envelope.setTimes(50, 200, 10000, 200); // 10000 is so the note will sustain 10 seconds unless a noteOff comes
  //lpf.setResonance(200);
  //lpf.setCutoffFreq(255);
  //osc.setFreq(440); // default frequency

  jjbdSamp.setFreq((float) jjbd_SAMPLERATE / ((float) jjbd_NUM_CELLS));
  //jjbdSamp.setFreq(  MidiSetFreq(64,  jjbd_SAMPLERATE,  0.5 * jjbd_NUM_CELLS));   //(float) tech1909bdwav_SAMPLERATE / (float) tech1909bdwav_NUM_CELLS);
  
  jjsnSamp.setFreq((float) jjsn_SAMPLERATE / (float) jjsn_NUM_CELLS);
  //jjsnSamp.setFreq(  MidiSetFreq(64,  jjsn_SAMPLERATE,  jjsn_NUM_CELLS));   //(float) jjsn_SAMPLERATE / (float) jjsn_NUM_CELLS);
  
  //jjchSamp.setFreq((float) jjch_SAMPLERATE / (float) jjch_NUM_CELLS);
  jjchSamp.setFreq(  MidiSetFreq(64,  jjch_SAMPLERATE,   jjch_NUM_CELLS));   //(float) jjch_SAMPLERATE / (float) jjch_NUM_CELLS);
  
  //jjohSamp.setFreq((float) jjoh_SAMPLERATE / (float) jjoh_NUM_CELLS);
  jjohSamp.setFreq(  MidiSetFreq(64,  jjoh_SAMPLERATE,   jjoh_NUM_CELLS));   //(float) jjoh_SAMPLERATE / (float) jjoh_NUM_CELLS);

  jjfx1Samp.setFreq((float) jjfx1_SAMPLERATE / ((float) jjfx1_NUM_CELLS));
  jjfx2Samp.setFreq((float) jjfx2_SAMPLERATE / ((float) jjfx2_NUM_CELLS));
  jjfx3Samp.setFreq((float) jjfx3_SAMPLERATE / ((float) jjfx3_NUM_CELLS));

  //jjfx1Samp.setStart(1024);//Attempt to remove the click...
  //jjfx1Samp.setLoopingOn();//just curious....loops forever - might be good for long samples...

  //jjsnSamp.start();


  startMozzi(CONTROL_RATE);
}

//int beat = 0;
//int oldBeat = 0;

void updateControl() {
  MIDI.read();
}


// strip the low bits off!
//int bitCrush(int x, int a)
//{
//  return (x >> a) << a;
//}

// strip the low bits off!
/* x comes in as an int to get the space we need to do the bitshifting.. I think? */
inline int8_t MidibitCrush(int x, byte bc)
{
    return ((x >> bc) << bc);
}


int updateAudio() {

  int drums = 
              MidibitCrush( jjbdSamp.next(), bc_bd) + 
              MidibitCrush( jjsnSamp.next(), bc_sn)  + 
              MidibitCrush( jjchSamp.next(), bc_hc)  + 
              MidibitCrush( jjohSamp.next(), bc_ho)  + 
              MidibitCrush( jjfx1Samp.next(), bc_f1)  + 
              MidibitCrush( jjfx2Samp.next(), bc_f2)  + 
              MidibitCrush( jjfx3Samp.next(), bc_f3) ;
        
  return drums << 1;
}


void loop() {
  audioHook(); // required here
}

