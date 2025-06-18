#include <stdio.h>
#include <stdlib.h>

int main()
{
    int palpite, numGerado, tentativas = 0;
    numGerado = rand() % 100;
    do {
        printf("Entre com seu palpite (1 a 100): ");
        scanf("%d", &palpite);
        if(palpite > numGerado) {
            printf("O segredo e menor\n");
        } else {
            printf("O segredo e maior\n");
        }
        tentativas++;
    } while (palpite != numGerado);
    
    printf("Parabens, voce acertou em %d tentativas!", tentativas);
    return 0;
}