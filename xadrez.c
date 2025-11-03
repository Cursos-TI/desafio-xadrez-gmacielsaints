#include <stdio.h>
    //1. Rainha movendo 8 vezes para a esquerda (usando For)
    void movRainha(int vezes) {
        for (int i = 0; i < vezes; i++) {
            printf("Rainha move para a esquerda\n");
        }
    }

    //2. Torre movendo 5 vezes para a direita (usando While)
    void movTorre(int vezes) {
        int torre = 0;
        while (torre < vezes) {
            printf("Torre move para a direita\n");
            torre++;
        }
    }

    //3. Bispo movendo 4 vezes para a diagonal (usando Do While)
    void movBispo(int vezes) {
        int bispo = 0;
        do {
            printf("Bispo move para a direita\n");
            printf("Bispo move para cima\n");
            bispo++;
        } while (bispo < vezes);
    }

    //4. Cavalo movendo 2 vezes para baixo e uma pra esquerda (usando For)
    void movCavalo(int vezes) {
    while (vezes > 0) {
        for (int i = 0; i < 2; i++) {
        printf("Cavalo move para baixo!\n");
        }
    printf("Cavalo move para a esquerda!\n");
    vezes--;
    }
    }



    ///RECURSIVIDADE///
    int main() {
        printf("--- Movimento da Rainha ---\n");
        movRainha(8);
        printf("--- Movimento da Torre ---\n");
        movTorre(5);
        printf("--- Movimento do Bispo ---\n");
        movBispo(4);
        printf("--- Movimento do Cavalo ---\n");
        movCavalo(1);
        return 0;
    }
