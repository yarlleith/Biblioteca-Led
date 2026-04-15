/*
Autor: Yarllei
Programa: Led com botão.
Descrição: Faz o led ligar ou desligar quando apertar o botão.
Data: 15/04
Versão: 1.0
*/

#include <Arduino.h>
#include <LED.h>

Led ledA(45);
bool botao = 0;

void setup() {
    pinMode(botao, INPUT_PULLUP);
    ledA.ligar();
    
}

void loop() {
 
 bool estadoAtualBotao = digitalRead(botao);
 static bool estadoAnterior = 1;
 if (!estadoAtualBotao && estadoAnterior)
 { 
    ledA.alternar();
 }

 
 estadoAnterior = estadoAtualBotao;

ledA.update();

}