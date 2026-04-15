/*
Autor: Yarllei
Programa: Ligar Led.
Descrição: Faz o led acender.
Data: 15/04
Versão: 1.0
*/

#include <Arduino.h>
#include <LED.h>

Led ledA(45);

void setup() {
    ledA.ligar();
}

void loop() {
 ledA.update();
}

