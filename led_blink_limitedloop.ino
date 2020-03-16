void setup()
{
  pinMode(13,OUTPUT);
  ledblink(5);
}
void loop()
{
  //leave it blank
}
void ledblink(int repeat)
{
  for(int i=0; i<=repeat; i++)
  {
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
  }
}
