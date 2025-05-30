#include <stdio.h>

int main() {
    int idade, tempoServico;
    printf("Insira sua idade: ");
    scanf("%d", &idade);
    printf("Insira o tempo de servico: ");
    scanf("%d", &tempoServico);
    if (idade >= 65 || tempoServico >= 30 || (idade >= 60 && tempoServico >= 25)) {
        printf("Pode se aposentar :)");
    } else {
        printf("Nao pode se aprosentar :(");
    }
    return 0;
}