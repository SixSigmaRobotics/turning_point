#ifndef AUTON
#define AUTON
#include "functions.h"

void forwardFlip(int t) {
	setDriveMotors(50);
	wait1Msec(t);
}

void backwardsFlag(int t) {
	setDriveMotors(-50);
	wait1Msec(t);
}

void middleFlag()
{
	loadBall();
	setIntakeMotors(0);
	shootBall();
	wait1Msec(2500);
	turnoff();
}

void middleFlagImproved()
{
	setIntakeMotors(0);
	shootBall();
	wait1Msec(2500);
	turnoff();
	motor[leftFront] = -120;
	motor[rightFront] = -55;
	motor[leftBack] = -120;
	motor[rightBack] = -55;
	wait1Msec(1500);
	turnoff();
	setDriveMotors(0);
}

void
#endif
