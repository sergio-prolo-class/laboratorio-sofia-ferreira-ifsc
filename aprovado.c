#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
    float prova1Part1, prova1Part2, recuperacao1, prova2, recuperacao2, media, frequencia;
    int conceito;
    bool aprovado;

    printf("Entre com P1.1, P1.2 e R1: ");
    scanf("%f %f %f", &prova1Part1, &prova1Part2, &recuperacao1);
    printf("Entre com P2 e R2: ");
    scanf("%f %f", &prova2, &recuperacao2);
    printf("Entre com a frequência (em %%): ");
    scanf("%f", &frequencia);

    media = (fmax(prova1Part1 + prova1Part2, recuperacao1) + fmax(prova2, recuperacao2)) / 2.0;
    printf("\nMedia: %.1f", media);
    conceito = round(media);
    printf("\nConceito final: %d", conceito);
    aprovado = media >= 6 && frequencia >= 75.0;
    printf("\nAprovado: %d", aprovado);

    return 0;
}