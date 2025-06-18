#include <stdio.h>

int main() {
    int numero, soma, digito;
    printf("Insira um numero nao-negativo: ");
    scanf("%d", &numero);
    while (numero > 0)
    {
        digito = numero % 10;
        numero = numero / 10;
        soma += digito;
    }
    printf("Soma dos digitos: %d", soma);
    return 0;
}