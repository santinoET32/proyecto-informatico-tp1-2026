void llenarVector()
{
  int vector[5];
  
  for (int i = 0; i < 5; i++)
  {
    vector[i] = random(0, 11) * 10;
  }
  
  for (int i = 0; i < 5; i++)
  {
    Serial.println(vector[i]);
  }
}

void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(A0));
}

void loop()
{
  llenarVector();
  delay(10000);
}