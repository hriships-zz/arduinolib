# Sample Combined sketch for temprature, LDR and Servomotor
Note: Please manage memory carefully

    #include <UltraSonic.h>
    #include <ServoMotor.h>
    #include <LDR.h>
    #include <Temperature.h>

    int ULTRASONIC_TRIG_PIN = 2;
    int ULTRASONIC_ECHO_PIN = 4;
    int MOTOR_PIN = 6;
    int LDR_SENSOR_PIN = 3;
    int TEMPERATURE_SENSOR_PIN = A1;

    UltraSonic *ultraSonicSensor = NULL;
    ServoMotor *motor = NULL;
    LDR *lightSensor = NULL;
    Temperature *tempSensor = NULL;

    void setup() {
        Serial.begin (9600);
        ultraSonicSensor = new UltraSonic(ULTRASONIC_TRIG_PIN, ULTRASONIC_ECHO_PIN);
        motor = new ServoMotor(MOTOR_PIN);
        lightSensor = new LDR(LDR_SENSOR_PIN);
        tempSensor = new Temperature(TEMPERATURE_SENSOR_PIN);
    }

    void loop() {
        ultraSonicSensor -> calibrateEcho();
        lightSensor -> dReadLightIntensity();
        tempSensor -> readTemperature();
        Serial.println("");
        delay(5000);
    }

    void serialEvent() {
        motor -> readCommandAndRotate();
    }
