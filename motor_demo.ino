void setup()
{
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
}
void loop()
{
  analogWrite(3,155);
  analogWrite(5,0);    //moving forward
  analogWrite(6,155);
  analogWrite(9,0);
  
  //analogWrite(3,0);
  //analogWrite(5,155);  moving backwards
  //analogWrite(6,0);
  //analogWrite(9,155);
  
  //analogWrite(3,155);
  //analogWrite(5,0);   //turning right
  //analogWrite(6,0);
  //analogWrite(9,0);
                              //similarly do for turn left
}

