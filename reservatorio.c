#include <stdio.h>

int main() {
    int qtdChuva, qtdChuvaTotal = 0;
    for (int i = 1; i <= 7; i++)
    {
        printf("Entre com a quantidade de chuva no dia %i em litros: ", i);
        scanf("%d", &qtdChuva);
        qtdChuvaTotal += qtdChuva;

        if(qtdChuvaTotal >= 400){
            printf("O reservatorio transbordou no dia %i", i);
            break;
        }
        if(i == 7) {
            printf("O reservatorio não transbordou. Espaco livre: %d litros.", 400-qtdChuvaTotal);
        }
    }
    return 0;
}