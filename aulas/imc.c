#include <stdio.h>

int main() {
    float imc, altura, peso;

    printf("Insira seu peso (kg): ");
    scanf("%f", &peso);
    printf("Insira sua altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("IMC: %f kg/m²\n", imc);

    printf("Classificação: ");
    if (imc < 18.5) {
        printf("Magreza");
    } else if (imc < 25.0) {
        printf("Normal");
    } else if (imc < 30.0) {
        printf("Sobrepeso");
    } else {
        printf("Obesidade");
    }

    return 0;
}