// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  digitalWrite(2, 1);
  analogWrite(3, 100);
  delay(1000);
  digitalWrite(2, 0);
  analogWrite(3, 0);
  
  digitalWrite(4, 1);
  delay(1000);
  digitalWrite(4, 0);
  delay(500);
  
}