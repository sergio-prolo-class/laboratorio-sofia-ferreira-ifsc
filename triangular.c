#include <stdio.h>
#include <stdbool.h>

bool eh_triangular(int numero) 
{
    int contador = 1;
    int soma = 0;
    while (soma < numero)
    {
        soma = soma + contador;
        contador++;
    }
    return soma == numero;
}

int main() 
{
    int numero;
    printf("Entre com um inteiro positivo: ");
    scanf("%d", &numero);
    if(eh_triangular(numero)) {
        printf("E triangular.");
    } else {
        printf("Nao e triangular");
    }
    return 0;
}