#include <stdio.h>
 
int main() {
    printf("Desafio Super Trunfo-Novato \n");
    printf("Novo commit");

    // ===== CARTA 1 =====
    int populacao1; 
    float area1;
    char estado1;
    char cidade1[50];
    char codigo1[4];
    float pib1;
    int turisticos1;

    float densidade1;
    float pibPercapital1;

    // ===== CARTA 2 =====

    int populacao2; 
    float area2;
    char estado2;
    char cidade2[50];
    char codigo2[4];
    float pib2;
    int turisticos2;

    float densidade2;
    float pibPercapital2;


     // --------- ENTRADA DE DADOS DA CARTA 1 ---------
    printf("Cadastro da Carta 1\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &turisticos1);
 
    // calculo carta 1 

    densidade1 = populacao1 / area1;
    pibPercapital1 = (pib1 * 1000000000) / populacao1;

    // --------- ENTRADA DE DADOS DA CARTA 2 ---------
    printf("Cadastro da Carta 2\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &turisticos2);
 
    //calculo da carta 2

    densidade2 = populacao2 / area2;
    pibPercapital2 = (pib2 * 1000000000) / populacao2;

    // --------- SAÍDA DE DADOS ---------
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPercapital1);


    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPercapital2);

    return 0;
}
