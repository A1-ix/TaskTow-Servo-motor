#include <Servo.h>
int x,y;
Servo motor;
void setup()
{
  motor.attach(11);
}

void loop()
{
  x=analogRead(A0);
  y=map(x,0,1023,15,165);
  motor.write(y);
}