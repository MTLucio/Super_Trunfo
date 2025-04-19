#include <stdio.h>

int main(){
    int resultado;
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

    int opcao1, opcao2;
    int comparacao1, comparacao2;
    float soma1, soma2;
    printf("=~=~=~=~=~=COMPARAÇÃO DE CARTAS=~=~=~=~=~=\n");
    printf("Escolha a Primeira Opção para comparar:\n");
    printf("1. Popolaçao\n");
    printf("2. Area\n");
    printf("3. PIB:\n");
    printf("4. Pontos Turístico:\n");
    printf("5. Densidade Populacional:\n");
    printf("Escolha: ");
    scanf("%d", &opcao1);

    printf("Escolha a Segugunda Opção para comparar [não pode ser a mesma]:\n");
    printf("1. Popolaçao\n");
    printf("2. Area\n");
    printf("3. PIB:\n");
    printf("4. Pontos Turístico:\n");
    printf("5. Densidade Populacional:\n");
    printf("Escolha: ");
    scanf("%d", &opcao2);
    printf("=~=~=~=~=~=COMPARAANDO AS CARTAS=~=~=~=~=~=\n");

    printf("###%s X %s###\n", nomedacidade1, nomedacidade2);

    if (opcao1 == opcao2){
        printf("Opção Invalida, Não pode Repetir as comparações\n");
    } else {
        switch (opcao1)
        {
        case 1:
            printf("Primeiro Atributo de Comparação: População\n");
            printf("%s = %d\n%s = %d\n", nomedacidade1, populacao1, nomedacidade2, populacao2);
            comparacao1 = populacao1 > populacao2 ? 1 : 0;
            soma1 = populacao1;
            soma2 = populacao2;
    
            break;
        case 2:
            printf("Primeiro Atributo de Comparação: Area\n");
            printf("%s = %.2f\n%s = %.2f\n", nomedacidade1, area1, nomedacidade2, area2);
            comparacao1 = area1 > area2 ? 1 : 0;
            soma1 = area1;
            soma2 = area2;
            
            break;
        case 3:
            printf("Primeiro Atributo de Comparação: PIB\n");
            printf("%s = %.2f\n%s = %.2f\n", nomedacidade1, pib1, nomedacidade2,pib2);
            comparacao1 = pib1 > pib2 ? 1 : 0;
            soma1 = pib1;
            soma2 = pib2;

            break;
        case 4:
            printf("Primeiro Atributo de Comparação: Ponto Turistico\n");
            printf("%s = %d\n%s = %d\n", nomedacidade1, turismo1, nomedacidade2, turismo2);
            comparacao1 = turismo1 > turismo2 ? 1 : 0;
            soma1 = turismo1;
            soma2 = turismo2;

            break;    
        case 5:
            printf("Atributo de Comparação: Densidade Populacional\n");
            printf("%s = %.2f\n%s = %.2f\n", nomedacidade1, densidade1, nomedacidade2, densidade2);
            comparacao1 = densidade1 > densidade2 ? 1 : 0;
            soma1 = densidade1;
            soma2 = densidade2; 

            break;
        default:
            printf("Opção Invalida!");
            break;
        }
        if (comparacao1 == 1){
            printf("Carta 01 %s Venceu a Primeira Comparaçao\n", nomedacidade1);
        } else {
            printf("Carta 02 %s Venceu a Primeira Comparaçao\n", nomedacidade2);
        }

        switch (opcao2)
        {
        case 1:
            printf("Segundo Atributo de Comparação: População\n");
            printf("%s = %d\n%s = %d\n", nomedacidade1, populacao1, nomedacidade2, populacao2);
            comparacao2 = populacao1 > populacao2 ? 1 : 0;
            soma1 += populacao1;
            soma2 += populacao2;
            break;
        case 2:
            printf("Segundo Atributo de Comparação: Area\n");
            printf("%s = %.2f\n%s = %.2f\n", nomedacidade1, area1, nomedacidade2, area2);
            comparacao2 = area1 > area2 ? 1 : 0;
            soma1 += area1;
            soma2 += area2;
            
            break;
        case 3:
            printf("Segundo Atributo de Comparação: PIB\n");
            printf("%s = %.2f\n%s = %.2f\n", nomedacidade1, pib1, nomedacidade2,pib2);
            comparacao2 = pib1 > pib2 ? 1 : 0;
            soma1 += pib1;
            soma2 += pib2;

            break;
        case 4:
            printf("Segundo Atributo de Comparação: Ponto Turistico\n");
            printf("%s = %d\n%s = %d\n", nomedacidade1, turismo1, nomedacidade2, turismo2);
            comparacao2 = turismo1 > turismo2 ? 1 : 0;
            soma1 += turismo1;
            soma2 += turismo2;

            break;    
        case 5:
            printf("Segundo de Comparação: Densidade Populacional\n");
            printf("%s = %.2f\n%s = %.2f\n", nomedacidade1, densidade1, nomedacidade2, densidade2);
            comparacao2 = densidade1 > densidade2 ? 1 : 0;
            soma1 += densidade1;
            soma2 += densidade2; 

            break;
        default:
            printf("Opção Invalida!\n");
            break;
        }
        if (comparacao2 == 1){
            printf("Carta 01 %s Venceu a Segunda Comparaçao\n", nomedacidade1);
        } else {
            printf("Carta 02 %s Venceu a Segunda Comparaçao\n", nomedacidade2);
        }
    }
    printf("### Somando cada Atributo ###\n");
    printf("%s: %.2f \n%s: %.2f\n", nomedacidade1, soma1, nomedacidade2, soma2);
    if (soma1 == soma2){
        printf("Deu EMPATE!!!\n");
    } else if (soma1 > soma2) {
        printf("Carta 01 %s VENCEU O JOGO!!!\n", nomedacidade1);
    } else {
         printf("Carta 02 %s VENCEU O JOGO!!!\n", nomedacidade2);
    }
    

    
    return 0;


}
