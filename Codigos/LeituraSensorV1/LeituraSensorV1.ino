#define S2 A0
#define S3 A1
#define S4 A2


int VS1;
int VS2;
int VS3;
int VS4;
int VS5;

void setup() {
  Serial.begin(9600);
}

void loop() {
  //VS1 = analogRead(S1);
  VS2 = analogRead(S2);
  VS3 = analogRead(S3);
  VS4 = analogRead(S4);
  //VS5 = analogRead(S5);

  //Serial.print(VS1); Serial.print(' '); 
  Serial.print(VS2); Serial.print(' '); 
  Serial.print(VS3); Serial.print(' '); 
  Serial.print(VS4); Serial.print(' ');
  //Serial.print(VS5); 
  Serial.println(' '); 

  delay(250);
}