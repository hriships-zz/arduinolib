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