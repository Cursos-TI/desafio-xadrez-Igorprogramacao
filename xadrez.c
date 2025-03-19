#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Movimento da Torre: 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita
    printf("Movimento do Bispo:\n");
    int i = 0;
    while (i < 5) {
        printf("cima direita\n");
        i++;
    }

    // Movimento da Rainha: 8 casas para a esquerda
    printf("Movimento da Rainha:\n");
    i = 0;
    do {
        printf("esquerda\n");
        i++;
    } while (i < 8);
    return 0;
}
