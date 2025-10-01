
#define led 9
#define potas A0
int y =0;

void setup()
{
  Serial.begin(9600);

   pinMode(led, OUTPUT);
   digitalWrite(led, LOW);
  
}

void loop()
{
  y = analogRead(A0);
  int deger=map(y,0,1023,0,255);
  analogWrite(led,deger);
delay(60);
  
 
  

}
