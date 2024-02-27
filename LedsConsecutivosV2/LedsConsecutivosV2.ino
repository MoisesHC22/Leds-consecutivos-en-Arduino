
//Declarar variables.

#define Led1 7
#define Led2 6
#define Led3 2
#define Led4 3
#define Led5 4



void setup()
{
  //Nos sirve para configurar el pin de salida.
  
   pinMode(Led1, OUTPUT);
   pinMode(Led2, OUTPUT);
   pinMode(Led3, OUTPUT);
   pinMode(Led4, OUTPUT);
   pinMode(Led5, OUTPUT);

}

//Función en donde recibe un valor para prender y apagar el led en un segundo.

void OnOff(int pin)
{
  digitalWrite(pin, HIGH);
  delay(1000);
  digitalWrite(pin, LOW);
  delay(1000);
}


void loop()
{

  //Se crea un arreglo en donde contendrá los pines de salida.
  int leds[] = {Led1, Led2, Led3, Led4, Led5};
  
  //Creamos una variable en donde obtendrá el número de elementos del arreglo. 
  int NumLeds = sizeof(leds) / sizeof(leds[0]);
  
  
/*
  Realizamos un ciclo for en donde si "i" es menor a NumLeds, se enviara
  el valor de "i", a la función "OnOff" y una vez termine la función, el
  valor de "i" se incrementará a uno. Luego, se repetirá nuevamente el 
  proceso, hasta que "i"sea mayor a NumLeds, se detendrá.  
*/
  
  for(int i = 0; i < NumLeds; i++)
  {
    OnOff(leds[i]);
  }
  
/*
  Realizamos otro ciclo for en donde, el valor de "i" se obtiene, pero ahora
  la condición es que si "i" es mayor a 0, se enviara el valor a la función
  "OnOff" y se repetirá nuevamente el proceso, pero el valor de "i" va a 
  decrementar cada que se hace el bucle hasta que el valor sea 0.
*/
  
  for(int i = NumLeds -1; i >= 0; i--)
  {
    OnOff(leds[i]);
  }
}
