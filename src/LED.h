#ifndef LED_h
#define LED_h
#include <Arduino.h>


/**
 * @class Led
 * @brief Classe para controle não bloqueante de um LED.
 * Permite ligar, desligar, ligar por tempo determinado,
 * piscar continuamente e piscar por quantidade definida.
 * 
 * @note O método update() deve ser chamado continuuamente dentro do loop().
 * 
 */
class Led
{
    private:
        uint8_t pino;
        bool estado;
        bool desligarPorTempo = false;
        uint32_t desligarNoMomento;
        
        uint32_t tempoAnteriorPiscar;
        uint32_t tempoEspera;
        bool estadoPiscar;
        uint16_t repeticoes;

        /**
         * @brief Processa a lógica de piscada do Led.
         */
        void funcaoPiscar();

         /**
         * @brief Processa o desligamento temporizado.
         */
        void funcaoDesligamento();
        




    public:
     /**
         * @brief Constroi um objeto Led.
         * @param pin Numero do pino digital onde o Led esá conectado.
         */
        Led(uint8_t pin);

        /**
         * @brief Liga o LED continuamente.
         */
        void ligar();

         /**
         * @brief Liga o LED por um tempo determinado.
         * @param tempoLigado_ms Tempo, em milisegundos, que o LED ficará ligado.
         */
        void ligar(uint16_t tempoLigado_ms);

         /**
         * @brief Desliga o LED e cancela os modos automáticos.
         */
        void desligar();

         /**
         * @brief inicia a piscada contínua em 1 Hz.
         */
        void piscar();

         /**
         * @brief Inicia a piscada contínua com a frequência desejada.
         * @param frequencia Frequência da piscada em Hz.
         */
        void piscar(float frequencia);

         /**
         * @brief Pisca o LED uma quantidade definida de vezes.
         * @param frequencia Frequência da piscada em Hz.
         * @param repeticoes Quantidade de piscadas completas.
         */
        void piscar(float frequencia, uint16_t repeticoes);

         /**
         * @brief Consulta o valor dentro do Estado.
         */
        bool getEstado();

         /**
         * @brief Consulta qual pino o está conectado.
         */
        uint8_t getPino();

         /**
         * @brief Define manualmente o estado do LED.
         * @param estado true para ligado, false para desligado.
         */
        void setEstado(bool estado);

         /**
         * @brief Alterna o estado do LED
         */
        void alternar();

         /**
         * @brief Registra e atualiza as alterações.
         */
        void update();
        

        
        
 

};

#endif