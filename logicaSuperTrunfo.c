#include <stdio.h>
#include <string.h>

int main() {
    // Dados das cartas
    char pais1[50], pais2[50];
    unsigned long int pop1, pop2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;

    // Atributos derivados
    float dens1, dens2;

    // Entrada dos dados - Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Nome do país: ");
    scanf("%s", pais1);
    printf("População: ");
    scanf("%lu", &pop1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em trilhões): ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos1);

    dens1 = pop1 / area1;

    // Entrada dos dados - Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Nome do país: ");
    scanf("%s", pais2);
    printf("População: ");
    scanf("%lu", &pop2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em trilhões): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos2);

    dens2 = pop2 / area2;

    // Menu de atributos
    int escolha1, escolha2;
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;

    printf("\n=== Escolha de Atributos ===\n");
    printf("Atributos disponíveis:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");

    // Primeira escolha
    printf("Escolha o primeiro atributo (1 a 5): ");
    scanf("%d", &escolha1);

    // Menu dinâmico para a segunda escolha
    do {
        printf("Escolha o segundo atributo (diferente do primeiro): ");
        scanf("%d", &escolha2);
        if (escolha2 == escolha1) {
            printf("Você já escolheu esse atributo. Escolha outro.\n");
        }
    } while (escolha2 == escolha1);

    // Função para mapear atributos (carta 1 e 2)
    switch (escolha1) {
        case 1:
            valor1_c1 = pop1;
            valor1_c2 = pop2;
            break;
        case 2:
            valor1_c1 = area1;
            valor1_c2 = area2;
            break;
        case 3:
            valor1_c1 = pib1;
            valor1_c2 = pib2;
            break;
        case 4:
            valor1_c1 = pontos1;
            valor1_c2 = pontos2;
            break;
        case 5:
            valor1_c1 = dens1;
            valor1_c2 = dens2;
            break;
    }

    switch (escolha2) {
        case 1:
            valor2_c1 = pop1;
            valor2_c2 = pop2;
            break;
        case 2:
            valor2_c1 = area1;
            valor2_c2 = area2;
            break;
        case 3:
            valor2_c1 = pib1;
            valor2_c2 = pib2;
            break;
        case 4:
            valor2_c1 = pontos1;
            valor2_c2 = pontos2;
            break;
        case 5:
            valor2_c1 = dens1;
            valor2_c2 = dens2;
            break;
    }

    // Exibir valores
    printf("\n=== Comparação ===\n");

    char* nomesAtributos[6] = {"", "População", "Área", "PIB", "Pontos Turísticos", "Densidade Demográfica"};

    printf("Atributo 1: %s\n", nomesAtributos[escolha1]);
    printf("%s: %.2f\n", pais1, valor1_c1);
    printf("%s: %.2f\n\n", pais2, valor1_c2);

    printf("Atributo 2: %s\n", nomesAtributos[escolha2]);
    printf("%s: %.2f\n", pais1, valor2_c1);
    printf("%s: %.2f\n", pais2, valor2_c2);

    // Comparações
    float soma1 = 0, soma2 = 0;

    // Atributo 1
    int v1 = (escolha1 == 5) ? (valor1_c1 < valor1_c2) : (valor1_c1 > valor1_c2);
    soma1 += valor1_c1;
    soma2 += valor1_c2;

    // Atributo 2
    int v2 = (escolha2 == 5) ? (valor2_c1 < valor2_c2) : (valor2_c1 > valor2_c2);
    soma1 += valor2_c1;
    soma2 += valor2_c2;

    // Resultado final
    printf("\n=== Resultado Final ===\n");
    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n", pais1, soma1);
    printf("%s: %.2f\n", pais2, soma2);

    if (soma1 > soma2) {
        printf("\nVencedor: %s\n", pais1);
    } else if (soma2 > soma1) {
        printf("\nVencedor: %s\n", pais2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}