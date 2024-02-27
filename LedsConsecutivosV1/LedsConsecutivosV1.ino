//Declarar variables.

#define Led1 7
#define Led2 6
#define Led3 2
#define Led4 3
#define Led5 4

//Hacer configuraciones.

void setup()
{
  //Nos sirve para configurar el pin de salida.
  
   pinMode(Led1, OUTPUT);
   pinMode(Led2, OUTPUT);
   pinMode(Led3, OUTPUT);
   pinMode(Led4, OUTPUT);
   pinMode(Led5, OUTPUT);

}

void loop()
{
  
//Hacemos que los leds se prenda con "HIGH" y se apague con "LOW" en un segundo. 
  digitalWrite(Led1, HIGH);
  delay(1000);
  digitalWrite(Led1, LOW);
  delay(1000);
  
  digitalWrite(Led2, HIGH);
  delay(1000);
  digitalWrite(Led2, LOW);
  delay(1000);
  
  digitalWrite(Led3, HIGH);
  delay(1000);
  digitalWrite(Led3, LOW);
  delay(1000);
  
  digitalWrite(Led4, HIGH);
  delay(1000);
  digitalWrite(Led4, LOW);
  delay(1000);
  
  digitalWrite(Led5, HIGH);
  delay(1000);
  digitalWrite(Led5, LOW);
  delay(1000);

  
  //Hacemos que el recorrido de led empiece desde donde termino.
  
  digitalWrite(Led5, HIGH);
  delay(1000);
  digitalWrite(Led5, LOW);
  delay(1000);
  
  digitalWrite(Led4, HIGH);
  delay(1000);
  digitalWrite(Led4, LOW);
  delay(1000);
  
  digitalWrite(Led3, HIGH);
  delay(1000);
  digitalWrite(Led3, LOW);
  delay(1000);
  
  digitalWrite(Led2, HIGH);
  delay(1000);
  digitalWrite(Led2, LOW);
  delay(1000);
  
  digitalWrite(Led1, HIGH);
  delay(1000);
  digitalWrite(Led1, LOW);
  delay(1000);  
}
  
