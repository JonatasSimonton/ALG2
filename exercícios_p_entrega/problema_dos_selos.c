/*
* Programa: Problema dos Selos
* Descrição: Este programa determina o menor número de selos de 
  5 e 3 centavos que completam o valor dado de uma taxa.
* Autor: Jonatas Simonton Gouveia Lage
* Data: 24/8/2025
*
* Entrada:
* - Um valor (número inteiro) da taxa de correspondência em centavos.
*
* Saída:
* - Uma frase dizendo o valor da taxa selecionada e o número de selos de 5 e 3 centavos que formam este valor.
  Caso o valor submetido pelo usuário não atenda o programa, a saída é uma frase pedindo uma entrada válida.
*/

int main () {
    int min = 8;
    int tax;
    int best_count_5 = 0;
    int best_count_3 = 0;

    printf("Insira o valor da taxa de correspondência: \n");
    scanf("%d", &tax);

    if (tax < min) {
        printf("Taxa mínima da 8 centavos! \n");
        return 0;
    }

    int total_stamps = tax + 1;
    
    for (int stamps5 = 0; stamps5 <= tax / 5; stamps5++) {
        int remaining = tax - (stamps5 * 5);
        if (remaining % 3 == 0) {
            int stamps3 = remaining / 3;
            int total = stamps5 + stamps3;
            if (total < total_stamps) {
                total_stamps = total;
                best_count_5 = stamps5;
                best_count_3 = stamps3;
            }
        }
    }

    printf("Para a taxa de %d centavos serão utilizados: %d selo(s) de 5 centavos e %d selo(s) de 3 centavos! \n", tax, best_count_5, best_count_3);
    return 0;

}