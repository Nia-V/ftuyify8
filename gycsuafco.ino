#include "Avoider.h"
#include "Remote.h"
Avoider EyesofTiger(13, 12, 400);
Car myCar;





void setup(){

  Serial.begin(9600);// begin serial comunication

}

void loop(){
  int buttonPressed = RemRun();
switch (buttonPressed) {
  case VOLPLUS :
    myCar.Forwards(100);
    break;
  case VOLMIN :
   
    break;
  default:
    // if nothing else matches, do the default
    // default is optional
    break;
}
}
