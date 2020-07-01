#include <Servo.h>
Servo motor;
int x=0;
void setup()
{
}

void loop(){
  motor.attach(4);
  motor.write(170);
  motor.attach(7);
  motor.write(170);
}