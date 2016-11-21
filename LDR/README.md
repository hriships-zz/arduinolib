# Light Intensity(LDR) Sensor Lib
To use this library, copy this(LDR) directory under arduino libraries directory
```sh
e.g. C:\Program Files (x86)\Arduino\libraries
```
# Example code
Analog Read
```sh
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
```

Digital Read
```sh
#include <LDR.h>

int LDR_SENSOR_PIN = 7;
LDR *lightSensor = NULL;

void setup() {
  Serial.begin (9600);
  lightSensor = new LDR(LDR_SENSOR_PIN);
}

void loop() {
  lightSensor -> dReadLightIntensity();
  delay(500);
}
```