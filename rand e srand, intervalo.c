// Gerando numeros aleatórios (rand e srand) a parit de um intervalo//

#include <stdio.h>
#include<stdlib.h>
#include <time.h> // BIBLIOTECA DE HORA



int main() {

    int i;
    int num2 [50]; //aumentei o tamanho do vetor, até 50 posições

    srand(time ( NULL));


    for(i = 0; i < 50; i ++) //alterar o valor do tmh do vetor
    num2[i] = rand() % 100; // resto de 100


        printf("\n\n");
    for (i = 0; i< 50; i++)
        printf("%d ", num2[i]);
    printf("\n\n");


return 0;
}
