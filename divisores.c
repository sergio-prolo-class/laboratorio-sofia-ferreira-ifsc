#include <stdio.h>

int main() {
    int numero;
    printf("Insira um inteiro positivo: ");
    scanf("%d", &numero);

    printf("Divisores: [1");
    int divisores = 1;

    for (int i = 2; i <= numero; i++)
    {
        if(numero % i == 0) {
            divisores++;
            printf(", %d", i);
        }
    }
    printf("]\n");

    printf("%s\n", (divisores == 2) ? "É primo" : "Nao é primo");
    return 0;
}