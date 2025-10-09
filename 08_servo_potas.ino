#include<Servo.h>
#define potans A0
int pos=0;
Servo servo_9;
void setup()
{
  Serial.begin(9600);
  servo_9.attach(9,500,2500);
}

void loop()
{
  int potansDeger=analogRead(potans);
  int degree=map(potansDeger,0,1023,0,180);
  servo_9.write(degree);
  Serial.println(degree);
  delay(15);
}
