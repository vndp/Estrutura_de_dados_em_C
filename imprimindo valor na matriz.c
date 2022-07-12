//Como imprimir valores na matriz
#include<stdio.h>
#include<stdlib.h>

int main(){

int i, j, mat1[3][3] = {1,2,3,4,5,6,7,8,9}; //matriz de inteiros
char mat5[3][4] = {'a','b','c','d','e','g','h','i','j','k','l'}; //Matriz de caracteres

for(i=0;i<3; i++){
    for(j=0; j<3; j++)
    printf("%d ", mat1[i][j]);


}

return 0;
}
