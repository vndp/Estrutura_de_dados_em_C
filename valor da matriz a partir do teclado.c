//Como imprimir valores na matriz apartir do teclado
#include<stdio.h>
#include<stdlib.h>

int main(){

int i, j, mat1[3][3] = {1,2,3,4,5,6,7,8,9};
char mat5[3][4] = {'a','b','c','d','e','g','h','i','j','k','l'}; //Matriz de caracteres



for(i=0; i<3; i++){          //Linha
    for(j = 0; j< 3; j++){    //Coluna
     mat1[i][j] = mat1 [i][j] * 5;


    }



}

for(i=0;i<3; i++){
    for(j=0; j<3; j++)
    printf("2%d ", mat1[i][j]); //Diz pro computador imprimir cada numero como se tivesse 2 casa decimais '2%d' (alinhar)
    printf("\n");

}

return 0;
}
