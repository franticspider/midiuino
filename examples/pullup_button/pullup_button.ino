/*
 Input Pullup Serial

 This example demonstrates the use of pinMode(INPUT_PULLUP). It reads a
 digital input on pin 2 and prints the results to the serial monitor.

 The circuit:
 * Momentary switch attached from pin 2 to ground
 * Built-in LED on pin 13

 Unlike pinMode(INPUT), there is no pull-down resistor necessary. An internal
 20K-ohm resistor is pulled to 5V. This configuration causes the input to
 read HIGH when the switch is open, and LOW when it is closed.

 created 14 March 2012
 by Scott Fitzgerald

 http://www.arduino.cc/en/Tutorial/InputPullupSerial

 This example code is in the public domain

 */


#define B1_INPUT 2
#define B1_OUTPUT 13

#include "togglebutton.h"

ToggleButton b1(B1_INPUT,true);

void setup() {
  //start serial connection
  Serial.begin(9600);

  //configure pin2 as an input and enable the internal pull-up resistor
  //pinMode(2, INPUT_PULLUP);

  b1.setup();
  
  pinMode(13, OUTPUT);
  pinMode(4, OUTPUT);

}

void loop() {
  //read the pushbutton value into a variable
  int sensorVal = digitalRead(2);
  //print out the value of the pushbutton
  //Serial.println(sensorVal);

  b1.update();


  // Keep in mind the pullup means the pushbutton's
  // logic is inverted. It goes HIGH when it's open,
  // and LOW when it's pressed. Turn on pin 13 when the
  // button's pressed, and off when it's not:
    digitalWrite(13, b1.istate);
    digitalWrite(4 ,b1.tstate);
  
}
