#include <Temperature.h>

int TEMPERATURE_SENSOR_PIN = A1;
Temperature *tempSensor = NULL;

void setup() {
  Serial.begin(9600);
  tempSensor = new Temperature(TEMPERATURE_SENSOR_PIN);
}

void loop() {
  tempSensor -> readTemperature();
  delay(500);
}
