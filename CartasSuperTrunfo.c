#include <stdio.h>

int main() {
    int populacao;
    int numero_de_pontos_turisticos;
    float PIB;
    float area;

    printf("-----------------------------\n");
    printf("Desafio Super Trunfo - países\n");
    printf("-----------------------------\n");

    printf("CARTA NÚMERO 1\n");
    printf("População: ");
    scanf("%d", &populacao);
    printf("Número de pontos turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos);
    printf("PIB: ");
    scanf("%f", &PIB);
    printf("Área do País: ");
    scanf("%f", &area);

    printf("--------------------------------------------\n");
    printf("                  CARTA 1\n");
    printf("--------------------------------------------\n");
    printf("Populção: %d \n", populacao);
    printf("Número de pontos turísticos: %d \n", numero_de_pontos_turisticos);
    printf("PIB: %2.f \n", PIB);
    printf("Área: %2.f \n", area);
    printf("--------------------------------------------\n");

    printf("CARTA NÚMERO 2\n");
    printf("População: ");
    scanf("%d", &populacao);
    printf("Número de pontos turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos);
    printf("PIB: ");
    scanf("%f", &PIB);
    printf("Área do País: ");
    scanf("%f", &area);

    printf("--------------------------------------------\n");
    printf("                  CARTA 2\n");
    printf("--------------------------------------------\n");
    printf("Populção: %d \n", populacao);
    printf("Número de pontos turísticos: %d \n", numero_de_pontos_turisticos);
    printf("PIB: %2.f \n", PIB);
    printf("Área: %2.f \n", area);
    printf("--------------------------------------------\n");

    return 0;
}
