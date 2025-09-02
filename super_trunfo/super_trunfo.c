#include <stdio.h>
#include <stdlib.h>

    int main(){
        char estado_1[1], estado_2[1];
        char cod_carta1[3], cod_carta2[3];
        char nome_cidade1[50], nome_cidade2[50];
        int populacao_1, populacao_2;
        float area_cidade1, area_cidade2;
        float pib_1, pib_2;
        int num_pontos_turisticos1, num_pontos_turisticos2;

        printf("Carta 1: \n"); //Aqui sera o cadastro da primeira carta
        printf("Digite o Estado: \n");
        scanf("%s", &estado_1);
        printf("Digite o codigo da carta: \n");
        scanf("%s", &cod_carta1);
        printf("Digite o nome da cidade: \n");
        scanf("%s", &nome_cidade1);
        printf("Digite a populcao da cidade: \n");
        scanf("%d", &populacao_1);
        printf("Digite a Area(em km): \n");
        scanf("%f", &area_cidade1);
        printf("Digite o PIB da cidade: \n");
        scanf("%f", &pib_1);
        printf("Digite o numero de pontos turisticos: \n");
        scanf("%d", &num_pontos_turisticos1);

        system("clear"); //limpar a tela

        printf("Carta 2: \n"); //Aqui sera o cadastro da segunda carta
        printf("Digite o Estado: \n");
        scanf("%s", &estado_2);
        printf("Digite o codigo da carta: \n");
        scanf("%s", &cod_carta2);
        printf("Digite o nome da cidade: \n");
        scanf("%s", &nome_cidade2);
        printf("Digite a populcao da cidade: \n");
        scanf("%d", &populacao_2);
        printf("Digite a Area(em km): \n");
        scanf("%f", &area_cidade2);
        printf("Digite o PIB da cidade: \n");
        scanf("%f", &pib_2);
        printf("Digite o numero de pontos turisticos: \n");
        scanf("%d", &num_pontos_turisticos2);

        system("clear");

        printf("Carta 1:\nEstado: %s\nCódigo: %s \nNome da Cidade: %s\nPopulação: %d\nÁrea: %f\nPIB: %f \nNúmero de Pontos Turisticos: %d\n", estado_1, cod_carta1, nome_cidade1, populacao_1, area_cidade1, pib_1, num_pontos_turisticos1);
        printf("\n");
        printf("Carta 2:\nEstado: %s\nCódigo: %s \nNome da Cidade: %s\nPopulação: %d\nÁrea: %f\nPIB: %f \nNúmero de Pontos Turisticos: %d\n", estado_2, cod_carta2, nome_cidade2, populacao_2, area_cidade2, pib_2, num_pontos_turisticos2);

        return 0;
    }