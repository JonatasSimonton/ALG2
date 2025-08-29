/*
* Programa: Cálculo de Minutos entre Chegada e Saída
* Descrição: Este programa determina a diferença entre um horário de saída
  e chegada ambos dados pelo usuário e apresenta a sua diferença em minutos.
* Autor: Jonatas Simonton Gouveia Lage
* Data: 28/8/2025
*
* Entrada:
* - Dois valores (número inteiro) do horário de saída 
  e chegada, respectivamente, no formato 24 horas.
*
* Saída:
* - Uma frase apresentando a diferença em minutos dos dois horários 
  concedidos pelo usuário.
*/
#include <stdio.h>

int minutos(int hr, int min) {
    int total_minutes = hr * 60 + min;
    return total_minutes;
}

int diferenca(int time1, int time2) {
    int time_diff;
    if(time1 > time2) {
        time_diff = time1 - time2;
    }
    else {
        time_diff = time2 - time1;
    }
    return time_diff;
}

int main() {
    int hr_departure, min_departure, hr_arrival, min_arrival;
    printf("Horário de saída (no formato 24 horas): \n");
    scanf("%d:%d", &hr_departure, &min_departure);

    int total_departure = minutos(hr_departure, min_departure);


    printf("Horário de chegada (no formato 24 horas): \n");
    scanf("%d:%d", &hr_arrival, &min_arrival);

    int total_arrival = minutos(hr_arrival, min_arrival);

    int total_difference = diferenca(total_departure, total_arrival);
    printf("A diferença entre o horário de saída e de chegada é de: %d minutos\n", total_difference);
}
