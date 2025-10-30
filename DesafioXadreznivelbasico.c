#include <stdio.h>

int main() {
    // ===============================================
    // Simulação do movimento das peças de xadrez
    // Torre → usa FOR
    // Bispo → usa WHILE
    // Rainha → usa DO-WHILE
    // ===============================================

    // -------------------------------
    // 1. Movimento da TORRE (for)
    // -------------------------------
    // A torre move-se em linha reta — neste caso, 5 casas para a direita.
    int i; // variável de controle do loop

    printf("=== Movimento da Torre ===\n");
    for (i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }

    printf("\n");

    // -------------------------------
    // 2. Movimento do BISPO (while)
    // -------------------------------
    // O bispo move-se em diagonal — neste caso, 5 casas para cima e à direita.
    int j = 1; // inicialização para o while

    printf("=== Movimento do Bispo ===\n");
    while (j <= 5) {
        printf("Casa %d: Cima, Direita\n", j);
        j++; // incrementa o contador
    }

    printf("\n");

    // -------------------------------
    // 3. Movimento da RAINHA (do-while)
    // -------------------------------
    // A rainha move-se em todas as direções — neste caso, 8 casas para a esquerda.
    int k = 1; // inicialização para o do-while

    printf("=== Movimento da Rainha ===\n");
    do {
        printf("Casa %d: Esquerda\n", k);
        k++;
    } while (k <= 8);

    // -------------------------------
    // Fim da simulação
    // -------------------------------
    printf("\nSimulação concluída!\n");

    return 0;
}
