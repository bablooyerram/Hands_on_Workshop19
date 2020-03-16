char command;
void setup() {
  Serial.begin(9600);
  pinMode(5,OUTPUT);
   pinMode(6,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
 }

void loop() {
  while(Serial.available()>0);
  command=Serial.read();
  if(command=='F')
  {
  analogWrite(5,255);
  analogWrite(6,0);
  analogWrite(9,255);
  analogWrite(10,0);
  }
  else if(command=='L')
  {
  analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,255);
  analogWrite(10,0);
  }
 else if(command=='B')
  {
  analogWrite(5,0);
  analogWrite(6,255);
  analogWrite(9,0);
  analogWrite(10,255);
  }
  else if(command=='R')
  {
  analogWrite(5,255);
  analogWrite(6,0);
  analogWrite(9,0);
  analogWrite(10,0);
  }
  else
  {
    analogWrite(5,0);
  analogWrite(6,0);
  analogWrite(9,0);
  analogWrite(10,0);
  }
    
  
  
 
}


