#define red 3
#define red2 4
#define blue 5
#define blue2 6
#define green 9
#define buzzer 10
void setup()
{
  pinMode(red, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(blue2, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  analogWrite(red, 255);
  delay(250);
  analogWrite(red, 0);
  analogWrite(buzzer, 255);
  delay(100);
  analogWrite(buzzer, 0);
  digitalWrite(red2, 1);
  digitalWrite(blue, 1);
  delay(250);
  digitalWrite(red2, 0);
  digitalWrite(blue, 0);
  analogWrite(buzzer, 255);
  delay(100);
  analogWrite(buzzer, 0);
  analogWrite(blue2, 5);
  analogWrite(green, 5);
  delay(250);
  analogWrite(blue2, 0);
  analogWrite(green, 0);
  analogWrite(buzzer, 255);
  delay(100);
  analogWrite(buzzer, 0);
}