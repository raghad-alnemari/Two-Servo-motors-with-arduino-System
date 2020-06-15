#include <Servo.h>

Servo servo1; 
Servo servo2;

int i = 0;

void setup() {
  servo1.attach(3);
  servo2.attach(5); 
}

void loop() {
  for (i = 0; i < 180; i++) { 
    servo1.write(i);              
    servo2.write(i);           
    delay(10);                      
  }
  for (i = 180; i > 0; i--) { 
    servo1.write(i);                
    servo2.write(i);              
    delay(10);                      
  }

}
