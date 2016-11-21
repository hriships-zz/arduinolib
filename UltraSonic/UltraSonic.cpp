#include <Arduino.h> 
#include "UltraSonic.h"

UltraSonic::UltraSonic() {}

UltraSonic::UltraSonic(int trigPin, int echoPin) {
	this->attach(trigPin, echoPin);
}

void UltraSonic::attach(int trigPin, int echoPin) {
	_trigPin = trigPin;
	pinMode(_trigPin, OUTPUT);
	_echoPin = echoPin;
	pinMode(_echoPin, INPUT);
}

UltraSonicData UltraSonic::calibrateEcho() {
	digitalWrite(_trigPin, LOW);
	delayMicroseconds(2);
	 
	// Sets the _trigPin on HIGH state for 10 micro seconds
	digitalWrite(_trigPin, HIGH);
	delayMicroseconds(10);
	digitalWrite(_trigPin, LOW);
	
	// Reads the echoPin, returns the sound wave travel time in microseconds
	sensorReading.duration = pulseIn(_echoPin, HIGH);
	// Calculating the distance
	sensorReading.distance = sensorReading.duration*0.034/2;
	
	// Prints the distance on the Serial Monitor
	Serial.print("UltraSonic:Distance:");
	Serial.print(sensorReading.distance);
	Serial.print("#");
	
	Serial.print("UltraSonic:Duration:");
    Serial.print(sensorReading.duration);
    Serial.print("#");
	
	return  sensorReading; 
}