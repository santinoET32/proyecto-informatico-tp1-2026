
void num()
{
  int n = 0;
  int n2 = 0;
  Serial.println("escriba un numero");
  
  while (Serial.available() == 0)
  {
  }
  
  n = Serial.parseInt();
  
  delay(10);
  
  if( n >= 0)
  {
    Serial.println("escriba un segundo numero");
  
    while (Serial.available() == 0)
    {
    }
    
    n2 = Serial.parseInt();
    
    delay(10);
  }
  
  if(n % n2 == 0)
  {
    Serial.println("el numero:");
    Serial.println(n);
    Serial.println("es multiplo de");
    Serial.println(n2);
  }
  else
  {
    Serial.println("no son numeros multiplos");
  }
}
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  num();
}