#include<Servo.h>
#define fotorez A0;
int pos=0;
Servo servo;
void setup()
{
  Serial.begin(9600);
  servo.attach(9,500,2500);
}

void loop()
{
  int siddet=analogRead(A0);
  int degree=map(siddet,0,471,0,180);
  Serial.print("siddet:	");
  Serial.println(siddet);
  servo.write(degree);
  Serial.println(degree);
  delay(15);
}
