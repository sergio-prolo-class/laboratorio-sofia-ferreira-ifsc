#include <stdio.h>
#define MAX 100

void rotaciona(int tamanhoArranjo, float arranjo[], int rotacoes) {
    float arranjoAuxiliar[MAX];
    for(int i = 0; i < tamanhoArranjo; i++){
        arranjoAuxiliar[i] = arranjo[i];
    }
    rotacoes %= tamanhoArranjo;
    if(rotacoes < 0){
        rotacoes += tamanhoArranjo;
    }
    for(int i = 0; i < tamanhoArranjo; i++){
        arranjo[(i + rotacoes) % tamanhoArranjo] = arranjoAuxiliar[i];
    }
}

int main() {
    int qtdArranjo, qtdRotacoes;
    float arranjo[MAX];
    printf("Entre com o numero de elementos(max %d): ", MAX);
    scanf("%d", &qtdArranjo);
    printf("Entre com os elementos: ");
    for(int i = 0; i < qtdArranjo; i++){
        scanf("%f", &arranjo[i]);
    }
    printf("Entre com a rotacao: ");
    scanf("%d", &qtdRotacoes);
    rotaciona(qtdArranjo, arranjo, qtdRotacoes);
    printf("Arranjo rotacionado: ");
    for(int i = 0; i < qtdArranjo; i++){
        printf("%g ", arranjo[i]);
    }
    printf("\n");
    return 0;
}