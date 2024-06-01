#include <Servo.h>

//BASE

Servo myservo1; //declaramos la variable a cargo de nuestro servomotor

//Motor derecho
Servo myservo2; //declaramos la variable a cargo de nuestro servomotor

//Izquierdo
Servo myservo3; //declaramos la variable a cargo de nuestro servomotor

//Gripper

Servo myservo4; //declaramos la variable a cargo de nuestro servomotor

int pos = 0;// variable para la posicion de nuestro servomotor


void setup(){
  myservo1.attach(11);// declarar el puerto
  myservo2.attach(9);
  myservo3.attach(7);
  myservo4.attach(5);
}
void loop(){
    for (pos = 0; pos <= 0; pos += 1) { 
    // in steps of 1 degree
    myservo4.write(pos);             
    delay(15);                       
  }


  
  for (pos = 90; pos <= 180; pos += 1) { 
    // in steps of 1 degree
    myservo2.write(pos); 
    myservo4.write(0);             
    delay(15);                       
  }
   for (pos = 65; pos >= 120; pos -= 1) { 
    myservo3.write(pos); 
    myservo4.write(0);              
    delay(15);                       
  }
  
  for (pos = 180; pos >= 90; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo2.write(pos);  
    myservo4.write(0); // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }for (pos = 120; pos <= 120; pos += 1) { 
    // in steps of 1 degree
    myservo3.write(pos);   
    myservo4.write(0);            
    delay(15);                       
  }
  
                       
  for (pos = 120; pos >= 0; pos -= 1) { 
    myservo1.write(pos);
    myservo2.write(90);      
    myservo3.write(120);     
    myservo4.write(0);  
    delay(30);                       
  }
    
    myservo1.write(120);
    myservo2.write(90);      
    myservo3.write(120);  
    myservo4.write(0);     
    delay(10);                       


  for (pos = 90; pos <= 150; pos += 1) { 
    // in steps of 1 degree
    myservo2.write(pos); 
    myservo1.write(120); 
    myservo4.write(0);  
    delay(50);                       
  }
   for (pos = 65; pos >= 120; pos -= 1) { 
    myservo3.write(pos);   
    myservo1.write(120); 
    myservo4.write(0);           
    delay(50);                       
  }
                      
  for (pos = 0; pos <= 90; pos += 1) { 

    myservo1.write(120);
    myservo2.write(90);      
    myservo3.write(65);  
    myservo4.write(pos);        
    delay(15);                       
  }
  for (pos = 180; pos >= 90; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo2.write(pos);  
    myservo4.write(90); // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }for (pos = 120; pos <= 120; pos += 1) { 
    // in steps of 1 degree
    myservo3.write(pos);   
    myservo4.write(90);            
    delay(15);                       
  }

  
}

  
  
  
  
  
  




  
