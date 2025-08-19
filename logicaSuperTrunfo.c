#include <stdio.h>

struct Carta {
    char CodigoDaCarta[20];
    char NomeDaCidade[25];
    int populacao;
    float area;
    float pib;
    int PontosTuristicos;
};

int main() {
    
    struct Carta carta1;
    struct Carta carta2;
    int escolhaDoJogador; 

  
    float densidade1, pibPerCapita1;
    float densidade2, pibPerCapita2;

    printf("--- Cadastro da Primeira Carta --- \n");
    printf("Digite o codigo da carta: ");
    scanf("%s", carta1.CodigoDaCarta);
    printf("Digite o nome da cidade: ");
    scanf("%s", carta1.NomeDaCidade);
    printf("Digite a populacao: ");
    scanf("%d", &carta1.populacao);
    printf("Digite a area (em km2): ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &carta1.pib);
    printf("Digite o numero de Pontos Turisticos: ");
    scanf("%d", &carta1.PontosTuristicos);

    printf("\n");

    printf("--- Cadastro da Segunda Carta --- \n");
    printf("Digite o codigo da carta: ");
    scanf("%s", carta2.CodigoDaCarta);
    printf("Digite o nome da cidade: ");
    scanf("%s", carta2.NomeDaCidade);
    printf("Digite a populacao: ");
    scanf("%d", &carta2.populacao);
    printf("Digite a area (em km2): ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &carta2.pib);
    printf("Digite o numero de Pontos Turisticos: ");
    scanf("%d", &carta2.PontosTuristicos);

    
    densidade1 = (float)carta1.populacao / carta1.area;
    pibPerCapita1 = (carta1.pib * 1000000000) / (float)carta1.populacao;
    densidade2 = (float)carta2.populacao / carta2.area;
    pibPerCapita2 = (carta2.pib * 1000000000) / (float)carta2.populacao;

    //menu interativo 
    printf("\n\n--- HORA DA BATALHA! --- \n");
    printf("Escolha o atributo para comparar: \n");
    printf("1 - Populacao \n");
    printf("2 - Area \n");
    printf("3 - PIB \n");
    printf("4 - Pontos Turisticos \n");
    printf("5 - Densidade Demografica (menor vence) \n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolhaDoJogador);

    printf("\n==== RESULTADO DA BATALHA ==== \n");

    //uusando o switch case
    switch (escolhaDoJogador) {
        case 1:
            printf("Atributo: Populacao \n");
            printf("Carta 1 (%s): %d \n", carta1.NomeDaCidade, carta1.populacao);
            printf("Carta 2 (%s): %d \n", carta2.NomeDaCidade, carta2.populacao);
            if (carta1.populacao > carta2.populacao) {
                printf("VENCEDOR: Carta 1 - %s! \n", carta1.NomeDaCidade);
            } else if (carta2.populacao > carta1.populacao) {
                printf("VENCEDOR: Carta 2 - %s! \n", carta2.NomeDaCidade);
            } else {
                printf("Resultado: Empate! \n");
            }
            break;

        case 2:
            printf("Atributo: Area \n");
            printf("Carta 1 (%s): %.2f \n", carta1.NomeDaCidade, carta1.area);
            printf("Carta 2 (%s): %.2f \n", carta2.NomeDaCidade, carta2.area);
            if (carta1.area > carta2.area) {
                printf("VENCEDOR: Carta 1 - %s! \n", carta1.NomeDaCidade);
            } else if (carta2.area > carta1.area) {
                printf("VENCEDOR: Carta 2 - %s! \n", carta2.NomeDaCidade);
            } else {
                printf("Resultado: Empate! \n");
            }
            break;

        case 3:
            printf("Atributo: PIB \n");
            printf("Carta 1 (%s): %.2f bilhoes \n", carta1.NomeDaCidade, carta1.pib);
            printf("Carta 2 (%s): %.2f bilhoes \n", carta2.NomeDaCidade, carta2.pib);
            if (carta1.pib > carta2.pib) {
                printf("VENCEDOR: Carta 1 - %s! \n", carta1.NomeDaCidade);
            } else if (carta2.pib > carta1.pib) {
                printf("VENCEDOR: Carta 2 - %s! \n", carta2.NomeDaCidade);
            } else {
                printf("Resultado: Empate! \n");
            }
            break;

        case 4:
            printf("Atributo: Pontos Turisticos \n");
            printf("Carta 1 (%s): %d \n", carta1.NomeDaCidade, carta1.PontosTuristicos);
            printf("Carta 2 (%s): %d \n", carta2.NomeDaCidade, carta2.PontosTuristicos);
            if (carta1.PontosTuristicos > carta2.PontosTuristicos) {
                printf("VENCEDOR: Carta 1 - %s! \n", carta1.NomeDaCidade);
            } else if (carta2.PontosTuristicos > carta1.PontosTuristicos) {
                printf("VENCEDOR: Carta 2 - %s! \n", carta2.NomeDaCidade);
            } else {
                printf("Resultado: Empate! \n");
            }
            break;

        case 5:
            printf("Atributo: Densidade Demografica (menor vence) \n");
            printf("Carta 1 (%s): %.2f hab/km2 \n", carta1.NomeDaCidade, densidade1);
            printf("Carta 2 (%s): %.2f hab/km2 \n", carta2.NomeDaCidade, densidade2);
           
            if (densidade1 < densidade2) {
                printf("VENCEDOR: Carta 1 - %s! \n", carta1.NomeDaCidade);
            } else if (densidade2 < densidade1) {
                printf("VENCEDOR: Carta 2 - %s! \n", carta2.NomeDaCidade);
            } else {
                printf("Resultado: Empate! \n");
            }
            break;

        default:
            printf("Opcao invalida! Nenhuma batalha ocorreu. \n");
            break;
    }

    return 0;
}