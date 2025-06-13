#include <stdio.h>

int main() {
    float horas, pagamento;
    printf("Entre com as horas trabalhadas: ");
    scanf("%f", &horas);
    pagamento = 50.0 * horas;
    if(pagamento > 8.0) {
        pagamento += 25.0 * (horas - 8);
    }
    printf("Pagamento: %.2f\n", pagamento);
    return 0;
}