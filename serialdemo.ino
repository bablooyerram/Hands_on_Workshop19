void setup()
{
  pinMode(13,OUTPUT);
  Serial.begin(19200);
}
void loop()
{
  if(Serial.available()>0)
  {
    char letter=Serial.read();
    if(letter=='1')
    {
    digitalWrite(13,HIGH);
    }
    else if(letter=='0')
    {
    digitalWrite(13,LOW);
    }
  }
  }

