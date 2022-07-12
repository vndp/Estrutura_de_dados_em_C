#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int **mat, i, j;

mat = malloc(4 * sizeof(int*));

for(i=0; i <4; i++){
    mat = malloc(3* sizeof(int))
}

srand(TIME(null));

for(i=0;i<4;i++){
    (j=0;j<4;j++)
        mat [i][j] = rand() %100
   
}

for(i = 0; i < 4; i++){
    (j = 0; j < 4;j++)
    printf("%d", mat[i][j]);
    printf(\n);
}





return 0;
}
