#define sensTemp A0
#define ambient A1
#define rojo 2
#define azul 3
#define verde 4
float volt = 0;
float tempF = 0;
void setup()
{
  pinMode(sensTemp, INPUT);
  pinMode(ambient, INPUT);
  Serial.begin(9600);
  pinMode(rojo, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop()
{
  int valorAmbient = analogRead(ambient);
  int valorTemp = analogRead(sensTemp);
  
  volt = valorTemp * 5.0 / 1023.0;
  tempF = (volt - 0.5) * 100;
  
  float luz = map(valorAmbient, 1, 310, 100, 0);
  
  Serial.print("el nivel de luz actual es: ");
  Serial.println(luz);
  Serial.print("el nivel de la temperatura actual es: ");
  Serial.print(tempF);
  Serial.println(" °c");
  
  if (luz >= 30 && luz <= 70)
  {
    if (tempF > 90)
  	{
  		digitalWrite(rojo, 1);
    	digitalWrite(azul, 0);
    	digitalWrite(verde, 0);
  	}
  
  	if (tempF < 18)
  	{
    	digitalWrite(rojo, 0);
    	digitalWrite(azul, 1);
    	digitalWrite(verde, 0);
  	}
  
   	if (tempF >= 18 && tempF <= 90)
  	{
    	digitalWrite(rojo, 0);
    	digitalWrite(azul, 0);
    	digitalWrite(verde, 1);
  	}
 }
  
}