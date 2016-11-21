/*
  ServoMotor.h - ServoMotor library for reading the light intensity

  The methods are:
  ServoMotor - Class for manipulating LDRs connected to Arduino pins.

  attach(pin) - Attaches a ServoMotor to an I/O pin.
  readCommandAndRotate() - Reads the data came from Serial channel and rotate shaft angle by given degree
  roate(int degree) - Rotates shaft angle by given degree
*/

#ifndef ServoMotor_h
#define ServoMotor_h
#define ServoMotor_VERSION           1
#include <Servo.h>

class ServoMotor {
	public:
		ServoMotor();
		ServoMotor(int pin);
		void attach(int pin);          
		void readCommandAndRotate();
		void rotate(int degree);
		
	private:
		int _pin;
		Servo servo;
};
#endif
