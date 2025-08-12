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

    printf("Digite os dados da primeira carta:\n");
    printf("Digite uma única letra entre A-H para representar o estado:\n");
    scanf(" %c", &estado);
    printf("Código da carta (ex: A01, B03):\n");
    scanf("%3s", codigo);
    printf("Digite o nome da cidade:\n");
    scanf(" %19[^\n]", nome);
    printf("População:\n");
    scanf("%lu", &populacao);
    printf("Área (km²):\n");
    scanf("%f", &area);
    printf("PIB (em bilhões de reais):\n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos:\n");
    scanf("%d", &Pturisticos);

    printf("\nDigite os dados da segunda carta:\n");
    printf("Digite uma única letra entre A-H para representar o estado:\n");
    scanf(" %c", &estado2);
    printf("Código da carta (ex: A01, B03):\n");
    scanf("%3s", codigo2);
    printf("Digite o nome da cidade:\n");
    scanf(" %19[^\n]", nome2);
    printf("População:\n");
    scanf("%lu", &populacao2);
    printf("Área (km²):\n");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais):\n");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos:\n");
    scanf("%d", &Pturisticos2);

    densidade1 = (area != 0) ? (float)populacao / area : 0;
    densidade2 = (area2 != 0) ? (float)populacao2 / area2 : 0;
    pibPerCapita1 = (populacao != 0) ? (pib * 1e9f) / populacao : 0;
    pibPerCapita2 = (populacao2 != 0) ? (pib2 * 1e9f) / populacao2 : 0;

    int opcao;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("6 - PIB per capita\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: 
            printf("\nComparação de cartas (Atributo: População):\n");
            printf("Carta 1 - %s: %lu\n", nome, populacao);
            printf("Carta 2 - %s: %lu\n", nome2, populacao2);
            if (populacao > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome);
            } else if (populacao < populacao2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: 
            printf("\nComparação de cartas (Atributo: Área):\n");
            printf("Carta 1 - %s: %.2f km²\n", nome, area);
            printf("Carta 2 - %s: %.2f km²\n", nome2, area2);
            if (area > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome);
            } else if (area < area2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: 
            printf("\nComparação de cartas (Atributo: PIB):\n");
            printf("Carta 1 - %s: %.2f bilhões\n", nome, pib);
            printf("Carta 2 - %s: %.2f bilhões\n", nome2, pib2);
            if (pib > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome);
            } else if (pib < pib2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: 
            printf("\nComparação de cartas (Atributo: Pontos Turísticos):\n");
            printf("Carta 1 - %s: %d\n", nome, Pturisticos);
            printf("Carta 2 - %s: %d\n", nome2, Pturisticos2);
            if (Pturisticos > Pturisticos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome);
            } else if (Pturisticos < Pturisticos2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: 
            printf("\nComparação de cartas (Atributo: Densidade Demográfica):\n");
            printf("Carta 1 - %s: %.2f hab/km²\n", nome, densidade1);
            printf("Carta 2 - %s: %.2f hab/km²\n", nome2, densidade2);
            if (densidade1 < densidade2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome);
            } else if (densidade1 > densidade2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 6: 
            printf("\nComparação de cartas (Atributo: PIB per Capita):\n");
            printf("Carta 1 - %s: %.2f R$\n", nome, pibPerCapita1);
            printf("Carta 2 - %s: %.2f R$\n", nome2, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome);
            } else if (pibPerCapita1 < pibPerCapita2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("\nOpção inválida! Tente novamente.\n");
            break;
    }

    return 0;
}
