#include <Arduino.h> 
#include "Temperature.h"

Temperature::Temperature() {}

Temperature::Temperature(int pin) {
	this->attach(pin);
}

void Temperature::attach(int pin) {
	_pin = pin;
	pinMode(_pin, INPUT);
}

float Temperature::readTemperature() {
	int reading = analogRead(_pin);
	
	float voltage = reading * 5.0;
	voltage /= 1024.0;
	float temperatureC = (voltage - 0.5) *10.0;
	float temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;
	
	Serial.print("TEMP:C:"); 
	Serial.print(temperatureC); 
	Serial.print("#");
	Serial.print("TEMP:F:"); 	
	Serial.print(temperatureF);
    Serial.print("#");
	
	return  voltage; 
}