/** Jogo de pedra, Papel e Tesoura */

#include <time.h>
#include <stdio.h>

int main () {
    sprand(time(NULL));
    int computador = (rand() % 3) + 1;
    printf("Selecione (1 - Pedra | 2 - Papel | 3 - Tesoura): ");

    return 0;
}
