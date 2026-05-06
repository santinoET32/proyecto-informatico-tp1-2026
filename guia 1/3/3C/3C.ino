// C++ code
//
#define ana A3
int cont = 0;
bool pausado = false;
bool ultimoBoton = LOW;
void setup()
{
  pinMode(0, INPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
   int val = analogRead(ana);
  int vel = map(val, 0, 1023, 50 ,1000);
  
   bool botonA = digitalRead(0);

  if (botonA == HIGH && ultimoBoton == LOW)
  {
    pausado = !pausado;
    delay(50);
  }

  ultimoBoton = botonA;

  if (cont >= 1)
  {
    	digitalWrite(9, 1);
  		digitalWrite(8, 1);
        delay(vel);
        digitalWrite(9, 0);
        digitalWrite(8, 0);
        delay(vel);
  }
  else
  {
    	digitalWrite(9, 0);
        digitalWrite(8, 0);
        delay(vel);
  }

  if (cont >= 2)
  {
    digitalWrite(7, 1);
  		digitalWrite(6, 1);
        delay(vel);
        digitalWrite(7, 0);
        digitalWrite(6, 0);
        delay(vel);
  }
  else
  {
    digitalWrite(7, 0);
        digitalWrite(6, 0);
        delay(vel);
  }

  if (cont >= 3)
  {
   	digitalWrite(5, 1);
  		digitalWrite(4, 1);
        delay(vel);
        digitalWrite(5, 0);
        digitalWrite(4, 0);
        delay(vel);
  }
  else
  {
    digitalWrite(5, 0);
        digitalWrite(4, 0);
        delay(vel);
  }

  if (cont >= 4)
  {
    digitalWrite(3, 1);
        delay(vel);
        digitalWrite(3, 0);
        delay(vel);
  }
  else
  {
    digitalWrite(3, 0);
        delay(vel);
  }

  if (cont >= 5)
  {
    digitalWrite(2, 1);
        delay(vel);
        digitalWrite(2, 0);
        delay(vel);
  }
  else
  {
     digitalWrite(2, 0);
        delay(vel);
  }

  if (cont >= 6)
  {
    digitalWrite(1, 1);
        delay(vel);
        digitalWrite(1, 0);
        delay(vel);
  }
  else
  {
    digitalWrite(1, 0);
        delay(vel);
  }
  
  if (pausado == false)
  {
    delay(300);
    cont = cont + 1;
  }
    if (cont > 10)
    {
      cont = 0;
    }
  }