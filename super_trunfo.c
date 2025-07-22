#include <stdio.h>

int main() {
    char estado, estado2;
    char codigo[4], codigo2[4];
    char nome[20], nome2[20];
    unsigned long int populacao = 0, populacao2 = 0;
    float area, area2;
    float pib, pib2;
    int Pturisticos = 0, Pturisticos2 = 0;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Leitura da primeira carta
    printf("Digite os dados da primeira carta:\n");
    printf("Digite uma única letra entre A-H para representar o estado:\n");
    scanf(" %c", &estado);
    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%3s", codigo);
    printf("Digite o nome da cidade:\n");
    scanf(" %19[^\n]", nome);
    printf("O número de habitantes da cidade:\n");
    scanf("%lu", &populacao);
    printf("A área da cidade em quilômetros quadrados:\n");
    scanf("%f", &area);
    printf("O Produto Interno Bruto da cidade (em bilhões):\n");
    scanf("%f", &pib);
    printf("A quantidade de pontos turísticos na cidade:\n");
    scanf("%d", &Pturisticos);

    // Leitura da segunda carta
    printf("\nDigite os dados da segunda carta:\n");
    printf("Digite uma única letra entre A-H para representar o estado:\n");
    scanf(" %c", &estado2);
    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%3s", codigo2);
    printf("Digite o nome da cidade:\n");
    scanf(" %19[^\n]", nome2);
    printf("O número de habitantes da cidade:\n");
    scanf("%lu", &populacao2);
    printf("A área da cidade em quilômetros quadrados:\n");
    scanf("%f", &area2);
    printf("O Produto Interno Bruto da cidade (em bilhões):\n");
    scanf("%f", &pib2);
    printf("A quantidade de pontos turísticos na cidade:\n");
    scanf("%d", &Pturisticos2);

    // Cálculo da densidade populacional
    densidade1 = (area != 0) ? (float)populacao / area : 0;
    densidade2 = (area2 != 0) ? (float)populacao2 / area2 : 0;

    // Cálculo do PIB per capita
    pibPerCapita1 = (populacao != 0) ? (pib * 1e9f) / populacao : 0;
    pibPerCapita2 = (populacao2 != 0) ? (pib2 * 1e9f) / populacao2 : 0;

    // Cálculo do Super Poder
    superPoder1 = (float)populacao + area + pib + Pturisticos + pibPerCapita1 + ((densidade1 != 0) ? 1.0f / densidade1 : 0);
    superPoder2 = (float)populacao2 + area2 + pib2 + Pturisticos2 + pibPerCapita2 + ((densidade2 != 0) ? 1.0f / densidade2 : 0);

    // Exibir dados das cartas
    printf("\nInformações cadastradas:\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", Pturisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", Pturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", Pturisticos > Pturisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);  // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
