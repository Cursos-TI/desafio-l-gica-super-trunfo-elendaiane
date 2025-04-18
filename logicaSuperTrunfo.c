#include <stdio.h>
#include<stdio.h>

int main(){

//Desafio lógica do Super Trunfo (Novato)

//Variaveis
    char estado1[10], estado2[10], codigocarta1[10], codigocarta2[10],
    cidade1[20], cidade2[20];
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;

    // Cadastrando as cartas
    printf("\t*CADASTRAR CARTAS*\n");

    // Cadastrando carta 1
    printf("\nCadastro da Carta 1:\n");
    printf("Digite o Estado da Carta 1: ");
    scanf("%s", &estado1);
    printf("Digite o Código da Carta 1: ");
    scanf("%s", &codigocarta1);
    printf("Digite o nome da cidade da Carta 1: ");
    scanf("%s", &cidade1);
    printf("Digite a população da cidade da Carta 1: ");
    scanf("%d", &populacao1);
    printf("Digite a área (em km²) da cidade da Carta 1: ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões de R$) da cidade da Carta 1: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade da Carta 1: ");
    scanf("%d", &pontos_turisticos1);
    
    // Cadastrando Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o Estado da Carta 2: ");
    scanf("%s", &estado2);
    printf("Digite o Código da Carta 2: ");
    scanf("%s", &codigocarta2);
    printf("Digite o nome da cidade da Carta 2: ");
    scanf("%s", &cidade2);
    printf("Digite a população da cidade da Carta 2: ");
    scanf("%d", &populacao2);
    printf("Digite a área (em km²) da cidade da Carta 2: ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões de R$) da cidade da Carta 2: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade da Carta 2: ");
    scanf("%d", &pontos_turisticos2);

    // Exibindo as informações das cartas
    printf("\n\t*** INFORMACÕES DAS CARTAS ***\n");
    printf("\nCarta 1:\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\n", estado1, codigocarta1, cidade1);
    printf("População: %d\nÁrea: %.2f\nPIB: %.2f bilhões de reais\n", populacao1, area1, pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional %.2f hab/km²\n", populacao1 / area1);
    printf("PIB per Capita: %.2f reais\n", pib1 * 1000000000/ populacao1);
    printf("\nCarta 2:\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\n", estado2, codigocarta2, cidade2);
    printf("População: %d\nÁrea: %.2f\nPIB: %.2f bilhões de reais\n", populacao2, area2, pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional %.2f hab/km²\n", populacao2 / area2);
    printf("PIB per Capita: %.2f reais\n", pib2 * 1000000000 / populacao2);

   
   
    // Comparando um atributo escolhido das cartas

    printf("\n\tRESULTADO DA COMPARAÇÃO E CARTA VENCEDORA (Atributo escolhido: POPULAÇÃO):\n\n");
    printf("Carta 1: %s (%s): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2: %s (%s): %d\n", cidade2, estado2, populacao2);
    if (populacao1 > populacao2) {
        printf("Resultado: A CARTA 1 (%s) É A VENCEDORA!\n", cidade1);
    } else {
        printf("Resultado: A CARTA 2 (%s) É A VENCEDORA!\n", cidade2);
    }

    return 0;

}
