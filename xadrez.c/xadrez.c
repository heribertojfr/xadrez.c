#include <stdio.h>

int main() {
    // Declaração das variáveis de movimento
    int casasTorre = 5;   // Torre anda 5 casas
    int casasBispo = 5;   // Bispo anda 5 casas
    int casasRainha = 8;  // Rainha anda 8 casas

    int i; // variável de controle genérica

    // -------------------------------
    // Movimento da TORRE (usando FOR)
    // -------------------------------
    printf("=== Movimento da TORRE ===\n");
    // Torre move-se em linha reta (horizontal ou vertical)
    // Neste caso: 5 casas para a direita
    for (i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // -------------------------------
    // Movimento do BISPO (usando WHILE)
    // -------------------------------
    printf("\n=== Movimento do BISPO ===\n");
    // Bispo move-se na diagonal — neste caso, 5 casas para cima e à direita
    i = 1;
    while (i <= casasBispo) {
        printf("Casa %d: Cima, Direita\n", i);
        i++;
    }

    // -------------------------------
    // Movimento da RAINHA (usando DO-WHILE)
    // -------------------------------
    printf("\n=== Movimento da RAINHA ===\n");
    // Rainha move-se em qualquer direção — aqui: 8 casas para a esquerda
    i = 1;
    do {
        printf("Casa %d: Esquerda\n", i);
        i++;
    } while (i <= casasRainha);

    // Fim do programa
    printf("\nSimulação concluída com sucesso!\n");

    return 0;
}