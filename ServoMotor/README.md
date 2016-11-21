# Servo Motor Lib
To use this library, copy this(ServoMotor) directory under arduino libraries directory
```sh
e.g. C:\Program Files (x86)\Arduino\libraries
```

#Methods:
  attach(pin) - Attaches a ServoMotor to an I/O pin.
  readCommandAndRotate() - Reads the data from serial chanel and rotate the shaft angle by given degree
  roate(int degree) - Rotates the shaft angle by given degree

# Example code
Change Servo Motor Angle (0-180 degree)
```sh
#include <ServoMotor.h>

int MOTOR_PIN = 9;
ServoMotor *motor = NULL;

void setup() {
  Serial.begin(9600);
  motor = new ServoMotor(MOTOR_PIN);
}

void loop() {
   delay(1000);
}

void serialEvent() {
  motor->readCommandAndRotate();
  delay(1000);
}
```