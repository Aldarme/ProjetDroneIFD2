#include <Arduino.h>
#include <Adafruit_MotorShield.h>
#include "utility/Adafruit_MS_PWMServoDriver.h"

Adafruit_MotorShield AFMS = Adafruit_MotorShield(); 
Adafruit_DCMotor *myMotor1 = AFMS.getMotor(1);
Adafruit_DCMotor *myMotor2 = AFMS.getMotor(2);
Adafruit_DCMotor *myMotor3 = AFMS.getMotor(3);
Adafruit_DCMotor *myMotor4 = AFMS.getMotor(4);

void setupMotors()
{
  AFMS.begin();
  //sens de rotation des moteurs
  myMotor1->run(FORWARD);
  myMotor2->run(FORWARD);
  myMotor3->run(FORWARD);
  myMotor4->run(FORWARD);
}
void setup() {
  setupMotors();
}

void loop() {
  //on attribue une vitesse (entre 0 et 255) pour chaque moteur, peut être fait dans le setup
  //si l'on veut que la vitesse reste la même
  myMotor1->setSpeed(100);
  myMotor2->setSpeed(200);
  myMotor3->setSpeed(150);
  myMotor4->setSpeed(10);
}