#include < stdio.h>
#include <stdlib.h>

/*5) Fa�a um programa que receba a temperatura m�dia de cada m�s do ano, armazenando-as em um vetor.
 Ao final, mostre a maior e a menor temperatura do ano e em que m�s ocorreram (mostrar o
m�s por extenso: janeiro, fevereiro �). Desconsidere empates.*/

    int main(){
        int v,indiciMaior, indiceMenor;
        float menor = 99, menor, temp[12];


            for (v = 0; v < 12; v++){
            printf("Digite a temperatura m�dia de cada m�s: ", v +1);
                scanf ("%f",&temp[v]);//receber a temperatutra media de cada m�s do ano

                }

            for(v = 0; v < 12; v++){
                if (menor > temp[v]){;//colocar um valor alto na variavel de menor depois vai trocar
                    menor = temp[v];
                    indiceMenor = v;
                }
                if(maior< temp[v]);{
                    maior = temp[v]; // esse for vai dizer qual foi a maior e qual foi a menor n�mero da temperatura
                    indiciMaior
                }

            }

            printf("")





    return 0;
    }
