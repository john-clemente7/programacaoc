#include <stdio.h>
#include <stdlib.h>

    int main(){
        char estado[1];
        char cod_carta[3];
        char nome_cidade[50];
        int populacao;
        float area_cidade;
        float pib;
        int num_pontos_turisticos;

        printf("Carta 1: \n"); //Aqui sera o cadastro da primeira carta
        printf("Digite o Estado: \n");
        scanf("%s", &estado);
        printf("Digite o codigo da carta: \n");
        scanf("%s", &cod_carta);
        printf("Digite o nome da cidade: \n");
        scanf("%s", &nome_cidade);
        printf("Digite a populcao da cidade: \n");
        scanf("%d", &populacao);
        printf("Digite a Area(em km): \n");
        scanf("%f", &area_cidade);
        printf("Digite o PIB da cidade: \n");
        scanf("%f", &pib);
        printf("Digite o numero de pontos turisticos: \n");
        scanf("%d", &num_pontos_turisticos);

        system("clear");

        printf("Carta1:\nEstado: %s\nCódigo: %s \nNome da Cidade: %s\nPopulação: %d\nÁrea: %f\nPIB: %f \nNúmero de Pontos Turisticos: %d\n", estado, cod_carta, nome_cidade, populacao, area_cidade, pib, num_pontos_turisticos);

        return 0;
    }