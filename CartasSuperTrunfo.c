#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


#include <string.h>

int main() {
    // Carta 1 - Turquia
    char nomePais1[50] = "Turquia";
    int populacao1 = 85300000;
    float area1 = 783356.0;
    float pib1 = 1150000.0; // em milhões de USD
    int pontosTuristicos1 = 80;

    // Carta 2 - Romênia
    char nomePais2[50] = "Romenia";
    int populacao2 = 19000000;
    float area2 = 238397.0;
    float pib2 = 350000.0; // em milhões de USD
    int pontosTuristicos2 = 40;

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int escolha;

    printf("=== SUPER TRUNFO DE PAISES ===\n\n");
    printf("Escolha um atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &escolha);

    printf("\nComparando %s e %s...\n\n", nomePais1, nomePais2);

    switch (escolha) {
        case 1:
            printf("Atributo: Populacao\n");
            printf("%s: %d habitantes\n", nomePais1, populacao1);
            printf("%s: %d habitantes\n", nomePais2, populacao2);

            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", nomePais1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", nomePais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Atributo: Area\n");
            printf("%s: %.2f km²\n", nomePais1, area1);
            printf("%s: %.2f km²\n", nomePais2, area2);

            if (area1 > area2) {
                printf("Vencedor: %s\n", nomePais1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", nomePais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões de USD\n", nomePais1, pib1 / 1000);
            printf("%s: %.2f bilhões de USD\n", nomePais2, pib2 / 1000);

            if (pib1 > pib2) {
                printf("Vencedor: %s\n", nomePais1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", nomePais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d\n", nomePais1, pontosTuristicos1);
            printf("%s: %d\n", nomePais2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedor: %s\n", nomePais1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Vencedor: %s\n", nomePais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade Demografica\n");
            printf("%s: %.4f hab/km²\n", nomePais1, densidade1);
            printf("%s: %.4f hab/km²\n", nomePais2, densidade2);

            if (densidade1 < densidade2) {
                printf("Vencedor: %s (menor densidade)\n", nomePais1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s (menor densidade)\n", nomePais2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida. Por favor, escolha um numero de 1 a 5.\n");
    }

    return 0;
}