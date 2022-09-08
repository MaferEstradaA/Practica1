const int humedad = 2;
const int bomba = 13;

void setup() 
{
  Serial.begin(9600);
  pinMode (humedad, OUTPUT);
  pinMode (bomba, OUTPUT);
}

void loop() {
int SensorHumedad = digitalRead (humedad);
 if (SensorHumedad==1)
    {
      Serial.println("Humedad correcta, no hace falta regar");
     }
     if (SensorHumedad==0)
     {
      Serial.println("Humedad baja. Regar la planta");
      delay (1000);
      digitalWrite (bomba, HIGH);
      delay (4000);
      digitalWrite (bomba,LOW);
      delay (500);
     }
 }
