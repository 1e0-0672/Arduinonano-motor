#include <Servo.h>
//Servo servo1, servo2;

Servo servo[2]; 


void setup() {
  // put your setup code here, to run once:
  servo[0].attach(2);
  servo[1].attach(3);
}

//int deg = 90;
int incr[2] = {1, 2};
int deg[2] = {90, 110};

void loop() {

  // deg  = deg + incr;
  for (int i=0; i < 2; i++) {
    if (deg[i] > 179) incr[i] = -incr[i];    
    if (deg[i] < 1) incr[i] = -incr[i];
    
    deg[i] += incr[i];
    servo[i].write(deg[i]);

    delay(25);
   }
  
}

/*
void loop() {
  // put your main code here, to run repeatedly:
  servol.write(90);
  delay(300);
  servol.write(140);
  delay(300);
}
*/