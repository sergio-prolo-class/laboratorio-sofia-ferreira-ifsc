#include <stdio.h>

int main() {
    float numero1, numero2, resultado;
    char operacao;

    printf("Insira a expressão: ");
    scanf("%f %c %f", &numero1, &numero2, &operacao);

    switch (operacao)
    {
        case '+' :
            resultado = numero1 + numero2;
            break;
        case '-' :
            resultado = numero1 - numero2;
            break;
        case '*' :
            resultado = numero1 * numero2;
            break;
        case '/' :
            if(numero2 == 0) {
                printf("Erro: divisão por zero\n");
                return 1;
            }
            resultado = numero1 / numero2;
        break;
        default:
            printf("Operação inválida!");
            break;
    }

    printf("Resultado da operação: %.2f", resultado);

    return 0;
}