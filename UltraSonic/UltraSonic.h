/*
  UltraSonic.h - UltraSonic library for reading the light intensity

  The methods are:
  UltraSonic - Class for manipulating UltraSonics connected to Arduino pins.

  attach(pin) - Attaches a UltraSonic to an i/o pin.
  calibrateEcho() - Function to  find the distance and duration for echo
*/

#ifndef UltraSonic_h
#define UltraSonic_h

#define UltraSonic_VERSION           1

struct UltraSonicData {
	long duration;
	int distance;	
};

class UltraSonic {
	public:
		UltraSonic();
		UltraSonic(int, int);
		void attach(int, int);          
		UltraSonicData calibrateEcho();
		
	private:
		int _trigPin;
		int _echoPin;
		UltraSonicData sensorReading;
};

#endif
