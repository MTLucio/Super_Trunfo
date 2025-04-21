#include <stdio.h>

void torre(int casa){
    if (casa > 0){
        printf("%d.DIREITA\n", casa);
        torre(casa - 1);   
    } 
}
void bispo(){
    for(int i = 1; i <= 5; i++){
        printf("%d.CIMA, ", i);
        for(int j = 1; j <= 1; j++){
            printf("DIREITA\n");
        }
    }
}
void rainha(int casa){
    if (casa > 0){
        printf("%d.ESQUERDA\n", casa);
        rainha(casa - 1);    
    }  
}
int main(){
    

    printf("      ### TABULEIRO DE XADREX ###\n");
    printf("\n");
    for (int i = 8; i >= 1; i--){
        printf("        A%d B%d C%d D%d E%d F%d G%d H%d \n", i, i, i, i, i, i, i, i);
    }
    printf("\n");

    printf("A Torre esta na posição A2 e se movera cinco casas a Direita.\n");
    
    torre(5);

    printf("A Torre chegou na casa F2.\n");
    printf("\n");

    printf("O Bispo esta na posição B1 e se movera cinco casas na diagonal para Cima e Direita.\n");
    
    bispo(1);

    printf("O Bispo chegou na casa G6.\n");
    printf("\n");

    printf("A Rainha esta na posição H3 e se movera oito casa a Esquerda.\n");
    
    rainha(8);

    printf("A Rainha chegou na casa A3.\n");
    printf("\n");

    printf("O Cavalo esta na posição E4 e se movera duas casa para Cima e uma para Direita.\n");
    for (int cavalo = 1, c = 1; cavalo <= 1; cavalo++){
        while (c <= 2)
        {
            printf("%d.CIMA\n", c);
            c++;
        }
        printf("%d.DIREITA\n", c);
    } 
    printf("O Cavalo chegou na casa F6.\n");
    
}
