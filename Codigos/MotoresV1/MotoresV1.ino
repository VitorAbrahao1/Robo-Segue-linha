#include "AFMotor_R4.h"

int velocidade = 150;

AF_DCMotor M1(1);
AF_DCMotor M2(2);
AF_DCMotor M3(3);
AF_DCMotor M4(4);

void setup() {
  
  M1.setSpeed(velocidade);
  M1.run(RELEASE);
  M2.setSpeed(velocidade);
  M2.run(RELEASE);
  M3.setSpeed(velocidade);
  M3.run(RELEASE);
  M4.setSpeed(velocidade);
  M4.run(RELEASE);

  M1.run(BACKWARD);
  M2.run(FORWARD);
  M3.run(FORWARD);
  M4.run(BACKWARD);

}

void loop() {
  

}
