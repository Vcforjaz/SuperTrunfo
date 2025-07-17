#include <stdio.h>

int main() {
    char estado;
    char codigo[4];
    char nome[20];
    int populacao =0;
    float area;
    float pib;
    int Pturisticos =0;
    float densidade1;
    float pibPerCapita1;

    char estado2;
    char codigo2[4];
    char nome2[20];
    int populacao2 =0;
    float area2;
    float pib2;
    int Pturisticos2 =0;
    float densidade2;
    float pibPerCapita2;

    printf("Digite os dados da primeira carta:\n");
    printf("Digite uma unica letra entre A-H para representar o estado: \n");
    scanf(" %c", &estado);
    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", codigo);
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nome);
    printf("O número de habitantes da cidade: \n");
    scanf("%d", &populacao);
    printf("A área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area);
    printf("O Produto Interno Bruto da cidade (em bilhões), Apenas os digitos da antes do ponto milenar \n");
    scanf("%f", &pib);
    printf("A quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &Pturisticos);

    printf("\nDigite os dados da segunda carta:\n");
    printf("Digite uma unica letra entre A-H para representar o estado: \n");
    scanf(" %c", &estado2);
    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nome2);
    printf("O número de habitantes da cidade: \n");
    scanf("%d", &populacao2);
    printf("A área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);
    printf("O Produto Interno Bruto da cidade (em bilhões), Apenas os digitos da antes do ponto milenar.  \n");
    scanf("%f", &pib2);
    printf("A quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &Pturisticos2);

    densidade1 = populacao / area;
    pibPerCapita1 = (pib * 1000000000) / populacao;

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    printf("\nInformações cadastradas:\n");

   printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", Pturisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", Pturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
