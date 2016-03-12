/* Simple use of a photoresistor conroling MIDI values

Connect the photoresistor one leg to pin A0, and pin to +5V
Connect a resistor from pin 0 to GND.

If you want an LED to  give visual feedback (handy for debugging)
Connect one end of a resistor to digital pin 11 
and the other to the positive arm of the LED
Connect the negative arm of the LED to GND

----------------------------------------------------
WIRE EACH PHOTORESISTOR YOUT NEED LIKE THIS:

           PhotoR     10K
 +5     o---/\/\/--.--/\/\/---o GND
                   |
 Pin A0 o-----------
(Pin A1)
(Pin A2) 


AND EACH LED LIKE THIS (IF YOU WANT ONE):

             220k     + LED -
 Pin 11 o---/\/\/------->|----o GND
(Pin 10)                   
(Pin  9) 

(We'll link them together using the software below)

----------------------------------------------------

TTYMIDI SETTINGS:

Call ttymidi like this:

 ttymidi -s  /dev/ttyACM1 -n arduino -b 38400 -v

the -s connects the serial port /dev/ttyACM1 to midi
the -n says that alsa will call this device "arduino"
the -b specifes the baud rate of 38400 - same as in setup()
the -v specifies verbose output - ttymidi will print out any
       midi message it receives. 
*/

/**************************************************************/

/* Get the midi library going */
#include <MIDI.h>
MIDI_CREATE_DEFAULT_INSTANCE();


/* Let's use a struct for each pvr/led/midi combo */
typedef struct st_pvd{
  int pv;
  //int vmax;
  //int vmin;
  byte channel;
  byte midival;
  byte midimax;
  byte midimin;
  byte midirange;
  byte ledpin;
  byte pvpin;
  byte ctrl;
  bool mmset;
} pvdata;


/* Initialise a pvdata structure */
void pvd_init(pvdata *pp, byte channel, byte ctrl,byte pvpin, byte ledpin, byte mmin, byte mmax){
  pp->channel   = channel;
  pp->midimax   = mmin;
  pp->midimin   = mmax;
  pp->midirange = pp->midimax - pp->midimin;
  pp->midival   = 0;
  pp->ctrl      = ctrl;
  pp->pvpin     = pvpin;
  pp->ledpin    = ledpin;
  pp->mmset     = false; 
  
  pinMode( ledpin, OUTPUT );
}

/* Update the midi with the current pvr value */
void pvd_update(pvdata *pp){

  /*simply bitshift the photoresistor range to get the range 0-127 from 0-1024*/
  pp->midival = pp->pv >> 3;     

  /*Check that the result is within the specified range */
  //pp->midival = pp->midival < pp->midimin ? pp->midimin : pp->midival;
  //pp->midival = pp->midival > pp->midimax ? pp->midimax : pp->midival;
  
  analogWrite(pp->ledpin, pp->pv>>4);
}

/* Read pvr and send midi note */
void pvd_read_to_note(pvdata *pp){
  pp->pv = analogRead(pp->pvpin);
  pvd_update(pp);
  MIDI.sendNoteOn(pp->midival,127,pp->channel);
}



/* Read pvr and send midi control */
void pvd_read_to_control(pvdata *pp){
  pp->pv = analogRead(pp->pvpin);
  pvd_update(pp);
  MIDI.sendControlChange(pp->ctrl,pp->midival,pp->channel);
}

/* Declare a pvdata struce for the three pvr/led combos */
pvdata pvr,pvg,pvb;


/* Specify the contols on the midi device we are connecting to */
const byte channel = 2;
const byte bme_vcfbasis = 53;
const byte bme_vcamodmix = 60;

/* Set up the links between midi, pvr and LED */
void setup()
{
  MIDI.begin(); //TODO: should this be omni if we are sending?         
  Serial.begin(38400);/* This baud rate is recommended for ALSA: http://alsa.opensrc.org/Serial  */
  
  /*Init the midi objects: 
           VARIABLE | MIDI CHANNEL | MIDI CONTROL | ANALOG PIN | LED PIN | MIN MIDI VAL | MAX MIDI VAL */ 
  pvd_init(&pvr,      channel,       0,             0,           11,       36,            84);  
  pvd_init(&pvg,      channel,       bme_vcfbasis,  1,           10,        0,            127);  
  pvd_init(&pvb,      channel,       bme_vcamodmix, 2,            9,        0,            127);  
}

void loop()
{
  /* Read the values from the pvr */
  pvd_read_to_note(&pvr);
  pvd_read_to_control(&pvg);
  pvd_read_to_control(&pvb);

  /* The note will sound for 50ms  */
  delay(50);
  
  /* Turn the note off for 50ms */
  MIDI.sendNoteOff(pvr.midival,0,pvr.channel);
  delay(50);
  
}
