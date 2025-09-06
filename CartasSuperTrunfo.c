#include <stdio.h>

int main() {

    char estado1;
    char codigo1[3];
    char nomeCidade1[20];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float perCapta1;
    float superPoder1;

    char estado2;
    char codigo2[3];
    char nomeCidade2[20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float perCapta2;
    float superPoder2;

    printf("Carta 1\n");
    printf("Digite o estado: ");
    scanf(" %c", &estado1);
    while(getchar() != '\n');
    printf("Digite o codigo da carta: ");
    scanf("%2s", codigo1);
    while(getchar() != '\n');
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    while(getchar() != '\n');
    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);
    while(getchar() != '\n');
    printf("Digite a area (km2): ");
    scanf("%f", &area1);
    while(getchar() != '\n');
    printf("Digite o PIB (valor total em reais): ");
    scanf("%f", &pib1);
    while(getchar() != '\n');
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);
    while(getchar() != '\n');

    densidade1 = (area1 > 0) ? populacao1 / area1 : 0;
    perCapta1 = (populacao1 > 0) ? pib1 / populacao1 : 0;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + perCapta1 + (densidade1 > 0 ? 1.0f / densidade1 : 0);

    printf("\nCarta 2\n");
    printf("Digite o estado: ");
    scanf(" %c", &estado2);
    while(getchar() != '\n');
    printf("Digite o codigo da carta: ");
    scanf("%2s", codigo2);
    while(getchar() != '\n');
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    while(getchar() != '\n');
    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);
    while(getchar() != '\n');
    printf("Digite a area (km2): ");
    scanf("%f", &area2);
    while(getchar() != '\n');
    printf("Digite o PIB (valor total em reais): ");
    scanf("%f", &pib2);
    while(getchar() != '\n');
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);
    while(getchar() != '\n');

    densidade2 = (area2 > 0) ? populacao2 / area2 : 0;
    perCapta2 = (populacao2 > 0) ? pib2 / populacao2 : 0;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + perCapta2 + (densidade2 > 0 ? 1.0f / densidade2 : 0);

    printf("\nComparacao de Cartas: \n");
    int vitpopulacao = populacao1 > populacao2;
    printf("Populaçâo: Carta %d venceu (%d)\n", vitpopulacao ? 1 : 2, vitpopulacao);

    int vitarea = area1 > area2;
    printf("Área: Carta %d venceu (%d)\n", vitarea ? 1 : 2, vitarea);

    int vitpib = pib1 > pib2;
    printf("PIB: Carta %d venceu (%d)\n", vitpib ? 1 : 2, vitpib);

    int vitpontos = pontosTuristicos1 > pontosTuristicos2;
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", vitpontos ? 1 : 2, vitpontos);

    int vitdensidade = densidade1 < densidade2;
    printf("Densidade Populacional: Carta %d venceu (%d)\n", vitdensidade ? 1 : 2, vitdensidade);

    int vitperCapta = perCapta1 > perCapta2;
    printf("PIB per Capita: Carta %d venceu (%d)\n", vitperCapta ? 1 : 2, vitperCapta);

    int vitsuper = superPoder1 > superPoder2;
    printf("Super Poder: Carta %d venceu (%d)\n", vitsuper ? 1 : 2, vitsuper);

    return 0;
}
