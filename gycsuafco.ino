#include <Servo.h>

#include "Avoider.h"
#include "Remote.h"
Avoider EyesofTiger(13, 12, 400);
Car myCar;
Servo myServo;





void setup(){

  Serial.begin(9600);// begin serial comunication
myServo.attach(10);
}

void loop(){
  int buttonPressed = RemRun();
switch (buttonPressed) {
  case VOLPLUS :
    myCar.Forwards(100);
    break;
  case VOLMIN :
   myCar.Backwards(100);
    break;
     case REV :
   myCar.Left(100);
    break;
     case FWD :
   myCar.Right(100);
    break;
     case UP :
   myServo.write(140);
    break;
     case DWN :
   myServo.write(40);
    break;
     case PLAY :
   
    break;
     case EQ :
   
    break;
     case REPT :
   
    break;
       case ON :
   myCar.STOP();
   myServo.write(90);
      break;
  default:
    // if nothing else matches, do the default
    // default is optional
    break;
}
}
