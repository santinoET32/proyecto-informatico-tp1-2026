// C++ code
//
void setup()
{
  pinMode(12, OUTPUT);
}

void loop()
{
  digitalWrite(12, 1);
  delay(1250);
  digitalWrite(12, 0);
  delay(1250);
}