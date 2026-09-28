void vector()
{
  int vector[5];
  for(int i = 0; i < 5; i++)
  {
    Serial.print("Ingresa el valor para la posicion ");
    Serial.println(i);
    
    while (Serial.available() == 0)
    {
    }
    
    vector[i] = Serial.parseInt();
    
    delay(10);
  }
  
  for (int i = 0; i < 4; i++)
  {
    for (int j = i+1; j < 5; j++)
    {
      if (vector[i] > vector[j])
      {
        int aux = vector[i];
        vector[i] = vector[j];
        vector[j] = aux;
      }
    }
  }
  for(int i = 0; i < 5; i++)
  {
    Serial.println(vector[i]);
  }
}
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  vector();
}