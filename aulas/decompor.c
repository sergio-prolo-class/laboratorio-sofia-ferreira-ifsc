#include <stdio.h>
#include <stdlib.h>

char decompor(float numero, int *ptr_parte_int, float *ptr_parte_frac) {
    char sinal;
    if(numero > 0) {
        sinal = '+';
    } else if(numero < 0) {
        sinal = '-';
    } else {
        sinal = ' ';
    }
    *ptr_parte_frac = numero - (int) numero;
    *ptr_parte_int = (int) numero;
    return sinal;
}

int main() {
    float numero, fracionada;
    int inteiro;
    printf("Insira um número real: ");
    scanf("%f", &numero);
    char sinal = decompor(numero, &inteiro, &fracionada);
    printf("\nSinal: %c\n", sinal);
    printf("Parte inteira: %d\n", inteiro);
    printf("Parte fracionaria: %f\n", fracionada);

    return EXIT_SUCCESS;
}