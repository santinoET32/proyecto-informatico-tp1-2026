int pines[] = {2, 3, 4};
void piness()
{
  for (int i = 0; i < 3; i++)
  {
    digitalWrite(pines[i], HIGH);
  }
}

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  piness();
}