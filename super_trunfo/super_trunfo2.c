#include <stdio.h>

#define MAX_CIDADES 2  // Definindo o número de cartas (duas cartas)

typedef struct {
    char estado;  // Estado (A a H)
    char codigo[5];  // Código da carta (ex: A01)
    char cidade[50];  // Nome da cidade
    int populacao;  // População da cidade
    float area;  // Área da cidade em km²
    float pib;  // PIB da cidade
    int pontos_turisticos;  // Número de pontos turísticos
} Carta;

void lerCarta(Carta *carta) {
    // Lê o estado
    printf("Digite o estado (A a H): ");
    scanf(" %c", &carta->estado);

    // Lê o código da carta
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", carta->codigo);

    // Lê o nome da cidade
    printf("Digite o nome da cidade: ");
    getchar();  // Para capturar a quebra de linha deixada pelo scanf anterior
    fgets(carta->cidade, sizeof(carta->cidade), stdin);
    carta->cidade[strcspn(carta->cidade, "\n")] = '\0';  // Remover o caractere '\n' da cidade

    // Lê a população
    printf("Digite a população da cidade: ");
    scanf("%d", &carta->populacao);

    // Lê a área
    printf("Digite a área da cidade em km²: ");
    scanf("%f", &carta->area);

    // Lê o PIB
    printf("Digite o PIB da cidade: ");
    scanf("%f", &carta->pib);

    // Lê o número de pontos turísticos
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta->pontos_turisticos);
}

void exibirCarta(const Carta *carta) {
    printf("\nInformações da Carta:\n");
    printf("Estado: %c\n", carta->estado);
    printf("Código da Carta: %s\n", carta->codigo);
    printf("Nome da Cidade: %s\n", carta->cidade);
    printf("População: %d habitantes\n", carta->populacao);
    printf("Área: %.2f km²\n", carta->area);
    printf("PIB: R$ %.2f\n", carta->pib);
    printf("Pontos Turísticos: %d\n", carta->pontos_turisticos);
}

int main() {
    Carta cartas[MAX_CIDADES];  // Array para armazenar as cartas

    for (int i = 0; i < MAX_CIDADES; i++) {
        printf("\n-- Carta %d --\n", i + 1);
        lerCarta(&cartas[i]);  // Lê os dados da carta
        exibirCarta(&cartas[i]);  // Exibe as informações da carta
    }

    return 0;
}
