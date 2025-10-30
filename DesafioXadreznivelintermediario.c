#include <stdio.h>

int main() {
    int i;
    printf("=== Movimento da Torre ===\n");
    for (i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }

    printf("\n");

    int j = 1;
    printf("=== Movimento do Bispo ===\n");
    while (j <= 5) {
        printf("Casa %d: Cima, Direita\n", j);
        j++;
    }

    printf("\n");

    int k = 1;
    printf("=== Movimento da Rainha ===\n");
    do {
        printf("Casa %d: Esquerda\n", k);
        k++;
    } while (k <= 8);

    printf("\n");

    printf("=== Movimento do Cavalo ===\n");
    int linha, coluna = 1;

    for (linha = 1; linha <= 2; linha++) {
        printf("Casa %d: Baixo\n", linha);
        if (linha == 2) {
            int cont = 1;
            while (cont <= 1) {
                printf("Casa %d: Esquerda\n", linha + cont);
                cont++;
            }
        }
    }

    printf("\nSimulação concluída!\n");
    return 0;
}
