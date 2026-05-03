#include <stdio.h>  

int main(){
    char  cod_carta1[10], cod_carta2[10], nome_cid1[50], nome_cid2[50], estad_carta1[50], estad_carta2[50];
    int populacao1, populacao2, pontos_tur1, pontos_tur2;
    float area1, area2, pib1, pib2, densi_pop1, densi_pop2, pib_cap1, pib_cap2, conver_pib1, conver_pib2;
    double super_poder1, super_poder2;
// Leitura das informações da primeira carta.
    printf("Insira os dados da 1° carta:\n");
    printf("Estado:\n");
    scanf("%s", estad_carta1);
    printf("Codigo:\n");
    scanf("%s", cod_carta1);
    printf("Nome da cidade:\n");
    scanf("%s", nome_cid1);
    printf("População:\n");
    scanf("%d", &populacao1);
    printf("Area:\n");
    scanf("%f", &area1);
    printf("PIB:\n");
    scanf("%f", &pib1);
    printf("Pontos turisticos:\n");
    scanf("%d", &pontos_tur1);
    printf("\n");
//Leitura das informações da segunda carta.
    printf("Insira os dados da 2° carta:\n");
    printf("Estado:\n");
    scanf("%s", estad_carta2);
    printf("Codigo:\n");
    scanf("%s", cod_carta2);
    printf("Nome da cidade:\n");
    scanf("%s", nome_cid2);
    printf("População:\n");
    scanf("%d", &populacao2);
    printf("Area:\n");
    scanf("%f", &area2);
    printf("PIB:\n");
    scanf("%f", &pib2);
    printf("Pontos turisticos:\n");
    scanf("%d", &pontos_tur2);
    printf("\n");
//Calculo do PIP PER CAPTA e Densidade demografica
    conver_pib1 = pib1 * 1000000000;
    conver_pib2 = pib2 * 1000000000;
    densi_pop1 = populacao1 / area1;
    densi_pop2 = populacao2 / area2;
    pib_cap1 = conver_pib1 / populacao1;
    pib_cap2 = conver_pib2 / populacao2;
    super_poder1 = populacao1 + area1 + conver_pib1 + densi_pop1;
    super_poder2 = populacao2 + area2 + conver_pib2 + densi_pop2;

//Mostrar dados da primeira carta.
    printf("Carta 1\n");
    printf("Estado: %s\n", estad_carta1);
    printf("Código: %s\n", cod_carta1);
    printf("Nome da Cidade: %s\n", nome_cid1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: R$%.2f bilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_tur1);
    printf("Densidade Populacional: %.2fhab/km²\n", densi_pop1);
    printf("PIB per Capita: %.2f Reais\n", pib_cap1);
    printf("Super poder: %.2f", super_poder1);
    printf("\n");
//Mostrar dados da segunda carta.
    printf("Carta 2\n");
    printf("Estado: %s\n", estad_carta2);
    printf("Código: %s\n", cod_carta2);
    printf("Nome da Cidade: %s\n", nome_cid2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: R$%.2f Bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_tur2);
    printf("Densidade Populacional: %.2fhab/km²\n", densi_pop2);
    printf("PIB per Capita: %.2f Reais\n", pib_cap2);
    printf("Super poder: %.2f", super_poder2);
//Comparação dos super poderes.    
    if(populacao1 > populacao2 ){
        printf("\nA carta 1 venceu na população!.");
    } else {
        printf("\nA carta 2 venceu na população!.");
    }
    if (area1 > area2)
    {
        printf("\nA carta 1 venceu na área!.");
    } else {
        printf("\nA carta 2 venceu na área!.");
    }
    if (pib1 > pib2)
    {
        printf("\nA carta 1 venceu no PIB!.");
    } else {
        printf("\nA carta 2 venceu no PIB!.");
    }
    if (pontos_tur1 > pontos_tur2)
    {
        printf("\nA carta 1 venceu nos pontos turísticos!.");
    } else {
        printf("\nA carta 2 venceu nos pontos turísticos!.");
    }
    if (densi_pop1 < densi_pop2)
    {
        printf("\nA carta 1 venceu na densidade populacional!.");
    } else {
        printf("\nA carta 2 venceu na densidade populacional!.");
    }
    if (pib_cap1 > pib_cap2)
     {
        printf("\nA carta 1 venceu no PIB per capita!.");
     } else {
        printf("\nA carta 2 venceu no PIB per capita!.");
     }
     if (super_poder1 > super_poder2)
    {
        printf("\nA carta 1 venceu no super poder!.");
    } else {
        printf("\nA carta 2 venceu no super poder!.");
    }
    return 0;
}
