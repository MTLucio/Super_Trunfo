#include <stdio.h>
 #define LINHAS 10
 #define COLUNAS 10

int main(){
    char letras = 'A';
    int tabuleiro[LINHAS][COLUNAS];
    int i = 1;

    printf("### Bem Vindo ao Jogo de Batalha Naval ###\n");
    printf("Nesse jogo os Navios são representados pelo número [3]\n");
    printf("A Água é representada pelo número [0]\n");
    printf("E as Habilidades Especiais são representadas pelo número [5]\n");
    printf("Os Navios ocupam três posições no Tabuleiro\n");
    printf("E temos três Habilidades Especiais no tabuleiro\n");
    printf("O Cone, a Cruz e um Octaedro.\n");
    printf("Observe no Tabuleiro Abaixo.\n");
    printf("\n");
    printf("    TABULEIRO DE BATALHA NAVAL\n");

    for(char i = 0; i < LINHAS; i++) {
        printf("  %c", letras);
        letras++;
    }
    printf("\n");
    for(int x = 0; x < LINHAS; x++){
        for(int y = 0; y < COLUNAS; y++){
            tabuleiro[LINHAS][COLUNAS] = 0;
        }
    }

    for(int x = 0; x < LINHAS; x++){
        printf("%d ", i);
        i++;
        for(int y = 0; y < COLUNAS; y++){
            if (x == 6 && y < 5 || y == 2 && x >= 4 && x <= 8){
                printf("5  ");
            } else if ((x == 2 && y >= 4 && y <= 8) || (x == 1 && y >= 5 && y <= 7) || (x == 0 && y == 6)){
                printf("5  ");
            } else if ((x >= 5 && x <= 7 && y >= 7) || ((x == 4 || x == 8) && y == 8)){
                printf("5  ");
            } else if (x == 3 && y >= 4 && y <= 6){
                printf("3  "); 
            } else if (y == 0 && x >= 2 && x <= 4) {
                printf("3  "); 
            } else if(x == 0 && y == 0 || x == 1 && y == 1 || x == 2 && y == 2) {
                printf("3  "); 
            } else if(x == 6 && y == 6 || x == 7 && y == 5 || x == 8 && y == 4) {
                printf("3  "); 
            } else {
                printf("%d  ", tabuleiro[LINHAS][COLUNAS]);    
            }    
        }
        printf("\n");
    }
}
