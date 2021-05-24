#include <Servo.h>

Servo servo1;  
int pos = 0;    

void setup() {
  servo1.attach(3);
  pinMode (2,INPUT);
  pinMode (4,INPUT);
  pinMode(5,OUTPUT) ; 
  pinMode(6,OUTPUT) ;
}

void loop() { 
    if (digitalRead(2) == LOW)
    {
      pos = 0;
      servo1.write(pos);
      delay(1000);
    }
    
    else 
    {
      pos = 90;
      servo1.write(pos);
    }
    if (digitalRead(4) == HIGH)
    {
      digitalWrite(6,HIGH) ;
      digitalWrite(5,LOW) ;
    }
    
    else 
    {
       digitalWrite(5,LOW) ;
       digitalWrite(6,LOW) ;
    }
}
