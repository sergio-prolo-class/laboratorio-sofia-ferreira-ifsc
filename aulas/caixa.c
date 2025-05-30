#include <stdio.h>

// Enviando e recebendo dados através do terminal, imprimindo um valor para apresentar ao usuário.
int main() {
    float altura, largura, profundidade;
    float area, volume; 

    printf("Entre com a altura:\n");
    scanf("%f", &altura);
    printf("Entre com a largura:\n");
    scanf("%f", &largura);
    printf("Entre com a profundidade:\n");
    scanf("%f", &profundidade);

    area = 2 * (altura*largura) + (altura*profundidade) + (largura*profundidade);
    volume = altura * largura * profundidade;

    printf("A area e %.2f m² e o volume e %.3f m³.\n", area, volume);
}

// Usando #define. Definição #define nomeVariável valorVariável
#define TAU 6.28319
int main() {
    printf("A constante do do círculo é %f\n", TAU);
    return 0;
}