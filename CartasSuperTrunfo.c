#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


#include <string.h>

int main() {
    // Dados da carta 1 - Turquia
    char pais1[30] = "Turquia";
    int populacao1 = 85300000;
    float area1 = 783356.0;
    float pib1 = 1150000.0; // em milhões de USD
    int pontos1 = 80;
    float densidade1 = populacao1 / area1;

    // Dados da carta 2 - Romenia
    char pais2[30] = "Romenia";
    int populacao2 = 19000000;
    float area2 = 238397.0;
    float pib2 = 350000.0; // em milhões de USD
    int pontos2 = 40;
    float densidade2 = populacao2 / area2;

    int atributo1, atributo2;
    float valor1_1, valor1_2;
    float valor2_1, valor2_2;

    printf("=== SUPER TRUNFO COMPARACAO DE DOIS ATRIBUTOS ===\n\n");

    printf("Escolha o PRIMEIRO atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    scanf("%d", &atributo1);

    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2 || atributo1 < 1 || atributo1 > 5 || atributo2 < 1 || atributo2 > 5) {
        printf("\nErro: Os atributos devem ser diferentes e válidos (1 a 5).\n");
        return 1;
    }

    // Pega o valor do primeiro atributo
    if (atributo1 == 1) {
        valor1_1 = populacao1;
        valor1_2 = populacao2;
    } else if (atributo1 == 2) {
        valor1_1 = area1;
        valor1_2 = area2;
    } else if (atributo1 == 3) {
        valor1_1 = pib1;
        valor1_2 = pib2;
    } else if (atributo1 == 4) {
        valor1_1 = pontos1;
        valor1_2 = pontos2;
    } else if (atributo1 == 5) {
        valor1_1 = densidade1;
        valor1_2 = densidade2;
    }

    // Pega o valor do segundo atributo
    if (atributo2 == 1) {
        valor2_1 = populacao1;
        valor2_2 = populacao2;
    } else if (atributo2 == 2) {
        valor2_1 = area1;
        valor2_2 = area2;
    } else if (atributo2 == 3) {
        valor2_1 = pib1;
        valor2_2 = pib2;
    } else if (atributo2 == 4) {
        valor2_1 = pontos1;
        valor2_2 = pontos2;
    } else if (atributo2 == 5) {
        valor2_1 = densidade1;
        valor2_2 = densidade2;
    }

    float soma1 = valor1_1 + valor2_1;
    float soma2 = valor1_2 + valor2_2;

    printf("\n--- RESULTADO ---\n");
    printf("Pais 1: %s\n", pais1);
    printf("Pais 2: %s\n", pais2);
    printf("\nValores do primeiro atributo:\n");
    printf("%s: %.2f\n", pais1, valor1_1);
    printf("%s: %.2f\n", pais2, valor1_2);

    printf("\nValores do segundo atributo:\n");
    printf("%s: %.2f\n", pais1, valor2_1);
    printf("%s: %.2f\n", pais2, valor2_2);

    printf("\nSoma dos dois atributos:\n");
    printf("%s: %.2f\n", pais1, soma1);
    printf("%s: %.2f\n", pais2, soma2);

    // Verifica se é densidade (atributo 5), onde menor é melhor
    if ((atributo1 == 5 && valor1_1 < valor1_2) || (atributo1 != 5 && valor1_1 > valor1_2)) {
        printf("\n%s venceu no primeiro atributo!\n", pais1);
    } else if ((atributo1 == 5 && valor1_2 < valor1_1) || (atributo1 != 5 && valor1_2 > valor1_1)) {
        printf("\n%s venceu no primeiro atributo!\n", pais2);
    } else {
        printf("\nEmpate no primeiro atributo!\n");
    }

    if ((atributo2 == 5 && valor2_1 < valor2_2) || (atributo2 != 5 && valor2_1 > valor2_2)) {
        printf("%s venceu no segundo atributo!\n", pais1);
    } else if ((atributo2 == 5 && valor2_2 < valor2_1) || (atributo2 != 5 && valor2_2 > valor2_1)) {
        printf("%s venceu no segundo atributo!\n", pais2);
    } else {
        printf("Empate no segundo atributo!\n");
    }

    // Vencedor final baseado na soma
    if (soma1 > soma2) {
        printf("\nVENCEDOR FINAL: %s\n", pais1);
    } else if (soma2 > soma1) {
        printf("\nVENCEDOR FINAL: %s\n", pais2);
    } else {
        printf("\nEMPATE FINAL!\n");
    }

    return 0;
}