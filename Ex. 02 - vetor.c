/*Faça um programa que some o conteúdo de dois vetores de tamanho 25 e armazene o resultado
em um terceiro vetor. Imprima os três vetores na tela.
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, vetor1[25], vetor2[25], vetor3[25];

    for(i=0; i<25; i++){
        printf("Digite o primeiro valor %d: ", i);
            scanf("%d", &vetor1[i]);
    }
        printf("\n\n");
    for(i=0; i<25; i++){
        printf("Digite o valor do segundo vetor %d: ", i);
            scanf("%d", &vetor2[i]);
    }

    for(i=0; i<25; i++){
            vetor3[i] = vetor1[i] + vetor2[i];
    }

         printf("\nResultado: ");
    for(i=0; i<25; i++){
        printf("%d ", vetor3[i]);

    }












return 0;
}
