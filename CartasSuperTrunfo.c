#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[60], cidade2[60];
    unsigned long int populacao1, populacao2;  // Alterado para unsigned long int
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;

    // Coletando dados da primeira carta
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", cidade1);
    printf("Digite a população: ");
    scanf("%lu", &populacao1);  // Usando %lu para unsigned long int
    printf("Digite a área: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Coletando dados da segunda carta
    printf("\nDigite o estado (letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", cidade2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);  // Usando %lu para unsigned long int
    printf("Digite a área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Calculando a densidade populacional e o PIB per capita para a primeira cidade
    float densidade_pop1 = populacao1 / area1;
    float pib_per_capita1 = pib1 * 1e9 / populacao1;  // PIB em bilhões, multiplicar por 10^9

    // Calculando a densidade populacional e o PIB per capita para a segunda cidade
    float densidade_pop2 = populacao2 / area2;
    float pib_per_capita2 = pib2 * 1e9 / populacao2;  // PIB em bilhões, multiplicar por 10^9

    // Calculando o Super Poder para a primeira carta
    float super_poder1 = populacao1 + area1 + pib1 * 1e9 + pontos1 + (1 / densidade_pop1) + pib_per_capita1;

    // Calculando o Super Poder para a segunda carta
    float super_poder2 = populacao2 + area2 + pib2 * 1e9 + pontos2 + (1 / densidade_pop2) + pib_per_capita2;

    // Comparações e exibição dos resultados
    printf("\nComparação de Cartas:\n");

    // Comparando População
    printf("População: ");
    if (populacao1 > populacao2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Comparando Área
    printf("Área: ");
    if (area1 > area2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Comparando PIB
    printf("PIB: ");
    if (pib1 > pib2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Comparando Pontos Turísticos
    printf("Pontos Turísticos: ");
    if (pontos1 > pontos2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Comparando Densidade Populacional
    printf("Densidade Populacional: ");
    if (densidade_pop1 < densidade_pop2) {  // Menor densidade vence
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Comparando PIB per Capita
    printf("PIB per Capita: ");
    if (pib_per_capita1 > pib_per_capita2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Comparando Super Poder
    printf("Super Poder: ");
    if (super_poder1 > super_poder2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    return 0;
}
