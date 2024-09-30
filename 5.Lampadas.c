#include <stdio.h>
#include <stdlib.h>

// Função para simular a situação de acender e desligar as lâmpadas
void verificarLampadas(int lampadaA, int lampadaB, int lampadaC) {
    // A lâmpada A foi ligada e depois desligada, então ela estará quente
    // A lâmpada B está ligada agora
    // A lâmpada C nunca foi ligada, então ela está fria e desligada

    printf("Situação das lâmpadas:\n");
    if (lampadaB == 1) {
        printf("Lâmpada 1 está acesa (Interruptor B controla Lâmpada 1)\n");
    }
    if (lampadaA == 0) {
        printf("Lâmpada 2 está desligada, mas está quente (Interruptor A controla Lâmpada 2)\n");
    }
    if (lampadaC == 0) {
        printf("Lâmpada 3 está desligada e fria (Interruptor C controla Lâmpada 3)\n");
    }
}

int main() {
    // Variáveis para representar o estado das lâmpadas
    int lampadaA = 0; // 0 = desligada, 1 = ligada
    int lampadaB = 0;
    int lampadaC = 0;

    printf("Ligue o interruptor A e espere por um tempo...\n");
    lampadaA = 1; // Lâmpada A está ligada
    printf("Agora, desligue o interruptor A e ligue o interruptor B.\n");
    lampadaA = 0; // Lâmpada A foi desligada
    lampadaB = 1; // Lâmpada B está ligada

    printf("Agora vá até a sala das lâmpadas para verificar.\n");
    verificarLampadas(lampadaA, lampadaB, lampadaC); // Verifica o estado das lâmpadas

    return 0;
}
