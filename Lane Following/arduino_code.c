
// assign pin num
int right_pin = 12;
int left_pin = 13;
int const ENA = 10;  
int const ENB = 11; 


// initial command
int command = 0;

void setup()

{
  pinMode(right_pin, OUTPUT);
  pinMode(left_pin, OUTPUT);
  pinMode(ENA, OUTPUT);   // set all the motor control pins to outputs
  pinMode(ENB, OUTPUT);

  Serial.begin(115200);
  
  while (!Serial);
  
  Serial.println("Opencv Self Driving Robot");

}

void loop() {

if (Serial.available())

{
  //int state = Serial.parseInt();
  int state = Serial.read();

  if (state == 4)
  {
    
    digitalWrite(left_pin, LOW);
    digitalWrite(right_pin, HIGH);
    digitalWrite(ENA, HIGH);
    digitalWrite(ENB, HIGH);
    Serial.println("Left");
  }

  if (state == 2)
  {
    digitalWrite(left_pin, LOW);
    digitalWrite(right_pin, LOW);
    digitalWrite(ENA, HIGH);
    digitalWrite(ENB, HIGH);
    Serial.println("Right");
    Serial.println("Reverse");
  }

  if (state == 3)
  {
  
    digitalWrite(left_pin, HIGH);
    digitalWrite(right_pin, LOW);
    digitalWrite(ENA, HIGH);
    digitalWrite(ENB, HIGH);

  Serial.println("Right");
  }
  if (state == 1)
  {
  
    digitalWrite(left_pin, HIGH);
    digitalWrite(right_pin, HIGH);
    digitalWrite(ENA, HIGH);
    digitalWrite(ENB, HIGH);

  Serial.println("Forward");
  }
  if (state == 5)
  {
  
    digitalWrite(left_pin, LOW);
    digitalWrite(right_pin, LOW);
    digitalWrite(ENA, LOW);
    digitalWrite(ENB, LOW);

  Serial.println("Stop");
  }

}

}
