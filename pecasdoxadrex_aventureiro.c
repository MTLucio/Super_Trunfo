#include <stdio.h>

int main(){
    int bispo = 1, rainha = 1, c = 1;
    int torre, cavalo;

    printf("      ### TABULEIRO DE XADREX ###\n");
    printf("\n");
    for (int i = 8; i >= 1; i--){
        printf("        A%d B%d C%d D%d E%d F%d G%d H%d \n", i, i, i, i, i, i, i, i);
    }
    printf("\n");

    printf("A Torre esta na posição A2 e se movera cinco casas a Direita.\n");
    
    for (torre = 1; torre <= 5; torre++){
        printf("%d.DIREITA\n", torre);
    }
    printf("A Torre chegou na casa F2.\n");
    printf("\n");

    printf("O Bispo esta na posição B1 e se movera cinco casas na diagonal para Cima e Direita.\n");
    while (bispo <= 5) {
        printf("%d.CIMA, DIREITA\n", bispo);
        bispo++;
    }
    printf("O Bispo chegou na casa G6.\n");
    printf("\n");

    printf("A Rainha esta na posição H3 e se movera oito casa a Esquerda.\n");
    do{
        printf("%d.ESQUERDA\n", rainha);
        rainha++;
    } while (rainha <= 8);
    printf("A Rainha chegou na casa A3.\n");
    printf("\n");

    printf("O Cavalo esta na posição E4 e se movera duas casa para Baixo e uma para Esquerda.\n");
    for (cavalo = 1; cavalo <= 1; cavalo++){
        while (c <= 2)
        {
            printf("%d.BAIXO\n", c);
            c++;
        }
        printf("%d.ESQUEDA\n", c);
    } 
    printf("O Cavalo chegou na casa D2.\n");
    
}
