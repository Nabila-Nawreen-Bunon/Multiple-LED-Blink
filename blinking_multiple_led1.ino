// C++ code
//
int r=13,b=12,g=7;
void setup()
{
  pinMode(r,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(g,OUTPUT);
}

void loop()
{
rpo();
delay(1000);  
}
void rpo(){
  digitalWrite(r,HIGH);
  delay(200);
  digitalWrite(r,LOW);
  delay(200);
  
  digitalWrite(b,HIGH);
  delay(200);
  
  digitalWrite(b,LOW);
  delay(200);
  
  digitalWrite(g,HIGH);
  delay(200);
 
  digitalWrite(g,LOW);
  delay(200);
}