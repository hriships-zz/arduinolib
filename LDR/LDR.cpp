#include <Arduino.h> 
#include "LDR.h"

LDR::LDR() {}

LDR::LDR(int pin) {
	this->attach(pin);
}

void LDR::attach(int pin) {
	_pin = pin;
	pinMode(_pin, INPUT);
}

int LDR::aReadLightIntensity() {
	int sensorReading = analogRead(_pin);
	writeToSerial(sensorReading);
	return  sensorReading; 
}

int LDR::dReadLightIntensity() {
	int sensorReading = digitalRead(_pin);
	writeToSerial(sensorReading);
	return  sensorReading; 
}

void LDR::writeToSerial(int sensorReading) {
 	Serial.print("LDR:");
	Serial.print(sensorReading);
    Serial.print("#");
}
