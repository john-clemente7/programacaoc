    #include <stdio.h>

    int main() {
        char nome[100];

        printf("Digite o seu nome completo: ");
        scanf(" %[^\n]", nome); // Lê até encontrar uma nova linha

        printf("Seu nome completo: %s\n", nome);
        return 0;
    }