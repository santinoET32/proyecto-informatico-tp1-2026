// C++ code
//
void setup()
{
  pinMode(9, OUTPUT);
}

void loop()
{
	analogWrite(9, 255);
  	delay(1000);
  	analogWrite(9, 110);
  	delay(1000);
  analogWrite(9, 60);
  delay(1000);
  analogWrite(9, 30);
  delay(1000);
  analogWrite(9, 0);
  delay(1000);
}