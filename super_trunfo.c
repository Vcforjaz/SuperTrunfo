#include <stdio.h>

int main(){
    char estado;
    char codigo[4];
    char nome[20];
    int populacao =0;
    float area;
    float pib;
    int Pturisticos =0;

    char estado2;
    char codigo2[4];
    char nome2[20];
    int populacao2 =0;
    float area2;
    float pib2;
    int Pturisticos2 =0;

    printf("Digite os dados da primeira carta:\n");
    printf("Digite uma unica letra entre A-H para representar o estado:");
    scanf(" %c", &estado);
    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03):");
    scanf("%s", codigo);
    printf("Digite o nome da cidade:");
    scanf("%s", &nome);
    printf("O número de habitantes da cidade:");
    scanf("%d", &populacao);
    printf("A área da cidade em quilômetros quadrados:");
    scanf("%f", &area);
    printf("O Produto Interno Bruto da cidade:");
    scanf("%f", &pib);
    printf("A quantidade de pontos turísticos na cidade:");
    scanf("%d", &Pturisticos);

    printf("\nDigite os dados da segunda carta:\n");
    printf("Digite uma unica letra entre A-H para representar o estado:");
    scanf(" %c", &estado2);
    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03):");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade:");
    scanf("%s", &nome2);
    printf("O número de habitantes da cidade:");
    scanf("%d", &populacao2);
    printf("A área da cidade em quilômetros quadrados:");
    scanf("%f", &area2);
    printf("O Produto Interno Bruto da cidade:");
    scanf("%f", &pib2);
    printf("A quantidade de pontos turísticos na cidade:");
    scanf("%d", &Pturisticos2);

    printf("\nInformações cadastradas:\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f \n", pib);
    printf("Número de Pontos Turísticos: %d\n", Pturisticos);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f \n", pib2);
    printf("Número de Pontos Turísticos: %d\n", Pturisticos2);

    return 0;
}