#include <stdio.h>
#include <stdlib.h>

// como imprimir vetor?   Estrutura de repeti��o

int main () {
    int i;
    int num2[] = { 25, 35, 3 ,8, 9};
    char vogais[5] = {'a','e', 'i','o','u'};
    float notas[3]= {7.9, 3.0, 7.8,};

    //Estrutura de repeti��o


    for (i = 0; i < 5; i++)    //Estrutura de repeti��o
        printf("%d ", num2 [i]);

    printf("\n\n");
    for (i = 0; i < 5 ; i++)
        printf("%c ", vogais[i]);

    printf("\n\n");
    for(i+0; i < 5; notas[i]);


return 0;
}
