void setup()
{
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(4,INPUT_PULLUP);
}
void loop()
{
  int val=digitalRead(4);
    analogWrite(3,150);
    analogWrite(5,0);
    analogWrite(6,150);
    analogWrite(9,0);
  while(val==1)
  {
    analogWrite(3,200);
    analogWrite(5,0);
    analogWrite(6,200);
    analogWrite(9,0);
    val=digitalRead(4);
  }
  }
