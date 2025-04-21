#include <stdio.h>

int main(){
    int carta1 = 1;
    char estado1 = 'A';
    char codigo1[20] = "A01";
    char nome1[20]; 
    int populacao1, turismo1;
    float area1, pib1, densidade1, pibper1;


    printf("Digite o nome da Cidade: \n");
    scanf("%s", &nome1);

    printf("Digite a População: \n");
    scanf("%d", &populacao1);

    printf("DIgite a Área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turístico: \n");
    scanf("%d", &turismo1);

    densidade1 = (float) populacao1 / area1;
    pibper1 = (pib1 * 10000000000) / (float) populacao1;

    int carta2 = 2;
    char estado2 = 'B';
    char codigo2[20] = "B02";
    char nome2[20]; 
    int populacao2, turismo2;
    float area2, pib2, densidade2, pibper2;

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &nome2);

    printf("Digite a População: \n");
    scanf("%d", &populacao2);

    printf("DIgite a Área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turístico: \n");
    scanf("%d", &turismo2);
    
    densidade2 = (float) populacao2 / area2;
    pibper2 = (pib2 * 10000000000) / (float) populacao2;

    printf("Carta: %d\n", carta1);
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: R$ %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turístico: %d\n", turismo1);
    printf("Dencidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibper1);

    printf("Carta: %d\n", carta2);
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: R$ %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turístico: %d\n", turismo2);
    printf("Dencidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibper2);

    return 0;


}
