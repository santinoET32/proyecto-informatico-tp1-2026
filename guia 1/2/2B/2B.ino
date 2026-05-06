// C++ code
//
void setup()
{
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(0, OUTPUT);
}

void loop()
{
  digitalWrite(12, 0);
  analogWrite(11, 10);
  analogWrite(10, 30);
  analogWrite(9, 50);
  analogWrite(6, 70);
  analogWrite(5, 90);
  analogWrite(3, 120);
  analogWrite(1, 150);
  analogWrite(0, 180);
  digitalWrite(2, 1);
}