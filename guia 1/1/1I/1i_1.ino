// C++ code
//
int cont = 0;
bool ultimoBoton = LOW;

void setup()
{
  pinMode(12, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  bool botonA = digitalRead(12);

  if (botonA == HIGH && ultimoBoton == LOW)
  {
    cont = (cont % 7) + 1;
    delay(50);
  }

  ultimoBoton = botonA;
  
  switch(cont)
  {
	case 0:
        digitalWrite(11, 0);
        delay(100);
        digitalWrite(11, 0);
        delay(100);
        digitalWrite(10, 0);
        delay(100);
        digitalWrite(10, 0);
        delay(100);
        digitalWrite(9, 0);
        delay(100);
        digitalWrite(9, 0);
        delay(100);
        digitalWrite(8, 0);
        delay(100);
        digitalWrite(8, 0);
        delay(100);
        digitalWrite(7, 0);
        delay(100);
        digitalWrite(7, 0);
        delay(100);
        digitalWrite(6, 0);
        delay(100);
        digitalWrite(6, 0);
        delay(100);
        digitalWrite(5, 0);
        delay(100);
        digitalWrite(5, 0);
        delay(100);
        digitalWrite(4, 0);
        delay(100);
        digitalWrite(4, 0);
        delay(100);
        digitalWrite(3, 0);
        delay(100);
        digitalWrite(3, 0);
        delay(100);
        digitalWrite(2, 0);
        delay(100);
        digitalWrite(2, 0);
        delay(100);
		break;
	case 1:
        digitalWrite(11, 1);
        delay(100);
        digitalWrite(11, 0);
        delay(100);
        digitalWrite(10, 1);
        delay(100);
        digitalWrite(10, 0);
        delay(100);
        digitalWrite(9, 1);
        delay(100);
        digitalWrite(9, 0);
        delay(100);
        digitalWrite(8, 1);
        delay(100);
        digitalWrite(8, 0);
        delay(100);
        digitalWrite(7, 1);
        delay(100);
        digitalWrite(7, 0);
        delay(100);
        digitalWrite(6, 1);
        delay(100);
        digitalWrite(6, 0);
        delay(100);
        digitalWrite(5, 1);
        delay(100);
        digitalWrite(5, 0);
        delay(100);
        digitalWrite(4, 1);
        delay(100);
        digitalWrite(4, 0);
        delay(100);
        digitalWrite(3, 1);
        delay(100);
        digitalWrite(3, 0);
        delay(100);
        digitalWrite(2, 1);
        delay(100);
        digitalWrite(2, 0);
        delay(100);
		break;
	default:
    	digitalWrite(11, 0);
        delay(100);
        digitalWrite(11, 0);
        delay(100);
        digitalWrite(10, 0);
        delay(100);
        digitalWrite(10, 0);
        delay(100);
        digitalWrite(9, 0);
        delay(100);
        digitalWrite(9, 0);
        delay(100);
        digitalWrite(8, 0);
        delay(100);
        digitalWrite(8, 0);
        delay(100);
        digitalWrite(7, 0);
        delay(100);
        digitalWrite(7, 0);
        delay(100);
        digitalWrite(6, 0);
        delay(100);
        digitalWrite(6, 0);
        delay(100);
        digitalWrite(5, 0);
        delay(100);
        digitalWrite(5, 0);
        delay(100);
        digitalWrite(4, 0);
        delay(100);
        digitalWrite(4, 0);
        delay(100);
        digitalWrite(3, 0);
        delay(100);
        digitalWrite(3, 0);
        delay(100);
        digitalWrite(2, 0);
        delay(100);
        digitalWrite(2, 0);
        delay(100);
		break;
    }
}