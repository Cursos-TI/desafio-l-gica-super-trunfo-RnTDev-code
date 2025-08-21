#include <stdio.h>
#include <string.h>

struct Carta {
    char CodigoDaCarta[20];
    char NomeDaCidade[25];
    int populacao;
    float area;
    float pib;
    int PontosTuristicos;
};

int main() {
    
    printf("====Bem-vindo ao Super Trunfo - Batalha de Cidades! ====\n");
    printf("--- Nivel Mestre ---\n\n");

    struct Carta carta1;
    struct Carta carta2;
    
    int escolha1, escolha2;

    float densidade1, pibPerCapita1;
    float densidade2, pibPerCapita2;

    float valorAtributo1_Carta1 = 0, valorAtributo2_Carta1 = 0;
    float valorAtributo1_Carta2 = 0, valorAtributo2_Carta2 = 0;
    char nomeAtributo1[30], nomeAtributo2[30];

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

    printf("\n\n--- HORA DA BATALHA! --- \n");
    printf("Escolha o PRIMEIRO atributo para comparar: \n");
    printf("1 - Populacao \n");
    printf("2 - Area \n");
    printf("3 - PIB \n");
    printf("4 - Pontos Turisticos \n");
    printf("5 - Densidade Demografica \n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha1);

    switch (escolha1) {
        case 1:
            valorAtributo1_Carta1 = (float)carta1.populacao;
            valorAtributo1_Carta2 = (float)carta2.populacao;
            strcpy(nomeAtributo1, "Populacao");
            break;
        case 2:
            valorAtributo1_Carta1 = carta1.area;
            valorAtributo1_Carta2 = carta2.area;
            strcpy(nomeAtributo1, "Area");
            break;
        case 3:
            valorAtributo1_Carta1 = carta1.pib;
            valorAtributo1_Carta2 = carta2.pib;
            strcpy(nomeAtributo1, "PIB");
            break;
        case 4:
            valorAtributo1_Carta1 = (float)carta1.PontosTuristicos;
            valorAtributo1_Carta2 = (float)carta2.PontosTuristicos;
            strcpy(nomeAtributo1, "Pontos Turisticos");
            break;
        case 5:
            valorAtributo1_Carta1 = densidade1;
            valorAtributo1_Carta2 = densidade2;
            strcpy(nomeAtributo1, "Densidade Demografica");
            break;
        default:
            printf("Opcao invalida! Fim de jogo. \n");
            return 1;
    }

    printf("\nEscolha o SEGUNDO atributo para comparar: \n");
    if (escolha1 != 1) printf("1 - Populacao \n");
    if (escolha1 != 2) printf("2 - Area \n");
    if (escolha1 != 3) printf("3 - PIB \n");
    if (escolha1 != 4) printf("4 - Pontos Turisticos \n");
    if (escolha1 != 5) printf("5 - Densidade Demografica \n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha2);

    if (escolha1 == escolha2) {
        printf("Erro: Voce nao pode escolher o mesmo atributo duas vezes! \n");
        return 1;
    }

    switch (escolha2) {
        case 1:
            valorAtributo2_Carta1 = (float)carta1.populacao;
            valorAtributo2_Carta2 = (float)carta2.populacao;
            strcpy(nomeAtributo2, "Populacao");
            break;
        case 2:
            valorAtributo2_Carta1 = carta1.area;
            valorAtributo2_Carta2 = carta2.area;
            strcpy(nomeAtributo2, "Area");
            break;
        case 3:
            valorAtributo2_Carta1 = carta1.pib;
            valorAtributo2_Carta2 = carta2.pib;
            strcpy(nomeAtributo2, "PIB");
            break;
        case 4:
            valorAtributo2_Carta1 = (float)carta1.PontosTuristicos;
            valorAtributo2_Carta2 = (float)carta2.PontosTuristicos;
            strcpy(nomeAtributo2, "Pontos Turisticos");
            break;
        case 5:
            valorAtributo2_Carta1 = densidade1;
            valorAtributo2_Carta2 = densidade2;
            strcpy(nomeAtributo2, "Densidade Demografica");
            break;
        default:
            printf("Opcao invalida! Fim de jogo. \n");
            return 1;
    }

    float somaCarta1 = valorAtributo1_Carta1 + valorAtributo2_Carta1;
    float somaCarta2 = valorAtributo1_Carta2 + valorAtributo2_Carta2;

    printf("\n==== RESULTADO DA BATALHA FINAL ====\n");
    printf("Países: %s vs %s \n", carta1.NomeDaCidade, carta2.NomeDaCidade);
    printf("Atributos escolhidos: %s e %s \n", nomeAtributo1, nomeAtributo2);
    printf("---------------------------------------- \n");
    printf("Valores de %s: \n", carta1.NomeDaCidade);
    printf("  %s: %.2f \n", nomeAtributo1, valorAtributo1_Carta1);
    printf("  %s: %.2f \n", nomeAtributo2, valorAtributo2_Carta1);
    printf("  SOMA TOTAL: %.2f \n", somaCarta1);
    printf("---------------------------------------- \n");
    printf("Valores de %s: \n", carta2.NomeDaCidade);
    printf("  %s: %.2f \n", nomeAtributo1, valorAtributo1_Carta2);
    printf("  %s: %.2f \n", nomeAtributo2, valorAtributo2_Carta2);
    printf("  SOMA TOTAL: %.2f \n", somaCarta2);
    printf("---------------------------------------- \n");

    if (somaCarta1 > somaCarta2) {
        printf("VENCEDOR FINAL: Carta 1 - %s! \n", carta1.NomeDaCidade);
    } else if (somaCarta2 > somaCarta1) {
        printf("VENCEDOR FINAL: Carta 2 - %s! \n", carta2.NomeDaCidade);
    } else {
        printf("Resultado Final: EMPATE! \n");
    }

    return 0;
}
