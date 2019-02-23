#ifndef FUNCTIONS
#define FUNCTIONS

void setDriveMotors(int powerL, int powerR){
  motor[leftFront] = powerL;
  motor[leftBack] = powerL;
  motor[rightFront] = powerR;
  motor[rightBack] = powerR;
}

void setIntakeMotors(int power) {
  motor[intakeA] = power;
  motor[intakeB] = power;
}

void setCatapultMotors(int power) {
 motor[catapultA] = power;
 motor[catapultB] = power;
}

#endif
