int ir=10;
int led=13;
int x;
void setup()
{
  pinMode(10,INPUT);
  pinMode(13,OUTPUT);
}
void loop()
{
 x=digitalRead(10);
 delay(3);
 if(x==LOW)
 {
  digitalWrite(13,LOW);
  delay(500);
 }
 else
 {
  digitalWrite(13,HIGH);
  delay(100);
 }
}
