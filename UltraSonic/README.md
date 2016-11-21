# Ultrasonic Sensor Lib
To use this library, copy this(UltraSonic) directory under arduino libraries directory
```sh
e.g. C:\Program Files (x86)\Arduino\libraries
```

#Functions:
  attach(pin) - Attaches a UltraSonic to an i/o pin.
  calibrateEcho() - Function to  find the distance and duration for echo

# Example code
Find Distance
```sh
#include <UltraSonic.h>

int ULTRASONIC_TRIG_PIN = 2;
int ULTRASONIC_ECHO_PIN = 4;
UltraSonic *ultraSonicSensor = NULL;

void setup() {
  Serial.begin (9600);
  ultraSonicSensor = new UltraSonic(ULTRASONIC_TRIG_PIN, ULTRASONIC_ECHO_PIN);
}

void loop() {
  ultraSonicSensor->calibrateEcho();
  Serial.println("");
  delay(2000);
}
```