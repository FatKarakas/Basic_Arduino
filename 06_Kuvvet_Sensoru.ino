#define sensor A0
int dizi[10]={2,3,4,5,6,7,8,9,10,11};
void setup()
{
  Serial.begin(9600);
 for(int i=0;i<10;i++)
 {
   digitalWrite(dizi[i],LOW);
 }
}

void loop()
{
  int x=0;
  int deger=analogRead(sensor);
  int ledSayisi=map(deger,0,466,0,9);
  Serial.println(ledSayisi);
  for(int i=0;i<=ledSayisi;i++)
  {
    digitalWrite(dizi[i],HIGH);
  }
  delay(100);
  while(x<=10)
  {
  digitalWrite(dizi[x],LOW);
    x++;
  }
}
