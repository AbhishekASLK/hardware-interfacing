#include <Stepper.h>

const int stepsPerRevolution = 200;  // change this to fit the number of steps per revolution for your motor

// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

void setup() {
  // Set the speed of the stepper motor
  myStepper.setSpeed(100); // Set speed to 100 rpm (adjust as needed)
}

void loop() {
  // Rotate the motor continuously in one direction
  myStepper.step(stepsPerRevolution); // Step one full revolution
  delay(1); // Delay for smooth rotation (adjust as needed)
}
