int trigpin=4;
int echopin=7;
long duration, distance;
void setup()
{
 pinMode(trigpin,OUTPUT);
 pinMode(echopin,INPUT);
 pinMode(3,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(9,OUTPUT);
 }
void loop()
{
  digitalWrite(trigpin,LOW);
  delay(10);
  digitalWrite(trigpin,HIGH);
  delay(10);
  digitalWrite(trigpin,LOW); 
  duration=pulseIn(echopin,HIGH); 
  distance=duration*0.034/2;
  if(distance>15)
  {
  analogWrite(3,180);
  analogWrite(5,0);
  analogWrite(6,180);
  analogWrite(9,0);
  }
  else if(distance<14)
  {
  analogWrite(3,0);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  delay(1000);
  analogWrite(3,0);
  analogWrite(5,180);
  analogWrite(6,0);
  analogWrite(9,180);
  delay(1000);
  analogWrite(3,180);
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,180);
  delay(1000);
  }
}
