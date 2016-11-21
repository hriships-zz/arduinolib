#include <LDR.h>

int LDR_SENSOR_PIN = A0;
LDR *lightSensor = NULL;

void setup() {
  Serial.begin (9600);
  lightSensor = new LDR(LDR_SENSOR_PIN);
}

void loop() {
  lightSensor -> aReadLightIntensity();
  delay(500);
}
