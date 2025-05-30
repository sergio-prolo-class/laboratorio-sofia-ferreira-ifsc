#include <stdio.h>

int main() {
    float salario, vendas;
    int avalDesempenho;

    printf("Insira o valor total das vendas R$:");
    scanf("%f\n", &vendas);
    printf("Insira a nota da avaliacao de desempenho: ");
    scanf("%d\n", &avalDesempenho);

    if(vendas >= 10000.0) {
        salario = 2000.0 + (vendas * 0,07);
    } else {
        salario = 2000.0 + (vendas * 0,05);
    }

    if(avalDesempenho >= 8) {
        salario += 500;
    }

    printf("Salario R$: %.2f", salario);
    return 0;
}