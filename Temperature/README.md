# Temperature Sensor Lib
To use this library copy this directory under arduino libraries directory
```sh
e.g. C:\Program Files (x86)\Arduino\libraries
```
# Example code
```sh
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

```