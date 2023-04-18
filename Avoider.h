#ifndef Avoider_h//if motor class is not yet defined
#define Avoider_h// defne motr class

#include <Servo.h>
#include <Arduino.h>
#include <NewPing.h>
#include "Motorclass.h"
#include <Arduino.h>//include arduino default library
class Avoider{
  private:
  int stopDist;
 int trigger;
 int echo;
 int MaxDistance;
 int inerations = 5;
float duration;
float distance;
int pos; //Declaring int variable named pos
int time = 0;//declaring int variable named time 
int steve = 90;//declaring int variable named steve equal to 90
bool stopper = 0;//Declaring boolvariable named stopper
public:
Avoider();
Avoider(int trigger, int echo, int MaxDistance );
float stopCMaway(int stopDist,Servo myservo, Car myCar);
};
#endif
