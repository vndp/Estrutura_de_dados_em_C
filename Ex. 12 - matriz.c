/*12) Faça um programa que imprima na tela a diagonal secundária de uma matriz 7 x 7.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i, j, mat[7][7];

    srand(time(NULL));

    for(i=0;i<7;i++){
        for(j=0;j<7;j++){

            mat[i][j] = rand() % 100;
        }
    }

     for(i=0;i<7;i++){
        for(j=0;j<7;j++){
            printf("%2d ", mat[i][j]);
        }
        printf("\n");
     }

     printf("\n\n");
    for(i = 0; i < 7; i++){
        for(j = 0; j < 7; j++){
            if(i==j)
                printf("%d", mat[i][j]);
            else
                printf("   ");

        }
        printf("\n");
        }
//diagonal principal
    printf("\nDiagonal principal: \n");
    for(i=0; i<7; i++){
            printf("%d ", mat[i][i]);

    }
        printf("\n");
    printf("\nDiagonal secundária: \n");
        for(i=0; i < 7; i++){
            printf("%d ", mat[i][7 - 1 - i]);
        }

return 0;
}
