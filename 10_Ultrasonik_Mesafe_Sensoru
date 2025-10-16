#define echo 8
#define trig 7
float sure,mesafe;
void setup()
{
  pinMode(trig, OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);
  digitalWrite(trig,LOW);
}

void loop()
{
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  sure=pulseIn(echo,HIGH);
  mesafe=sure*0.03432/2;
  Serial.println(mesafe);
}
