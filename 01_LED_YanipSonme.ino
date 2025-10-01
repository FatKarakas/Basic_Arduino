# define led 9
void setup()
{
  pinMode(led, OUTPUT);
  
}

void loop()
{
  digitalWrite(led, HIGH); // LED yan
  delay(1000); // 1 saniye bekle
  digitalWrite(led, LOW); // LED sön
  delay(1000);  // 1 saniye bekle
}
