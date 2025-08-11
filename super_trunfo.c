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

    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%c): %lu\n", nome, estado, populacao);
    printf("Carta 2 - %s (%c): %lu\n", nome2, estado2, populacao2);


    if (populacao > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome);
    } else if (populacao < populacao2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
