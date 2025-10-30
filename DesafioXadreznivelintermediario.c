#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int casas, int atual) {
    if (atual > casas) return;
    printf("Casa %d: Direita\n", atual);
    moverTorre(casas, atual + 1);
}

// Função recursiva + loops aninhados para o Bispo
void moverBispo(int vertical, int horizontal) {
    if (vertical <= 0) return;

    for (int v = 1; v <= vertical; v++) {
        for (int h = 1; h <= horizontal; h++) {
            printf("Casa %d: Cima, Direita\n", (v - 1) * horizontal + h);
        }
    }
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas, int atual) {
    if (atual > casas) return;
    printf("Casa %d: Esquerda\n", atual);
    moverRainha(casas, atual + 1);
}

int main() {
    printf("=== Movimento da Torre ===\n");
    moverTorre(5, 1);

    printf("\n");

    printf("=== Movimento do Bispo ===\n");
    moverBispo(5, 1);

    printf("\n");

    printf("=== Movimento da Rainha ===\n");
    moverRainha(8, 1);

    printf("\n");

    printf("=== Movimento do Cavalo ===\n");

    for (int vertical = 1; vertical <= 2; vertical++) {
        for (int horizontal = 1; horizontal <= 2; horizontal++) {
            if (vertical == 2 && horizontal == 2) {
                break;
            }
            if (vertical <= 2 && horizontal == 1) {
                printf("Casa %d: Cima\n", vertical);
                continue;
            }
            if (vertical == 2 && horizontal == 2) {
                printf("Casa 3: Direita\n");
            }
        }
    }

    printf("\nSimulação concluída!\n");
    return 0;
}
