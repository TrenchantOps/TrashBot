#include <Servo.h>
Servo door;

/*
ena controls power (on/off)
A1 and A2 control direction
b1 b2 control direction for second
enb controls power
*/

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

int duration = 5000; /*duration for each function 5 seconds*/

  void setup() {
  Serial.begin(9600);
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
  door.attach(A0, 600, 2300);
  door.write(0);
}



 void Allstop() {
  digitalWrite(rightENA, LOW);
  digitalWrite(rightENB, LOW);
  digitalWrite(leftENA, LOW);
  digitalWrite(leftENB, LOW);
}

void openDoor(){
  door.write(0);
}

void closeDoor(){
  door.write(160);
}

void Forward() {
  
	/*right front*/
  digitalWrite(rightENA, HIGH);
  digitalWrite(rightA1, HIGH);
  
	/*right back*/
  digitalWrite(rightENB, HIGH);
  digitalWrite(rightB2, HIGH);

	/*left front*/
  digitalWrite(leftENA, HIGH);
  digitalWrite(leftA1, LOW);
  digitalWrite(leftA2, HIGH);
  
	/*left back*/
  digitalWrite(leftENB, HIGH);
  digitalWrite(leftB1, LOW);
  digitalWrite(leftB2, HIGH);


	
	/*all stop*/
}

void Left() {
/*right front*/
  digitalWrite(rightENA, HIGH);
  digitalWrite(rightA1, HIGH);
  
	/*right back*/
  digitalWrite(rightENB, HIGH);
  digitalWrite(rightB1, LOW);
  digitalWrite(rightB2, HIGH);

	/*left front*/
  digitalWrite(leftENA, HIGH);
  digitalWrite(leftA1, HIGH);
  digitalWrite(leftA2, LOW);
  
	/*left back*/
  digitalWrite(leftENB, HIGH);
  digitalWrite(leftB1, HIGH);
  digitalWrite(leftB2, LOW);

	//.25 seconds
	delay(250);
	Allstop();

}


void Right() {
/*right front*/
  digitalWrite(rightENA, HIGH);
  digitalWrite(rightA1, LOW);
  digitalWrite(rightA2, HIGH);
  
	/*right back*/
  digitalWrite(rightENB, HIGH);
  digitalWrite(rightB1, HIGH);
  digitalWrite(rightB2, LOW);

	/*left front*/
  digitalWrite(leftENA, HIGH);
  digitalWrite(leftA1, LOW);
  digitalWrite(leftA2, HIGH);
  
	/*left back*/
  digitalWrite(leftENB, HIGH);
  digitalWrite(leftB1, LOW);
  digitalWrite(leftB2, HIGH);

	//.250 seconds
	delay(250);
	Allstop();

}


void loop() {
  if (Serial.available() > 0) {
   
    String data = Serial.readStringUntil('\n');
    Serial.print("You sent me: ");
    Serial.println(data);

    if (data == "Forward") {
      Forward();
    }

    if (data == "Left") {
      Left(); 
    }

    if (data == "Right") {
      Right();
    }

    if (data == "Stop") {
      Allstop();

    }
    
  }
}
