int pines[] = {2, 3, 4, 5};
int estado[] = {INPUT, OUTPUT, INPUT, OUTPUT};

void configurarPines()
{
  for (int i = 0; i < 4; i++)
  {
    pinMode(pines[i], estado[i]);
    digitalWrite(pines[i], 1);
  }
}

void setup()
{
  configurarPines();
}

void loop()
{
}