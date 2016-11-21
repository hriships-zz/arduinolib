/*
  LDR.h - LDR library for reading the light intensity

  The methods are:
  LDR - Class for manipulating LDRs connected to Arduino pins.

  attach(pin) - Attaches a LDR to an i/o pin.
  aReadLightIntensity() - Function to read the light intensity using analog pin
  dReadLightIntensity() - Function to read the light intensity using digital pin
*/

#ifndef LDR_h
#define LDR_h

#define LDR_VERSION           1

class LDR {
	public:
		LDR();
		LDR(int pin);
		void attach(int pin);          
		int aReadLightIntensity();
		int dReadLightIntensity();
		
	private:
		void writeToSerial(int);
		int _pin;
};

#endif
