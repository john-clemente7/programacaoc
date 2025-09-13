#include <stdio.h>

int main(){

int num1, num2;
int soma, mult, divi, subt;

printf("Digite um numero:");
scanf("%d", &num1);

printf("\n");

printf("Digite um numero:");
scanf("%d", &num2);

soma = num1 + num2;

subt = num1 - num2;

mult = num1 * num2;

divi = num1 / num2;

printf("A soma é: %d\n", soma);
printf("A subtração é: %d\n", subt);
printf("A multiplicação é: %d\n", mult);
printf("A divisão é: %d\n", divi);

return 0;

}