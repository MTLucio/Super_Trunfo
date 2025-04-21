#include <stdio.h>

int main(){
    int carta1 = 1;
    char estado1[20];
    char codigo1[20];
    char nomedacidade1[20];
    unsigned long int populacao1;
    int turismo1;
    float area1, pib1, densidade1, pibper1;

    printf("     BEM VINDO AO JOGO DO SUPER TRUNFO \n");
    printf("      -=-=-=-=-=-Carta %d-=-=-=-=-=-= \n", carta1);

    printf("Digite O estado entre [A-H] \n");
    scanf("%s", &estado1);

    printf("Digite o Codigo da Carta: [Ex, A01-B02] \n");
    scanf("%s", &codigo1);

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
    pibper1 =  (pib1 * 100000000) / (float) populacao1;

    int carta2 = 2;
    char estado2[20];
    char codigo2[20];
    char nomedacidade2[200]; 
    int populacao2, turismo2;
    float area2, pib2, densidade2, pibper2;

    printf("      -=-=-=-=-=-Carta %d-=-=-=-=-=-= \n", carta2);

    printf("Digite O estado entre [A-H] \n");
    scanf("%s", &estado2);

    printf("Digite o Codigo da Carta: [Ex, A01-B02] \n");
    scanf("%s", &codigo2);


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
    pibper2 =  (pib2 * 100000000) / (float) populacao2;

    printf("      -=-=-=-=-=-Carta %d-=-=-=-=-=-= \n", carta1);
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: R$ %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turístico: %d\n", turismo1);
    printf("Dencidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibper1);

    printf("      -=-=-=-=-=-Carta %d-=-=-=-=-=-= \n", carta2);
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: R$ %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turístico: %d\n", turismo2);
    printf("Dencidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibper2);

    printf("=~=~=~=~=~=COMPARAÇÃO DE CARTAS=~=~=~=~=~=\n");
    printf("Atributo: População\n");

    printf("Carta %d - %s: %d\n", carta1, nomedacidade1, populacao1);
    printf("Carta %d - %s: %d\n", carta2, nomedacidade2, populacao2);

    if (populacao1 > populacao2){
        printf("Resultado: Carta %d(%s): Venceu!\n ", carta1, nomedacidade1);
    } else {
        printf("Resultado: Carta %d(%s): Venceu!\n ", carta2, nomedacidade2);
    }

    return 0;


}
