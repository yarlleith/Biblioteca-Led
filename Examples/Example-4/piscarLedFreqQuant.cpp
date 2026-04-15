/*
Autor: Yarllei
Programa: Pisca Led.
Descrição: Faz o led piscar com frequência e quantidade de piscada.
Data: 15/04
Versão: 1.0
*/

#include <Arduino.h>
#include <LED.h>

Led ledA(45);

void setup() {
    ledA.piscar(2, 10);
}

void loop() {
 ledA.update();
}