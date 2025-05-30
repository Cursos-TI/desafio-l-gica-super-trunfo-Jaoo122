#include <stdio.h>
#include <string.h>

int main() {
    char pais1[50], pais2[50];
    unsigned long int pop1, pop2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;

    float dens1, dens2;

    // Cadastro da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Nome do país: ");
    scanf("%s", pais1);
    printf("População: ");
    scanf("%lu", &pop1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em trilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    dens1 = pop1 / area1;

    // Cadastro da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Nome do país: ");
    scanf("%s", pais2);
    printf("População: ");
    scanf("%lu", &pop2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em trilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    dens2 = pop2 / area2;

    // Menu de comparação
    int opcao;
    printf("\n=== Menu de Comparação ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\n=== Comparação entre %s e %s ===\n", pais1, pais2);

    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %lu\n", pais1, pop1);
            printf("%s: %lu\n", pais2, pop2);
            if (pop1 > pop2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (pop2 > pop1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n", pais2, area2);
            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f trilhões\n", pais1, pib1);
            printf("%s: %.2f trilhões\n", pais2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d\n", pais1, pontos1);
            printf("%s: %d\n", pais2, pontos2);
            if (pontos1 > pontos2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (pontos2 > pontos1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", pais1, dens1);
            printf("%s: %.2f hab/km²\n", pais2, dens2);
            if (dens1 < dens2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (dens2 < dens1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}