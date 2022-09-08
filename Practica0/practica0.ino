//Usando un arduino nano

const int bomba = 13;
const int nivel = 9;

void setup() 
{
  Serial.begin (9600);
  pinMode (bomba, OUTPUT);
  pinMode (nivel, INPUT);
}

void loop() 
{
  int SensorNivel = digitalRead(nivel);

  if (SensorNivel==1)
    {
   Serial.println ("Nivel de agua correcto, se puede regar");
   digitalWrite (bomba,HIGH); 
   delay (1000);
   digitalWrite (bomba, LOW);
   delay (500);
    }
   if (SensorNivel==0)
    {
    Serial.println ("Nivel bajo de agua. Rellenar tanque");
    delay (1000);
    }
}
