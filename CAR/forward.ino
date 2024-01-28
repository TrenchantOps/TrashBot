#include <Servo.h>
Servo door;

int rightENA = 2;
int rightA1 = 3;
int rightA2 = 4;
int rightB1 = 5;
int rightB2 = 6;
int rightENB = 7;

bool rightAForward = HIGH;
bool rightBForward = LOW;
bool leftBForward = LOW;
bool leftAForward = HIGH;

int leftENA = 8;
int leftA1 = 9;
int leftA2 = 10;
int leftB1 = 11;
int leftB2 = 12;
int leftENB = 13;

int doorPin = A0;

void setup() {
  pinMode(rightENA, OUTPUT);
  pinMode(rightA1, OUTPUT);
  pinMode(rightA2, OUTPUT);
  pinMode(rightENB, OUTPUT);
  pinMode(rightB1, OUTPUT);
  pinMode(rightB2, OUTPUT);

  pinMode(leftENA, OUTPUT);
  pinMode(leftA1, OUTPUT);
  pinMode(leftA2, OUTPUT);
  pinMode(leftENB, OUTPUT);
  pinMode(leftB1, OUTPUT);
  pinMode(leftB2, OUTPUT);
  door.attach(A0,600,2300);
  door.write(0);


}

void loop() {
  /*
  digitalWrite(rightENA, HIGH);
  digitalWrite(rightA1, HIGH);
  
  digitalWrite(rightENB, HIGH);
  digitalWrite(rightB2, HIGH);

  digitalWrite(leftENA, HIGH);
  digitalWrite(leftA1, LOW);
  digitalWrite(leftA2, HIGH);
  
  digitalWrite(leftENB, HIGH);
  digitalWrite(leftB1, LOW);
  digitalWrite(leftB2, HIGH);

  */


}
