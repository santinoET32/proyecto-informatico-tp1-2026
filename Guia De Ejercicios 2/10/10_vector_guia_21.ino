#define buzz 3

int vector[10];

void setup() 
{
  pinMode(buzz, OUTPUT);
  
  Serial.begin(9600);
  randomSeed(analogRead(A0)); 
}

void loop() 
{
  for(int i = 0; i < 10; i++)
  {
    vector[i] = random(1, 11);
  }
  
  for(int i = 0; i < 10; i++) 
  {
    Serial.println(vector[i]);
    
    if(vector[i] == 5)
    {
      digitalWrite(buzz, 1);
    } 
    else 
    {
      digitalWrite(buzz, 0);
    }

    delay(1000);
  }
}
