#define led 2
#define pir 3
void ennder_luz()
{
  if(digitalRead(pir) == 1)
  {
    digitalWrite(led, 1);
  }
}
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(pir, INPUT);
}
void loop()
{
  ennder_luz();
}