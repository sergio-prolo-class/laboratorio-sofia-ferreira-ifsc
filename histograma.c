#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int dado1, dado2, numRolangens, soma;
    float hist[11] = {0};

    printf("Entre com o numero de rolagens: ");
    scanf("%d", &numRolangens);

    for (int i = 0; i < numRolangens; i++)
    {
        dado1 = 1 + (rand() % 6);
        dado2 = 1 + (rand() % 6);
        soma = dado1 + dado2;
        hist[soma-2] += 1;
    }

    for (int i = 0; i < 11; i++)
    {
        printf("%d : %.2f%%\n", i+2, hist[i]/numRolangens*100.0);
    }
    return 0;   
}