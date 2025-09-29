#include <stdio.h>

int main() {
 
    //1. Rainha movendo 8 vezes para a esquerda (usando For)
    printf("--- Movimento da Rainha ---\n");
    for (int i = 1; i < 9; i++) {
        printf("Rainha move para a esquerda\n");
    }

    //2. Torre movendo 5 vezes para a direita (usando While)
    printf("--- Movimento da Torre ---\n");
    int torre = 1;
    while (torre < 6) {
        torre++;
        printf("Torre move para a direita\n");
    }

    //3. Bispo movendo 4 vezes para a diagonal (usando Do While)
    printf("--- Movimento do Bispo ---\n");
    int bispo = 1;
    do {
        printf("Bispo move para a direita\n");
        printf("Bispo move para cima\n");
        bispo++;
    } while (bispo <= 5);
    return 0;
}