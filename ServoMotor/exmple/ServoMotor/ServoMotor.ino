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
