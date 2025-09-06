#include <stdio.h>

int main() {
    char estado1[3];
    char codigo1[3];
    char nomeCidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    
    char estado2[3];
    char codigo2[3];
    char nomeCidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    printf("Carta 1: \n");
    printf("Digite o estado: ");
    scanf("%s", estado1);
    while (getchar() != '\n');
    printf("Digite o codigo da carta: ");
    scanf("%2s", codigo1);
    while (getchar() != '\n');
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    while (getchar() != '\n');
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    while (getchar() != '\n');
    printf("Digite a área (km2): ");
    scanf("%f", &area1);
    while (getchar() != '\n');
    printf("Digite o PIB (valor total em reais): ");
    scanf("%f", &pib1);
    while (getchar() != '\n');
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
    while (getchar() != '\n');
    
    printf("\n Carta 2: \n");
    printf("Digite o estado: ");
    scanf("%s", estado2);
    while (getchar() != '\n');
    printf("Digite o codigo da carta: ");
    scanf("%2s", codigo2);
    while (getchar() != '\n');
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    while (getchar() != '\n');
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    while (getchar() != '\n');
    printf("Digite a área (km2): ");
    scanf("%f", &area2);
    while (getchar() != '\n');
    printf("Digite o PIB (valor total em reais): ");
    scanf("%f", &pib2);
    while (getchar() != '\n');
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    while (getchar() != '\n');

    float densidade1 = (area1 > 0) ? populacao1 / area1 : 0;
    float pibPerCapita1 = (populacao1 > 0) ? pib1 / populacao1 : 0;

    float densidade2 = (area2 > 0) ? populacao2 / area2 : 0;
    float pibPerCapita2 = (populacao2 > 0) ? pib2 / populacao2 : 0;
    
    int atributo1 = populacao1;
    int atributo2 = populacao2;

    printf("\nComparação de Cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %d\n", nomeCidade1, estado1, atributo1);
    printf("Carta 2 - %s (%s): %d\n\n", nomeCidade2, estado2, atributo2);

    if (atributo1 > atributo2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (atributo2 > atributo1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: As cartas empataram!\n");
    }

    return 0;
}
