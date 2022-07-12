/*1) Faça um programa que preencha um vetor de inteiros de tamanho 10 pedindo valores ao usuário.
Em seguida, calcule e salve num segundo vetor o quadrado de cada elemento do primeiro vetor. Por
fim, imprima os dois vetores.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, vetor[10], vetor2[10];

    for(i = 0; i < 10; i++){
        printf("Digite um valor %d: ", i);
            scanf("%d", &vetor[i]);
            }

    for (i=0; i<10; i++)
            vetor2[i] = vetor[i] * vetor[i];

    printf("\nVetor 1: ");{
        for (i=0; i<10; i++)
            printf("%d ", vetor[i]);
    }
      printf("\n\n");
    for(i=0; i<10; i++){
        printf("\nVetor 2: ");
            printf("%d", vetor2[i]);
    }








return 0;
}
