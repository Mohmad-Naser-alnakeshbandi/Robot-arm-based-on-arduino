#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;

int pot1 = A0;
int pot2 = A1;
int pot3 = A2;

int valPot1;
int valPot2;
int valpot3;

void setup()
{  
  servo1.attach(11);
  servo2.attach(10);
  servo3.attach(9);
}

void loop()
{  
  valPot1 = analogRead(pot1);
  valPot1 = map (valPot1, 0, 1023, 0, 180);  
  servo1.write(valPot1);                      
  delay(5);
  
  valPot2 = analogRead(pot2);
  valPot2 = map (valPot2, 0, 1023, 0, 180);
  servo2.write(valPot2);
  delay(5);
  
  valpot3 = analogRead(pot3);
  valpot3 = map (valpot3, 0, 1023, 0, 180);  
  servo3.write(valpot3);                      
  delay(5);
}
