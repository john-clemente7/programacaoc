#include <stdio.h>
 
int main() {
    int idade;
    char nome[20];

    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    printf("Sua idade é: %d \n", idade);
    printf("Digite seu nome: \n");
    scanf("%s", &nome);
    printf("Seu nome é: %s\n", nome);
    return 0;
}