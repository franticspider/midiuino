


//#include <TrueRandom.h>
/*
  You will need the TrueRandom library: http://code.google.com/p/tinkerit/wiki/TrueRandom
  Drum Machine mkII
  Original Code by: Sebastian Tomczak
  Remade to have random beats by: Blinkyblinky
  Have Fun!


  sjh: based on this, but heavily modded!
  http://www.instructables.com/id/Randomized-Arduino-Drum-Machine/
  
  the great thing about this is that it's a single file with no libraries!

  Allows you to understand how the playback is working...
*/

int barLength = 16;


byte kick[] =

{

  127, 80, 42, 5, 165, 242, 241, 233, 128, 73, 48, 22, 127, 69, 55, 113, 151, 183, 209, 217, 223, 228, 233, 215, 161, 117, 91, 76, 65, 49, 37, 31, 31, 48, 83, 120, 146, 166, 183, 198, 206, 210, 209, 199, 178, 145, 111, 88, 78, 73, 69, 67, 72, 80, 88, 97, 109, 124, 137, 150, 163, 171, 174, 172, 168, 160, 144, 125, 114, 110, 108, 104, 104, 106, 109, 110, 112, 117, 124, 129, 135, 142, 145, 145, 143, 140, 137, 132, 128, 125, 122, 119, 118, 119, 119, 119, 118, 118, 120, 124, 126, 129, 132, 135, 137, 137, 135, 132, 131, 130, 129, 128, 126, 126, 124, 123, 121, 120, 120, 122, 123, 124, 126, 128, 129, 130, 130, 131, 131, 131, 130, 130, 130, 129, 129, 128, 126, 125, 125, 124, 124, 124, 124, 125, 126, 126, 128, 128, 128, 129, 129, 129, 129, 129, 128, 128, 128, 128, 126, 126, 126, 126, 126, 126, 126, 126, 126, 128, 127, 126, 128, 128, 128, 128, 128, 128, 128, 128, 126, 126, 126, 126, 126, 126, 126, 126, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126

};

byte snare[] =

{

  127, 215, 65, 212, 56, 102, 135, 122, 51, 201, 220, 46, 175, 80, 152, 95, 123, 116, 184, 155, 59, 122, 100, 161, 143, 173, 101, 155, 97, 73, 112, 98, 176, 96, 140, 77, 134, 109, 132, 149, 112, 149, 97, 161, 98, 151, 98, 155, 149, 112, 157, 103, 133, 106, 167, 97, 166, 108, 129, 124, 136, 146, 124, 136, 129, 150, 94, 130, 105, 141, 146, 128, 129, 99, 150, 121, 141, 99, 142, 116, 131, 114, 118, 143, 127, 143, 115, 144, 120, 137, 109, 129, 131, 139, 129, 113, 144, 119, 145, 117, 135, 129, 134, 136, 124, 130, 130, 139, 121, 136, 121, 132, 128, 127, 126, 122, 130, 126, 138, 120, 136, 122, 131, 123, 130, 128, 127, 128, 118, 132, 125, 131, 122, 131, 125, 131, 122, 126, 128, 126, 129, 121, 129, 123, 132, 129, 127, 131, 123, 128, 125, 130, 123, 131, 123, 128, 131, 129, 128, 126, 125, 124, 131, 121, 124, 129, 130, 126, 124, 126, 127, 130, 125, 126, 128, 126, 128, 126, 126, 126, 126, 125, 128, 126, 126, 126, 126, 126, 126, 125, 128, 126, 126, 126, 126, 126, 126, 126, 126, 128, 128, 126, 128, 126, 127, 126, 128, 125, 127, 128, 128, 126, 126, 128, 126, 126, 128, 128, 128, 128, 128, 126, 128, 126, 126, 128, 128, 126, 126, 128, 128, 126, 126, 127, 126, 128, 126, 126, 128, 128, 128, 126, 126, 126, 128, 128, 126, 126, 126, 128, 128, 126, 128, 128, 126, 126

};


byte hat[] =


{

  127, 128, 225, 217, 99, 38, 61, 153, 152, 144, 133, 73, 122, 144, 65, 188, 87, 170, 164, 111, 122, 151, 114, 88, 174, 77, 140, 92, 122, 141, 156, 124, 121, 123, 126, 133, 132, 139, 119, 120, 127, 141, 130, 122, 129, 127, 132, 121, 139, 118, 130, 131, 129, 132, 130, 134, 126, 128, 130, 126, 122, 132, 129, 127, 131, 126, 128, 127, 126, 125, 127, 125, 128, 125, 128, 128, 127, 127, 126, 127, 128, 128, 128, 127, 127, 127, 127, 127, 128, 127, 127, 126, 127, 127, 128, 127, 128, 126, 127, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 128, 128, 126, 126, 128, 127, 126, 127, 126, 127, 127, 126, 127, 126, 127, 127, 127, 127, 127, 126, 127, 127, 127, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 126, 126, 127, 127, 127, 126, 127, 127, 127, 126, 127, 127, 126, 127, 127, 127, 127, 127, 127, 126, 126, 126, 126, 126, 126, 126, 127, 127, 126, 127, 126, 126, 127, 126, 127, 126, 126, 126, 126, 126, 126, 126, 127, 127, 126, 127, 127, 127, 127, 126, 126, 127, 127, 127, 126, 127, 126, 127, 127, 127, 127, 127, 126, 126, 127, 127, 126, 127, 127, 127, 127, 126, 127, 127, 127, 127, 127, 127, 127, 127

};


byte crash[] =


{

  127, 128, 225, 217, 99, 38, 61, 153, 152, 144, 133, 73, 122, 144, 65, 188, 87, 170, 164, 111, 122, 151, 114, 88, 174, 77, 140, 92, 122, 141, 156, 124, 121, 123, 126, 133, 132, 139, 119, 120, 127, 141, 130, 122, 129, 127, 132, 121, 139, 118, 130, 131, 129, 132, 130, 134, 126, 128, 130, 126, 122, 132, 129, 127, 131, 126, 128, 127, 126, 125, 127, 125, 128, 125, 128, 128, 127, 127, 126, 127, 128, 128, 128, 127, 127, 127, 127, 127, 128, 127, 127, 126, 127, 127, 128, 127, 128, 126, 127, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 128, 128, 126, 126, 128, 127, 126, 127, 126, 127, 127, 126, 127, 126, 127, 127, 127, 127, 127, 126, 127, 127, 127, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 126, 126, 127, 127, 127, 126, 127, 127, 127, 126, 127, 127, 126, 127, 127, 127, 127, 127, 127, 126, 126, 126, 126, 126, 126, 126, 127, 127, 126, 127, 126, 126, 127, 126, 127, 126, 126, 126, 126, 126, 126, 126, 127, 127, 126, 127, 127, 127, 127, 126, 126, 127, 127, 127, 126, 127, 126, 127, 127, 127, 127, 127, 126, 126, 127, 127, 126, 127, 127, 127, 127, 126, 127, 127, 127, 127, 127, 127, 127, 127

};



void setup() {

  //Luckily this seems to set output to the same pin as Mozzi I think...

  // declare the SpeakerPin as an OUTPUT:
  //               76543210
//  DDRD = DDRD | B11111000;  //Sets pins 3-7 as output ...

DDRD = DDRD | B11000000;  //Sets pins 6-7 as output ... (NB: Some leakage, as we get quiet audio out of pins


/*https://www.arduino.cc/en/Reference/PortManipulation
 * 
  DDRD = DDRD | B11111100;  // this is safer as it sets pins 2 to 7 as outputs
                    // without changing the value of pins 0 & 1, which are RX & TX 
*/

}

int mymillis=10;
int sno = 0;

void loop() {

  /* Using the trueRandom library, the following 20 lines looked like this:
    wavesound =   TrueRandom.random(1,5);
  */

  /* really not much point having 20 of these as we are in the loop module */
  //wavesound =   random(1,5);

  /*
    wavesound1 =  random(1,5);
    wavesound2 =  random(1,5);
    wavesound3 =  random(1,5);
    wavesound4 =  random(1,5);
    wavesound5 =  random(1,5);
    wavesound6 =  random(1,5);
    wavesound7 =  random(1,5);
    wavesound8 =  random(1,5);
    wavesound9 =  random(1,5);
    wavesound10 = random(1,5);
    wavesound11 = random(1,5);
    wavesound12 = random(1,5);
    wavesound13 = random(1,5);
    wavesound14 = random(1,5);
    wavesound15 = random(1,5);
    wavesound16 = random(1,5);
    wavesound17 = random(1,5);
    wavesound18 = random(1,5);
    wavesound19 = random(1,5);
    wavesound20 = random(1,5);*/
  int i;
  for (i = 0; i < 4; i++)
    playBeat(sno);//wavesound);

  sno++;
  if (sno > 5)sno = 0;

  mymillis+=10;

  /*
    playBeat(wavesound1);
    playBeat(wavesound2);
    playBeat(wavesound3);
    playBeat(wavesound4);
    playBeat(wavesound5);
    playBeat(wavesound6);
    playBeat(wavesound7);
    playBeat(wavesound8);
    playBeat(wavesound9);
    playBeat(wavesound10);
    playBeat(wavesound11);
    playBeat(wavesound12);
    playBeat(wavesound13);
    playBeat(wavesound14);
    playBeat(wavesound15);
    playBeat(wavesound16);
    playBeat(wavesound17);
    playBeat(wavesound18);
    playBeat(wavesound19);
    playBeat(wavesound20);
  */

}


/*The original used a pot to control the speed, connected to pin1 - we don't want that (we'll be using midi)
   so I wrote a function to do the delay
*/
void
myDelay() {

  //delayMicroseconds(analogRead(1) + 1);

  //cool slowness:
  //delayMicroseconds(2023);

  //Use a variable to change the pitch
  delayMicroseconds(mymillis);


}


void playBeat(byte beat) {

  if (beat == 1) {

    for (int i = 0; i < 256; i ++) {

      myDelay();

    }

  }

  else if (beat == 2) {

    playKick();

  }

  else if (beat == 3) {

    playSnare();

  }

  else if (beat == 4) {

    playHat();

  }

  else if (beat == 5) {

    playCrash();

  }


  delay(20);

}

void playKick() {

  for (int i = 0; i < 256; i ++) {

    PORTD = kick[i];

    myDelay();

  }

  PORTD = 127;

}



void playSnare() {

  for (int i = 0; i < 256; i ++) {

    PORTD = snare[i];

    myDelay();

  }

  PORTD = 127;

}



void playHat() {

  for (int i = 0; i < 256; i ++) {

    PORTD = hat[i];

    myDelay();

  }

  PORTD = 127;

}


void playCrash() {

  for (int i = 0; i < 256; i ++) {

    PORTD = crash[i];

    myDelay();

  }

  PORTD = 127;

}


