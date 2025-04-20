 
int main(){
    int b = 1, r = 1;

    printf("      ### TABULEIRO DE XADREX ###\n");
    printf("\n");
    for (int i = 8; i >= 1; i--){
        printf("        A%d B%d C%d D%d E%d F%d G%d H%d \n", i, i, i, i, i, i, i, i);
    }
    printf("\n");

    printf("A Torre esta na posição A2 e se movera cinco casas a Direita.\n");
    
    for (int t = 1; t <= 5; t++){
        printf("%d.DIREITA\n", t);
    }
    printf("A Torre chegou na casa F2.\n");
    printf("\n");

    printf("O Bispo esta na posição B1 e se movera cinco casas na diagonal para Cima e Direita.\n");
    while (b <= 5) {
        printf("%d.CIMA, DIREITA\n", b);
        b++;
    }
    printf("O Bispo chegou na casa G6.\n");
    printf("\n");

    printf("A Rainha esta na posição H3 e se movera oito casa a Esquerda.\n");
    do{
        printf("%d.ESQUERDA\n", r);
        r++;
    } while (r <= 8);
    printf("A Rainha chegou na casa A3.\n");
    
}
