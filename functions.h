#ifndef FUNCTIONS
#define FUNCTIONS

void setDriveMotors(int power){
	motor[leftFront] = power;
	motor[rightFront] = power;
	motor[leftBack] = power;
	motor[rightBack] = power;
}

void setIntakeMotors(bool dir) {
	if (dir == 1)
	{
		motor[intake] = 128;
		motor[intakeBackup] = -128;
	}
	else
	{
		motor[intake] = 128;
		motor[intakeBackup] = -128;
	}
}

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
motor[intake]	= 0;
motor[intakeBackup]	= 0;
motor[catapult]	= 0;
}

void turnLeft(int power) {
	motor[leftFront] = 0;
	motor[rightFront] = power;
	motor[leftBack] = 0;
	motor[rightBack] = power;
}
#endif
