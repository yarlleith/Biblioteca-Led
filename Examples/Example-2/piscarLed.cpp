/*
Autor: Yarllei
Programa: Pisca Led.
Descrição: Faz o led piscar.
Data: 15/04
Versão: 1.0
*/

#include <Arduino.h>
#include <LED.h>

Led ledA(45);

void setup() {
    ledA.piscar();
}

void loop() {
 ledA.update();
}