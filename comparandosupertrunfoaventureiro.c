#include <stdio.h>

int main(){
    int carta1 = 1;
    char nomedacidade1[20]; 
    unsigned long int populacao1;
    int turismo1;
    float area1, pib1, densidade1;

    printf("     BEM VINDO AO JOGO DO SUPER TRUNFO \n");
    printf("      -=-=-=-=-=-Carta %d-=-=-=-=-=-= \n", carta1);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &nomedacidade1);

    printf("Digite a População: \n");
    scanf("%d", &populacao1);

    printf("DIgite a Área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turístico: \n");
    scanf("%d", &turismo1);

    densidade1 = (float) populacao1 / area1;

    int carta2 = 2;
    char nomedacidade2[200]; 
    int populacao2, turismo2;
    float area2, pib2, densidade2;

    printf("      -=-=-=-=-=-Carta %d-=-=-=-=-=-= \n", carta2);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &nomedacidade2);

    printf("Digite a População: \n");
    scanf("%d", &populacao2);

    printf("DIgite a Área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turístico: \n");
    scanf("%d", &turismo2);
    
    densidade2 = (float) populacao2 / area2;

    printf("      -=-=-=-=-=-Carta %d-=-=-=-=-=-= \n", carta1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: R$ %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turístico: %d\n", turismo1);
    printf("Dencidade Populacional: %.2f hab/km²\n", densidade1);

    printf("      -=-=-=-=-=-Carta %d-=-=-=-=-=-= \n", carta2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: R$ %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turístico: %d\n", turismo2);
    printf("Dencidade Populacional: %.2f hab/km²\n", densidade2);

    int opcao;
    printf("=~=~=~=~=~=COMPARAÇÃO DE CARTAS=~=~=~=~=~=\n");
    printf("Escolha uma Opção para comparar:\n");
    printf("1. Popolaçao\n");
    printf("2. Area\n");
    printf("3. PIB:\n");
    printf("4. Pontos Turístico:\n");
    printf("5. Densidade Populacional:\n");
    printf("Escolha: ");
    scanf("%d", &opcao);
    printf("=~=~=~=~=~=COMPARAANDO AS CARTAS=~=~=~=~=~=\n");
    printf("###%s X %s###\n", nomedacidade1, nomedacidade2);

    switch (opcao)
    {
    case 1:
        printf("Atributo de Comparação: População\n");
        printf("%s = %d X %s = %d\n", nomedacidade1, populacao1, nomedacidade2, populacao2);
        if (populacao1 == populacao2){
            printf("Deu Empate!\n");
        } else if (populacao1 > populacao2){
            printf("%s Venceu!!!\n", nomedacidade1);
        } else {
            printf("%s Venceu!!!\n", nomedacidade2);
        }
        
        break;
    case 2:
        printf("Atributo de Comparação: Area\n");
        printf("%s = %.2f X %s = %.2f\n", nomedacidade1, area1, nomedacidade2, area2);
        if (area1 == area2){
            printf("Deu Empate!\n");
        } else if (area1 > area2){
            printf("%s Venceu!!!\n", nomedacidade1);
        } else {
            printf("%s Venceu!!!\n", nomedacidade2);
        }
        break;

    case 3:
        printf("Atributo de Comparação: PIB\n");
        printf("%s = %.2f X %s = %.2f\n", nomedacidade1, pib1, nomedacidade2,pib2);
        if (pib1 == pib2){
            printf("Deu Empate!\n");
        } else if (pib1 > pib2){
            printf("%s Venceu!!!\n", nomedacidade1);
        } else {
            printf("%s Venceu!!!\n", nomedacidade2);
        }
        break;
        
    case 4:
        printf("Atributo de Comparação: Ponto Turistico\n");
        printf("%s = %d X %s = %d\n", nomedacidade1, turismo1, nomedacidade2, turismo2);
        if (turismo1 == turismo2){
            printf("Deu Empate!\n");
        } else if (turismo1 > turismo2){
            printf("%s Venceu!!!\n", nomedacidade1);
        } else {
            printf("%s Venceu!!!\n", nomedacidade2);
        }
        break;
    
    case 5:
        printf("Atributo de Comparação: Densidade Populacional\n");
        printf("%s = %.2f X %s = %.2f\n", nomedacidade1, densidade1, nomedacidade2, densidade2);
        if (densidade1 == densidade2){
            printf("Deu Empate!\n");
        } else if (densidade1 > densidade2){
            printf("%s Venceu!!!\n", nomedacidade2);
        } else {
            printf("%s Venceu!!!\n", nomedacidade1);
        }
        break;
    default:
    printf("Opção Invalida!");
        break;
    }
    

    return 0;


}
