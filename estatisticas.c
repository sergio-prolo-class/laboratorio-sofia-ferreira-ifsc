#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 100

typedef struct {
    float media, minimo, maximo;
} Estatisticas;

Estatisticas calcula_estatisticas(int n, float a[]) {
    Estatisticas stats = {0, INFINITY, -INFINITY};
    for (int i = 0; i < n; i++)
    {
        stats.media += a[i];
        if(a[i] < stats.minimo) {
            stats.minimo = a[i];
        } 
        if(a[i] > stats.maximo) {
            stats.maximo = a[i];
        }
    }
    stats.media /= n;
    return stats;
}

int main() {
    int numero;
    float elementos[MAX];

    do {
        printf("Entre com o numero de elementos (maximo %d): ", MAX);
        scanf("%d", &numero);
    } while (numero <= 0 || numero > MAX);
    
    printf("Entre com os elementos: ");
    for (int i = 0; i < numero; i++)
    {
        scanf("%f", &elementos[i]);
    }
    
    Estatisticas a = calcula_estatisticas(numero, elementos);
    printf("Media: %g\n", a.media);
    printf("Minimo: %g\n", a.minimo);
    printf("Maximo: %g\n", a.maximo);
}