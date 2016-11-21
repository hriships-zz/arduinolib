#include <Arduino.h> 
#include "ServoMotor.h"

ServoMotor::ServoMotor() {}

ServoMotor::ServoMotor(int pin) {
	this -> attach(pin);
}

void ServoMotor::attach(int pin) {
	_pin = pin;
	servo.attach(_pin);
	this -> rotate(0);
}

void ServoMotor::readCommandAndRotate() {
	String inputString = "";
	
	while (Serial.available()) {
		char inChar = (char)Serial.read();
		inputString += inChar;
	}
	
	this -> rotate(atoi(inputString.c_str()));
}

void ServoMotor::rotate(int degree) {
	servo.write(degree);
}
