#include <Arduino.h>
#define LED_BUILTIN 23
#define DELAY 50


void setup() {
  
  Serial.begin(115200);
   pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("ON");
 delay(500);
 digitalWrite(LED_BUILTIN, LOW);
 Serial.println("OFF");
 delay(500);
}


//sin delay= se enciende y se apaga muy rápido
// sin serial ni delay= se queda siempree encendida, no se nota cuando se apaga= el osciloscopio se dispara, mayor frecuencia


