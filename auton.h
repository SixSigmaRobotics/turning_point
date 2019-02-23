#ifndef AUTON
#define AUTON

#ifndef FUNCTIONS
#include "functions.h"
#endif

#ifndef ROUTINES
#include "routines.h"
#endif


void forwardFlip(int t) {
  setDriveMotors(50, 50);
  wait1Msec(t);
}

void backwardsFlag(int t) {
  setDriveMotors(-50, -50);
  wait1Msec(t);
}

void middleFlag()
{
  loadBall();
  setIntakeMotors(0);
  shootBall();
  wait1Msec(2500);
  allOff();
}

void middleFlagImproved()
{
  setIntakeMotors(0);
  shootBall();
  wait1Msec(2500);
  allOff();
  motor[leftFront] = -120;
  motor[rightFront] = -55;
  motor[leftBack] = -120;
  motor[rightBack] = -55;
  wait1Msec(1500);
  allOff();
  setDriveMotors(0, 0);
}



#endif
