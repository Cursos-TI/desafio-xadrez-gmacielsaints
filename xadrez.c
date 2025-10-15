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

//4. Cavalo movendo 2 vezes para baixo e uma pra esquerda (usando For)
    printf("--- Movimento do Cavalo ---\n");
    int mov2cavalo, mov1cavalo;
    for (mov1cavalo = 1; mov1cavalo == 1; mov1cavalo++){
        mov2cavalo = 1;
        while (mov2cavalo <= 2){
        printf("Cavalo move para baixo!\n");
        mov2cavalo++;}
    }
    printf("Cavalo move para a esquerda!\n");
    return 0;
}