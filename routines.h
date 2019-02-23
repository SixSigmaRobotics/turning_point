#ifndef ROUTINES
#define ROUTINES

#ifndef FUNCTIONS
#include "functions.h"
#endif

void loadBall() {
  while ( SensorValue(cLimit)== 0) {
    setCatapultMotors(120);
  }
  setCatapultMotors(0);
}

void shootBall() {
  setCatapultMotors(120);
  wait1Msec(800);
  setCatapultMotors(0);
}

void allOff() {
  setDriveMotors(0,0);
  setIntakeMotors(0);
  setCatapultMotors(0);
}

void turnLeft(int power) {
  motor[leftFront] = 0;
  motor[rightFront] = power;
  motor[leftBack] = 0;
  motor[rightBack] = power;
}

#endif
