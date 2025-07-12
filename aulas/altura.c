#include <stdio.h>
#include <math.h>

#define POLEGADA_POR_PE 12
#define CM_POR_POLEGADA 2.54

// Lê a altura em pés + polegadas e escreve na tela a altura correspondente em metros com duas casas decimais.
int main() {
    // Variáveis
    int pesUsuario, polegadasUsuario;
    float metrosUsuario;

    // Início
    printf("Insira sua altura em pés + polegadas (ex.: 5 10):\n ");
    scanf("%d%d", &pesUsuario, &polegadasUsuario);
    polegadasUsuario = pesUsuario * POLEGADA_POR_PE + polegadasUsuario;
    metrosUsuario = polegadasUsuario * CM_POR_POLEGADA / 100;
    printf("Altura em metros: %.2f\n", metrosUsuario);

    // Fim
    return 0;
}