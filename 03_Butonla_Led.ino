#define led 9
#define buton 7
int x=0;
void setup()
{
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(buton,INPUT);
  digitalWrite(led,LOW);
}
void loop()
{
if(digitalRead(buton)>0)
   {
     x +=5;
    analogWrite(led,x);
   }
  Serial.println(x);
 if(x>=255)
 {
  x=0;
 }
   delay(60);
   
}
