#include <stdio.h>
#include <stdbool.h>

bool bissexto(int ano) {
    return (ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0);
}

int numeroDias(int mes, int ano) {
    switch (mes) {
        case 1: 
            return 31;
        case 2:
            return bissexto(ano) ? 29 : 28;
        case 3: 
            return 31;
        case 4:
            return 30;
        case 5: 
            return 31;
        case 6:
            return 30;
        case 7: 
            return 31;
        case 8: 
            return 31;
        case 9:
            return 30;
        case 10: 
            return 31;
        case 11:
            return 30;
        case 12: 
            return 31;
        default:
            break;
    }
}

bool dataValida(int dia, int mes, int ano) {
    if (mes < 1 || mes > 12) {
        return false;
    }
    return 1 <= dia && dia <= numeroDias(mes, ano);
}

int diasDecorridos(int dia, int mes, int ano) {
    int num = dia;
    switch (mes) {
        case 12: num += numeroDias(11, ano);  
        case 11: num += numeroDias(10, ano);  
        case 10: num += numeroDias(9, ano);   
        case 9: num += numeroDias(8, ano);    
        case 8: num += numeroDias(7, ano);    
        case 7: num += numeroDias(6, ano);    
        case 6: num += numeroDias(5, ano);    
        case 5: num += numeroDias(4, ano);    
        case 4: num += numeroDias(3, ano);    
        case 3: num += numeroDias(2, ano);    
        case 2: num += numeroDias(1, ano);    
    }
    return num;
}

int main(){
    int dia, mes, ano;
    printf("Entre com a data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    if (!dataValida(dia, mes, ano)) {
        printf("Data invalida!\n");
        return 1;
    }
    printf("Dias decorridos: %d\n", diasDecorridos(dia, mes, ano));
    return 0;
}