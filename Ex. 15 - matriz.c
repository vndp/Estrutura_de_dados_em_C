/* Exercício 15) Dada uma matriz 4 x 4 faça um programa que diga se ela é um quadrado mágico ou não. */


#include <stdio.h>
#include <stdlib.h>
#define tam 4

int main() {

    int i, j, soma =0,falhou = 0, total, mat[tam][tam] = {10, 23, 45, 84, 45, 15, 12,1, 2, 9, 41, 3,52, 64, 24, 12,32};

    for(i=0; i < tam; i++){
    soma += mat[i][i];
    printf("\nDiagonal principal: %d\n", soma);

    total = soma;

    for (i = 0; i < tam; i++){
    soma += mat[i][tam - 1 - i];

    printf("\nDiagonal secundaria: %d\n", soma);

    }

        if (total != soma){
            printf ("Diagonal secundaria diferente: %d\n");
            falhou = 1;
        }
    for(i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            soma += mat[i][j];
    printf("\nLinha %d: %d\n", i, soma);

        if (total!= soma){
        printf("\nA linha %d e diferente!\n", i);
        falhou = 1;
        }
        }

    for(j = 0; j < tam; j++){
        for (i = 0; i < tam; i++)
            soma += mat[i][j];
    printf("\nColuna %d: %d\n", j, soma);

        if (total!= soma){
        printf("\nA coluna %d e diferente!\n", j);
        falhou = 1;
        }
        if (falhou == 0)
            printf("\n Nao e um quadrado magico. \n");

        else
            printf("\n E um quadrado magico");




    }


    }
    }


return 0;
}
