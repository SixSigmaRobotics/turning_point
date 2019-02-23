#ifndef ROUTINES
#define ROUTINES

#ifndef FUNCTIONS
#include "functions.h"
#endif

void loadBall() {
  while ( SensorValue(cLimit)== 0) {
    motor[catapult] =  120;
  }
  motor[catapult] = 5;
}

void shootBall() {
  motor[catapult] = 120;
  wait1Msec(800);
  motor[catapult] = 0;
}

void turnoff() {
  setIntakeMotors(0);
  motor[catapult]	= 0;
}

void turnLeft(int power) {
  motor[leftFront] = 0;
  motor[rightFront] = power;
  motor[leftBack] = 0;
  motor[rightBack] = power;
}

#endif
