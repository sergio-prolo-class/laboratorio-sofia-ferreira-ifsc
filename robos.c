#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Ponto;

void mover_ponto(Ponto *p, char direcao, float distancia) {
    switch (direcao)
    {
        case 'N':
            (*p).y = (*p).y + distancia;
            break;
        case 'S':
            (*p).y = (*p).y - distancia;
            break;
        case 'L':
            (*p).x = (*p).x + distancia;
            break;
        case 'O':
            (*p).x = (*p).x - distancia;
            break;
        default:
            break;
    }
}

float calcular_distancia(Ponto p1, Ponto p2) {
    return hypot(p2.x - p1.x, p2.y - p1.y);
}

int main() {
    char direcao;
    float distancia;
    Ponto robo1 = {0,0};
    Ponto robo2 = {10, 10};

    printf("Entre com os movimentos do robo 1: ");
    for (int i = 0; i < 3; i++)
    {
        scanf(" %c %f", &direcao, &distancia);
        mover_ponto(&robo1, direcao, distancia);
    }
    printf("Posicao final do robo 1: (%.2f, %.2f)", robo1.x, robo1.y);

    printf("\nEntre com os movimentos do robo 2: ");
    for (int i = 0; i < 3; i++)
    {
        scanf(" %c %f", &direcao, &distancia);
        mover_ponto(&robo2, direcao, distancia);
    }
    printf("Posicao final do robo 2: (%.2f, %.2f)", robo2.x, robo2.y);

    distancia = calcular_distancia(robo1, robo2);
    printf("\nDistancia entre os robos: %.5f", distancia);

    return 0;
}