#include <stdio.h>

int main() {

    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nome1[20], nome2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    printf("Digite os dados da primeira carta:\n");
    printf("Digite uma única letra entre A-H para representar o estado:\n");
    scanf(" %c", &estado1);
    printf("Código: ");
    scanf("%3s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %19[^\n]", nome1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões R$): ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nDigite os dados da segunda carta:\n");
    printf("Digite uma única letra entre A-H para representar o estado:\n");
    scanf(" %c", &estado2);
    printf("Código: ");
    scanf("%3s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %19[^\n]", nome2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões R$): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    float densidade1 = (area1 != 0) ? (float)populacao1 / area1 : 0;
    float densidade2 = (area2 != 0) ? (float)populacao2 / area2 : 0;
    float pibPerCapita1 = (populacao1 != 0) ? (pib1 * 1e9f) / populacao1 : 0;
    float pibPerCapita2 = (populacao2 != 0) ? (pib2 * 1e9f) / populacao2 : 0;

    int opcao1, opcao2;

    printf("\n=== ESCOLHA DO 1º ATRIBUTO ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica (menor vence)\n");
    printf("6 - PIB per capita\n");
    printf("Opção: ");
    scanf("%d", &opcao1);

    printf("\n=== ESCOLHA DO 2º ATRIBUTO ===\n");
    if (opcao1 != 1) printf("1 - População\n");
    if (opcao1 != 2) printf("2 - Área\n");
    if (opcao1 != 3) printf("3 - PIB\n");
    if (opcao1 != 4) printf("4 - Pontos turísticos\n");
    if (opcao1 != 5) printf("5 - Densidade demográfica (menor vence)\n");
    if (opcao1 != 6) printf("6 - PIB per capita\n");
    printf("Opção: ");
    scanf("%d", &opcao2);

    float soma1 = 0, soma2 = 0;
    float valorA1, valorA2;
    int vencedor;

    switch (opcao1) {
        case 1: valorA1 = populacao1; valorA2 = populacao2; vencedor = (valorA1 > valorA2) ? 1 : (valorA1 < valorA2 ? 2 : 0); break;
        case 2: valorA1 = area1; valorA2 = area2; vencedor = (valorA1 > valorA2) ? 1 : (valorA1 < valorA2 ? 2 : 0); break;
        case 3: valorA1 = pib1; valorA2 = pib2; vencedor = (valorA1 > valorA2) ? 1 : (valorA1 < valorA2 ? 2 : 0); break;
        case 4: valorA1 = pontosTuristicos1; valorA2 = pontosTuristicos2; vencedor = (valorA1 > valorA2) ? 1 : (valorA1 < valorA2 ? 2 : 0); break;
        case 5: valorA1 = densidade1; valorA2 = densidade2; vencedor = (valorA1 < valorA2) ? 1 : (valorA1 > valorA2 ? 2 : 0); break;
        case 6: valorA1 = pibPerCapita1; valorA2 = pibPerCapita2; vencedor = (valorA1 > valorA2) ? 1 : (valorA1 < valorA2 ? 2 : 0); break;
        default: printf("Opção inválida!\n"); return 0;
    }
    soma1 += valorA1;
    soma2 += valorA2;
    printf("\nAtributo %d: %.2f x %.2f → %s\n", opcao1, valorA1, valorA2, vencedor == 0 ? "Empate" : (vencedor == 1 ? nome1 : nome2));

    switch (opcao2) {
        case 1: valorA1 = populacao1; valorA2 = populacao2; vencedor = (valorA1 > valorA2) ? 1 : (valorA1 < valorA2 ? 2 : 0); break;
        case 2: valorA1 = area1; valorA2 = area2; vencedor = (valorA1 > valorA2) ? 1 : (valorA1 < valorA2 ? 2 : 0); break;
        case 3: valorA1 = pib1; valorA2 = pib2; vencedor = (valorA1 > valorA2) ? 1 : (valorA1 < valorA2 ? 2 : 0); break;
        case 4: valorA1 = pontosTuristicos1; valorA2 = pontosTuristicos2; vencedor = (valorA1 > valorA2) ? 1 : (valorA1 < valorA2 ? 2 : 0); break;
        case 5: valorA1 = densidade1; valorA2 = densidade2; vencedor = (valorA1 < valorA2) ? 1 : (valorA1 > valorA2 ? 2 : 0); break;
        case 6: valorA1 = pibPerCapita1; valorA2 = pibPerCapita2; vencedor = (valorA1 > valorA2) ? 1 : (valorA1 < valorA2 ? 2 : 0); break;
        default: printf("Opção inválida!\n"); return 0;
    }
    soma1 += valorA1;
    soma2 += valorA2;
    printf("Atributo %d: %.2f x %.2f → %s\n", opcao2, valorA1, valorA2, vencedor == 0 ? "Empate" : (vencedor == 1 ? nome1 : nome2));

    printf("\n=== RESULTADO FINAL ===\n");
    printf("%s (Soma) = %.2f\n", nome1, soma1);
    printf("%s (Soma) = %.2f\n", nome2, soma2);
    if (soma1 > soma2) {
        printf("Vencedor: %s\n", nome1);
    } else if (soma1 < soma2) {
        printf("Vencedor: %s\n", nome2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
