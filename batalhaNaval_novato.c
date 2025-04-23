#include <stdio.h>

int main(){
    char letras = 'A';
    int tabuleiro[10][10];
    int i = 1;

    printf("### Bem Vindo ao Jogo de Batalha Naval ###\n");
    printf("Nesse jogo os Navios são representados pelo número [3]\n");
    printf("E a Água é representada pelo número [0]\n");
    printf("Os Navios ocupam três posições no Tabuleiro\n");
    printf("Observe no Tabuleiro Abaixo.\n");
    printf("\n");
    printf("    TABULEIRO DE BATALHA NAVAL\n");

    for(char i = 0; i < 10; i++) {
        printf("  %c", letras);
        letras++;
    }
    printf("\n");
    for(int i = 1; i <= 10; i++){
        for(int x = 0; x < 10; x++){
            for(int y = 0; y < 10; y++){
                tabuleiro[x][y] = 0;
            }
        }
    }
    
    for(int x = 0; x < 10; x++){
        printf("%d ", i);
        i++;
        for(int y = 0; y < 10; y++){
            if(x == 3 && y == 4 || x == 3 && y == 5 || x == 3 && y == 6){
                printf("3  "); 
            } else if (x == 5 && y == 3 || x == 6 && y == 3 || x == 7 && y == 3) {
                printf("3  "); 
            } else{
                printf("%d  ", tabuleiro[x][y]);    
            }    
        }
        printf("\n");
    }
    
    
}
