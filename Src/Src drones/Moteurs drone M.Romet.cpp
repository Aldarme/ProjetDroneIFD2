#include <Arduino.h>
#include <Servo.h>
#include "ESC.h"

Servo esc[4];

void setupMotors() //Fonction qui permet l'initialisation des moteurs
{
  //Attribution des pins correspondants
  esc[0].attach(10);
  esc[1].attach(9);
  esc[2].attach(5);
  esc[3].attach(3);
  //Initialisation
  esc[0].writeMicroseconds(1000);
  esc[1].writeMicroseconds(1000);
  esc[2].writeMicroseconds(1000);
  esc[3].writeMicroseconds(1000);

  delay(2000);//Délai nécessaire à l'initialisation

  motorsSpeed(); //Lancement des moteurs 
}

void motorsSpeed()
{
    for(int i = 0; i < 4; i++)
    {
        esc[i].writeMicroseconds(1500);
    }
}

void setup() {
  setupMotors();
}

void loop() {
}