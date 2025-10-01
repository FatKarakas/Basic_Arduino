#define buton1 6
#define buton2 7
#define buton3 8
#define buton4 9
int x = 30;
int y = 5;
int sonuc = 0;
void setup() {
  Serial.begin(9600);
  pinMode(buton1,INPUT);
  pinMode(buton2,INPUT);
  pinMode(buton3,INPUT);
  pinMode(buton4,INPUT);
}
void sonucYazdir(int a){
  Serial.print("Sonuc: ");
  Serial.println(a);
}
int toplama(int a, int b){
  return a+b;
}
int cikarma(int a, int b){
  return a-b;
}
int carpma(int a, int b){
  return a*b;
}
int bolme(int a, int b){
  return a/b;
}
void loop() {
if(digitalRead(buton1)==HIGH){
  sonuc = toplama(x,y);
  sonucYazdir(sonuc);
}
else if(digitalRead(buton2)==HIGH){
  sonuc = cikarma(x,y);
  sonucYazdir(sonuc);
}
else if(digitalRead(buton3)==HIGH){
  sonuc = carpma(x,y);
  sonucYazdir(sonuc);
}
else if(digitalRead(buton4)==HIGH){
  sonuc = bolme(x,y);
  sonucYazdir(sonuc);
}

delay(110);
sonuc = 0;
}
