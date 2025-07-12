#include <stdio.h>

typedef struct {
    int hora, minuto;
} Horario;
typedef struct {
    Horario inicio, termino;
} Evento;

int converterMinutos(Horario horario);
Horario converterHorario(int minutos);
Horario duracaoEvento(Evento evento);

int main() {
    Horario duracao;
    Evento evento;

    printf("Insira o horario de inicio: ");
    scanf("%d:%d", &evento.inicio.hora, &evento.inicio.minuto);
    printf("Insira o horario de termino: ");
    scanf("%d:%d", &evento.termino.hora, &evento.termino.minuto);
    duracao = duracaoEvento(evento);
    printf("Duracao do evento: %02d:%02d", duracao.hora, duracao.minuto);
    return 0;
}

int converterMinutos(Horario horario) {
    int minutos;
    minutos = horario.minuto + (60 * horario.hora);
    return minutos;
}
Horario converterHorario(int minutos) {
    Horario horario;
    horario.hora = minutos / 60;
    horario.minuto = minutos % 60;
    return horario;
}
Horario duracaoEvento(Evento evento) {
    int restante;
    restante = converterMinutos(evento.termino) - converterMinutos(evento.inicio);
    if(restante <= 0) {
        restante += 24 * 60;
    }
    return converterHorario(restante);
}