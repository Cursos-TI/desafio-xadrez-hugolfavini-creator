#include <stdio.h>

int main() {
    // Constantes de movimento das peças
    int movimentoBispo = 5;
    int movimentoTorre = 5;
    int movimentoRainha = 8;

    int i;

    // Movimento do Bispo: Para diagonal superior direita
    printf("Movimento do Bispo:\n");
    for (i = 0; i < movimentoBispo; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // Movimento da Torre: Para a direita
    printf("\nMovimento da Torre:\n");
    i = 0;
    while (i < movimentoTorre) {
        printf("Direita\n");
        i++;
    }

    // Movimento da Rainha: Para a esquerda
    printf("\nMovimento da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < movimentoRainha);

    return 0;
}
