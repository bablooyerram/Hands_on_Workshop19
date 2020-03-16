int trigpin=4;
int echopin=7;
long duration,distance;
void setup()
{
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  Serial.begin(9600);
}
void loop()
{
  digitalWrite(trigpin,LOW);
  delay(400);
  digitalWrite(trigpin,HIGH);
  delay(400);
  digitalWrite(trigpin,LOW);
  duration=pulseIn(echopin,HIGH);
  distance=duration*0.034/2;
  Serial.println(distance);
}
