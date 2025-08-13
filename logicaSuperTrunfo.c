#include <stdio.h>
//OS ENUNCIADOS DO DESAFFIO ESTAO DIFERENTES NO SAVA E GITHUB!!! FIZ BASEADO NO README DO GITHUB.
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

    
    printf("--- Cadastro da Primeira Carta ---\n");
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

   
    printf("--- Cadastro da Segunda Carta ---\n");
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

    printf("\n\n--- DADOS CADASTRADOS ---\n");
    printf("Carta 1: %s (%s) - Populacao: %d\n", carta1.NomeDaCidade, carta1.CodigoDaCarta, carta1.populacao);
    printf("Carta 2: %s (%s) - Populacao: %d\n", carta2.NomeDaCidade, carta2.CodigoDaCarta, carta2.populacao);

    //COMPARAÇÃO USANDO IF - ELSE SEM TRATAR O EMPATE. PREFIRO FAZER O SIMPLES NESSE NIVEL

    printf("\n==== RESULTADO DA BATALHA (POPULACAO) ====\n");

    
    if (carta1.populacao > carta2.populacao) {
        printf("VENCEDOR: Carta 1 - %s!\n", carta1.NomeDaCidade);
    }
    else {
        // Se a carta 1 não for maior, assumimos que a carta 2 venceu.
        // Este bloco será executado tanto se a carta 2 vencer quanto em caso de empate.
        printf("VENCEDOR: Carta 2 - %s!\n", carta2.NomeDaCidade);
    }

    return 0;
}