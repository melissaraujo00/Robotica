int motorA1 = 3; //Entrada 3 del L293D
int motorA2 = 5; // Entrada 4 del l293d
int motorB1 = 9; //Entrada 2 del l293d
int motorB2 = 11; //Entrada 1 del l293d
void setup()
{
  pinMode(motorA1, OUTPUT);
  pinMode(motorA2, OUTPUT);
  pinMode (motorB1, OUTPUT);
  pinMode (motorB2, OUTPUT);
  
}

void loop()
{
  digitalWrite(motorA1, HIGH);
  digitalWrite(motorB1, HIGH);
  digitalWrite(motorB2, LOW);
  digitalWrite(motorA2, LOW);
  delay(5000); 
  
  digitalWrite(motorA1, LOW);
  digitalWrite (motorA2, LOW);
  digitalWrite(motorB1, LOW);
  digitalWrite(motorB2, LOW);
  delay (5000);
 
  digitalWrite (motorA1,LOW);
  digitalWrite(motorA2,HIGH);
  digitalWrite(motorB1,LOW);
  digitalWrite (motorB2, HIGH);
  delay (5000);
  
  digitalWrite(motorA1, LOW);
  digitalWrite (motorA2, LOW);
  digitalWrite(motorB1, LOW);
  digitalWrite(motorB2, LOW);
  delay (5000);
}
