#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*Crie um programa que preencha uma matriz 5x10 com números inteiros. Em seguida faça:
a) some cada uma das linhas armazenando o resultado em um vetor;
b) some cada uma das colunas armazenando o resultado em um vetor;
c) Imprima a matriz e os dois vetores identificando qual é a soma das linhas e qual é a soma das colunas.*/

int main(){

    int i, j, soma;
    int mat[5][10],v1[5], v2[10];

    srand(time(NULL));


    for(i = 0; i < 5; i++);{
        for(j = 0; j < 10;j++){

            mat[i][j] = rand() % 100;

        }
    }
        for(i = 0; i< 5; i++){
            soma = 0;
            for(j = 0; j < 10; j++){

                soma += mat[i][j];
            }

            v1[i]= soma;
        }

        for(j = 0; j < 10; j++){
                soma = 0;
            for(i = 0; i < 5; i++){

                soma += mat[i][j];
            }

            v2[j] = soma;
        }

        printf("\nMatriz:\n");
        for(i = 0; i < 5; i++){
            for(j = 0; j < 10; j++){
                printf("%2d ", mat[i][j]);
            }
            printf("\n");
        }
            printf("\n\nSoma das linhas:\n");
            for(i = 0;i < 5; i++){
                printf("Linha %d: %d\n", i,v1[i]);
            }

            printf("\n\nSoma das colunas\n");
            for(j = 0;j < 10; j++){
                printf("Coluna %d: %d\n",j, v2[j]);
            }



return 0;
}

