#include<Servo.h>
#define ldr1 A0
#define ldr2 A1
#define motor 6
int aci=90;
int deger1=0;
int deger2=0;
int maxDeger=135;
int minDeger=45;
Servo smotor;
void setup()
{
  smotor.attach(motor,500,2500);
  smotor.write(aci);
  Serial.begin(9600);
}

void loop()
{
  deger1=analogRead(ldr1);
  deger2=analogRead(ldr2);
  if(deger1==0 &&deger2==0)
  {
    smotor.write(aci);
  }
  else if(deger1>deger2)
  {
    while(aci<=maxDeger)
    {
      aci++;
      smotor.write(aci);
      delay(50);
    }
  }
    else if(deger2>deger1)
  {
    while(aci>=minDeger)
    {
      aci--;
      smotor.write(aci);
      delay(50);
    }
  }
}
