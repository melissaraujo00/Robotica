int motorA1 = 3; //Entrada 3 del L293D
int motorA2 = 5; // Entrada 4 del l293d
int motorB1 = 9; //Entrada 2 del l293d
int motorB2 = 11; //Entrada 1 del l293d

void setup() {
  // put your setup code here, to run once:
  pinMode(motorA1, OUTPUT);
  pinMode(motorA2, OUTPUT);
  pinMode (motorB1, OUTPUT);
  pinMode (motorB2, OUTPUT);
}
 
void loop() {
  // put your main code here, to run repeatedly:
  analogWrite (motorB2, 0);
  analogWrite  (motorA2,0);
  analogWrite  (motorA1,200);
  analogWrite  (motorB1, 200);
  delay(2000); 
  analogWrite (motorA1, 200);
  analogWrite  (motorB1,0);
  analogWrite  (motorA2,0);
  analogWrite  (motorB2, 0);
  delay(1000); 
  analogWrite (motorB2, 0);
  analogWrite  (motorA2,0);
  analogWrite  (motorA1,200);
  analogWrite  (motorB1, 200);
  delay(5000); 
  
  analogWrite (motorB2, 200);
  analogWrite  (motorA2,0);
  analogWrite  (motorA1,0);
  analogWrite  (motorB1, 0);
  delay(1000); 

   analogWrite (motorB2, 0);
  analogWrite  (motorA2,0);
  analogWrite  (motorA1,200);
  analogWrite  (motorB1, 200);
  delay(1000);
 
  
  
}
