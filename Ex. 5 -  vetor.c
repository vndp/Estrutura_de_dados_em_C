#include < stdio.h>
#include <stdlib.h>

/*5) Faça um programa que receba a temperatura média de cada mês do ano, armazenando-as em um vetor.
 Ao final, mostre a maior e a menor temperatura do ano e em que mês ocorreram (mostrar o
mês por extenso: janeiro, fevereiro …). Desconsidere empates.*/

    int main(){
        int v,indiciMaior, indiceMenor;
        float menor = 99, menor, temp[12];


            for (v = 0; v < 12; v++){
            printf("Digite a temperatura média de cada mês: ", v +1);
                scanf ("%f",&temp[v]);//receber a temperatutra media de cada mês do ano

                }

            for(v = 0; v < 12; v++){
                if (menor > temp[v]){;//colocar um valor alto na variavel de menor depois vai trocar
                    menor = temp[v];
                    indiceMenor = v;
                }
                if(maior< temp[v]);{
                    maior = temp[v]; // esse for vai dizer qual foi a maior e qual foi a menor número da temperatura
                    indiciMaior
                }

            }

            printf("")





    return 0;
    }
