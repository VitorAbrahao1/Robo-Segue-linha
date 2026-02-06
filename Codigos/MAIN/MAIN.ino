#include "AFMotor_R4.h"
 //Define sensores
#define S2 A0
#define S3 A1
#define S4 A2


AF_DCMotor M1(1); //Define Motores
AF_DCMotor M2(2);
AF_DCMotor M3(3);
AF_DCMotor M4(4);

//Define variavel do valor de leitura do sensor
int VS2;
int VS3;
int VS4;

//Define a variavel de velocidade dos motores
int velocidade_motor = 120;
int velocidade_giro = 190;

//Define a variavel do valor de mudança
int valor = 500;
//int valor = 500;

void setup() {
  //Serial.begin(9600);

  M1.setSpeed(velocidade_motor);
  M1.run(RELEASE);
  M2.setSpeed(velocidade_motor);
  M2.run(RELEASE);
  M3.setSpeed(velocidade_motor);
  M3.run(RELEASE);
  M4.setSpeed(velocidade_motor);
  M4.run(RELEASE);

}

void loop() {
  //VS1 = analogRead(S1);
  VS2 = analogRead(S2);
  VS3 = analogRead(S3);
  VS4 = analogRead(S4);
  //delay(20);
  //VS5 = analogRead(S5);

  if ((VS2 > valor) && (VS3 < valor) && (VS4 > valor)){
    //Branco Preto Branco = Segue reto
    //Serial.println('FORWARD');
    M1.setSpeed(velocidade_motor);
    M2.setSpeed(velocidade_motor);
    M3.setSpeed(velocidade_motor);
    M4.setSpeed(velocidade_motor);

    M1.run(FORWARD);
    M2.run(FORWARD);
    M3.run(FORWARD);
    M4.run(FORWARD);
  }

  //if ((VS2 > valor) && (VS3 > valor) && (VS4 > valor)){
    //Branco Branco Branco = STOP
    //Serial.println('FORWARD');
    //M1.run(BRAKE);
    //M2.run(BRAKE);
    //M3.run(BRAKE);
    //M4.run(BRAKE);
  //}
  if ((VS2 < valor) && (VS3 < valor) && (VS4 > valor)){
    //Preto Preto Branco = Gira Para A Esquerda
    //Serial.println('Esquerda');
    M1.setSpeed(velocidade_giro);
    M2.setSpeed(velocidade_giro);
    M3.setSpeed(velocidade_giro);
    M4.setSpeed(velocidade_giro);

    M1.run(FORWARD);
    M2.run(BACKWARD);
    M3.run(BACKWARD);
    M4.run(FORWARD);
  }

 if ((VS2 < valor) && (VS3 > valor) && (VS4 > valor)){
    //Preto Branco Branco = Gira Para A Esquerda
    //Serial.println('Esquerda');
    M1.setSpeed(velocidade_giro);
    M2.setSpeed(velocidade_giro);
    M3.setSpeed(velocidade_giro);
    M4.setSpeed(velocidade_giro);

    M1.run(FORWARD);
    M2.run(BACKWARD);
    M3.run(BACKWARD);
    M4.run(FORWARD);
  }

  if ((VS2 > valor) && (VS3 < valor) && (VS4 < valor)){
    //Branco Preto Preto = Gira Para A Direita
    //Serial.println('Esquerda');
    M1.setSpeed(velocidade_giro);
    M2.setSpeed(velocidade_giro);
    M3.setSpeed(velocidade_giro);
    M4.setSpeed(velocidade_giro);

    M1.run(BACKWARD);
    M2.run(FORWARD);
    M3.run(FORWARD);
    M4.run(BACKWARD);
  }
  if ((VS2 > valor) && (VS3 > valor) && (VS4 < valor)){
    //Branco Branco Preto = Gira Para A Direita
    //Serial.println('Esquerda');
    M1.setSpeed(velocidade_giro);
    M2.setSpeed(velocidade_giro);
    M3.setSpeed(velocidade_giro);
    M4.setSpeed(velocidade_giro);

    M1.run(BACKWARD);
    M2.run(FORWARD);
    M3.run(FORWARD);
    M4.run(BACKWARD);
  }

}
