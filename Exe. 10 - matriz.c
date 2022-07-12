/*10) Dadas duas matrizes A e B 3 x 3, faça um programa para calcular a soma das matrizes e salvar em uma matriz C.
 Imprima as três matrizes.*/
 #include<stdio.h>
 #include<Stdlib.h>
 #include<time.h>

 int main(){
     int i, j, matA[3][3], matB[3][3], mat[3][3];

     srand(time(NULL));

     for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
                matA[i][j] = rand()% 100;

        }
     }

    for(i = 0; i < 3; i ++){
        for(j = 0; j < 3; j++){
            matB [i][j] = rand() %100;
        }
    }

    for (i=0; i< 3; i++){
        for(j = 0; j < 3; j++){
            mat[i][j] = matA[i][j] + matB[i][j];
        }
    }


    printf("\nMatriz A:\n");
        for(i=0; i<3; i++){
            for(j = 0; j< 3; j++)
                printf("%3d ", matA[i][j]);
            printf("\n");

        }

    printf("\nMatriz b:\n");
        for(i=0; i<3; i++){
            for(j = 0; j< 3; j++)
                printf("%3d ", matB[i][j]);
                printf("\n");

        }

    printf("\nMatriz C:\n");
        for(i=0; i<3; i++){
            for(j = 0; j< 3; j++)
                printf("%3d ", mat[i][j]);
                printf("\n");

        }


 return 0;
 }
