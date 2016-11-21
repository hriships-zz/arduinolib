/*
  Temperature.h - Temperature library for reading the temperature

  The methods are:
  Temperature - Class for manipulating Temperature sensor connected to Arduino pins.

  attach(pin) - Attaches a LDR to an i/o pin
  readTemperature() - Function to read the temperature value
*/

#ifndef Temperature_h
#define Temperature_h
#include <math.h>

#define Temperature_VERSION	1

class Temperature {
	public:
		Temperature();
		Temperature(int pin);
		void attach(int pin);          
		float readTemperature();
		
	private:
		int _pin;
};

#endif
