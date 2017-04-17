#ifndef __TOGGLEBUTTON_H__
#define __TOGGLEBUTTON_H__

#include <stdlib.h>

#define BUTTON_UP   HIGH
#define BUTTON_DOWN LOW

class ToggleButton
{
//variables
public:

	//VARIABLES
	unsigned char inpin;
  
  bool istate;
  bool pstate;

  //bool dotoggle;
  bool tstate;

  bool fired;
  
  int debounce;
  int sensorVal;
  unsigned long now;
  unsigned long btime;
  


	//FUNCTIONS: 
	ToggleButton() {
    istate = false;
    pstate=istate;
	}
 
	ToggleButton(unsigned char input, bool toggle=false){
    ToggleButton();
		inpin = input;
    tstate = toggle;
    debounce = 100;
    btime = 0;
	}
  
	~ToggleButton() {}

  void setup(){
    pinMode(inpin, INPUT_PULLUP);
  }

  void update(){

    sensorVal = digitalRead(inpin);

    //Set the instantaneous state of the button: 
    if (sensorVal == BUTTON_UP) {
      istate = false;
    } else {
      istate = true;
    }

   if (istate) {         // check if the input is HIGH (button released)
    if(!pstate && millis()-btime > debounce && !fired){
      
      tstate = !tstate;

      btime = millis();
      
      fired = true;
    }
    
  } else {
    if(pstate){
      fired = false;
    }
  }

    pstate = istate;

    /*
    //if(dotoggle){
      now = millis();
      //mark the time of the change:
      if(state!=last_state){
        last_time = now;
      }

      if((now - last_time) > debounce){

        if(sensorVal == BUTTON_DOWN){
          if(state != last_state)
            tstate = !tstate;
        }
        //update the last state..
        last_state = state; 
      }
    //}
    */
    
    
  }

}; //ToggleButton

#endif //__TOGGLEBUTTON_H__
