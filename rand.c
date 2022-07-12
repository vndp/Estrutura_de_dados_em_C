// Gerando numeros aleatórios (rand e srand)//

#include <stdio.h>
#include<stdlib.h>
#include <time.h> // BIBLIOTECA DE HORA



int main() {

    int i;
    int num2 [10];

    srand(time ( NULL));



    for(i = 0; i < 10; i ++)
    num2[i] = rand() %10; // essa função rand vai gerar numeros e salvar na posição i


        printf("\n\n");
    for (i = 0; i< 10; i++)
        printf("%d ", num2[i]);
    printf("\n\n");


return 0;
}
