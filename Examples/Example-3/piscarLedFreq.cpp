/*
Autor: Yarllei
Programa: Pisca Led.
Descrição: Faz o led piscar com frequência.
Data: 15/04
Versão: 1.0
*/

#include <Arduino.h>
#include <LED.h>

Led ledA(45);

void setup() {
    ledA.piscar(3);
}

void loop() {
 ledA.update();
}