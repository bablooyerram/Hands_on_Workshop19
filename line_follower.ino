int left_motor_forward=3;
int left_motor_rev=5;
int right_motor_forward=6;
int right_motor_rev=9;
int sen1, sen2;
void setup()
{
  pinMode(left_motor_forward,OUTPUT);
  pinMode(left_motor_rev,OUTPUT);
  pinMode(right_motor_forward,OUTPUT);
  pinMode(right_motor_rev,OUTPUT);
  pinMode(4,INPUT);
  pinMode(7,INPUT);
}
void loop()
{
  sen1=digitalRead(4);
  sen2=digitalRead(7);
  if(sen1==HIGH && sen2==HIGH)
  {
    analogWrite(left_motor_forward,180);
    analogWrite(left_motor_rev,0);
    analogWrite(right_motor_forward,180);
    analogWrite(right_motor_rev,0);
    delay(1000);
  }
  else if(sen1==HIGH && sen2==LOW)
  {
    analogWrite(left_motor_forward,0);
    analogWrite(left_motor_rev,0);
    analogWrite(right_motor_forward,180);
    analogWrite(right_motor_rev,0);
    delay(1000);
  }
  else if(sen1==LOW && sen2==HIGH)
  {
    analogWrite(left_motor_forward,180);
    analogWrite(left_motor_rev,0);
    analogWrite(right_motor_forward,0);
    analogWrite(right_motor_rev,0);
    delay(1000);
  }
  else if(sen1==LOW && sen2==LOW)
  {
    analogWrite(left_motor_forward,180);
    analogWrite(left_motor_rev,0);
    analogWrite(right_motor_forward,180);
    analogWrite(right_motor_rev,0);
    delay(1000);
  }
}

