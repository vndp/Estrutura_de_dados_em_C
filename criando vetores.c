#include <stdio.h>
#include<stdlib.h>

// Criando vetores//

int main()  {

    int idade;    //Dessa forma os identificadores armazenam o valor de somente uma variavel.
    char sexo;     // no entanto com criação dos vetores podem armazenar diferente valores em uma unica variavel.
    float n1;

                   // vetores n inteiros

    int num1[10];                //essa variavel vai armazenar até 10 valores.
    int num2[] = {1,5,9,46,78};    // apesar de não ter dado um valor a váriavel o pragrama vai entender que o tamnho do vetor é o numero de números dentro das chaves
    int num3 [5] = {4,6,8};    // o pragrama sempre vai priorizar o que estiver dentro das chaves, então complementara os numeros faltantes com 0
    int num4 [5] = {2,6,9,3,6,9};  // Nesse caso é desconsiderado o tamanho do conjunto, pois a prioridade e sempre o tamanho do vetor, logo o último número será perdido
    int num5 [5] = {0}; // o pragrama complementara os valores que faltam com 0

                        //vetores para caracteres

    char letras[100];
    char vogais [5] = { 'a', 'b', 'c','d','e'}; // os caracteres devem estar dentro de apas simple para o programa não o indentificar como uma variavel.

                        // vetores para notas



    float notas [3] = {3.0,9.8,4.3};

return 0;
}

