#include <stdio.h>  

int main(){
    char  cod_carta1[10], cod_carta2[10], nome_cid1[50], nome_cid2[50], estad_carta1, estad_carta2;
    int populacao1, populacao2, pontos_tur1, pontos_tur2;
    float area1, area2, pib1, pib2;
// Leitura das informações da primeira carta.
    printf("Insira os dados da 1° carta\n");
    printf("Estado: ");
    scanf(" %c", &estad_carta1);
    printf("Codigo: ");
    scanf("%s", cod_carta1);
    printf("Nome da cidade: ");
    scanf("%s", nome_cid1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos_tur1);
    printf("\n");
//Leitura das informações da segunda carta.
    printf("Insira os dados da 2° carta: \n");
    printf("Estado: ");
    scanf(" %c", &estad_carta2);
    printf("Codigo: ");
    scanf("%s", cod_carta2);
    printf("Nome da cidade: ");
    scanf("%s", nome_cid2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos_tur2);
    printf("\n");
//Mostrar dados da primeira carta.
    printf("Carta 1\n");
    printf("Estado: %c\n", estad_carta1);
    printf("Código: %s\n", cod_carta1);
    printf("Nome da Cidade: %s\n", nome_cid1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km2\n", area1);
    printf("PIB: R$%2.f bilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_tur1);
    printf("\n");
//Mostrar dados da segunda carta.
    printf("Carta 2\n");
    printf("Estado: %c\n", estad_carta2);
    printf("Código: %s\n", cod_carta2);
    printf("Nome da Cidade: %s\n", nome_cid2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km2\n", area2);
    printf("PIB: R$%2.f Bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_tur2);

    return 0;
}
