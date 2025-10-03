#define ldr A0
#define led 9
void setup() { 
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  digitalWrite(led,LOW);
  
}
void loop() { 
  int x=analogRead(A0);
  x=map(x,679,6,0,255);
  Serial.println(x);
if(x>0)
{
  analogWrite(led,x);
 
}
  if(x<255)
  {
    x=0;
  }
  delay(60);
} 
