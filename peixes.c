#include <stdio.h>

int main() {
    float faixaMin, faixaMax, ph;
    int qtdMedicoes, qtdMedicoesFora;
    // Lê a faixa
    printf("Entre com a faixa de pH adequada: ");
    scanf("%f %f", &faixaMin, &faixaMax);
    // Lê quantas medições
    printf("Entre com o numero de medicoes: ");
    scanf("%d", &qtdMedicoes);
    // Lê as medições
    printf("Entre com as medicoes de pH: ");
    for (int i = qtdMedicoes; i > 0; i--)
    {
        scanf("%f", &ph);
        if(ph < faixaMin || ph > faixaMax) {
            qtdMedicoesFora++;
        }
    }
    // Escreve o resultado
    printf("Numero de medicoes fora da faixa: %d", qtdMedicoesFora);
    return 0;

}