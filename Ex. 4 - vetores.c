/*
Uma pequena loja de artesanato possui apenas um vendedor e comercializa 10 tipos de objetos
diferentes. O vendedor recebe um sal�rio de R$1100,00 acrescido de 5% do valor total de suas
vendas. O valor unit�rio dos objetos deve ser informado e armazenado em um vetor; a quantidade
vendida de cada objeto deve ficar em outro vetor, mas na mesma posi��o. Crie um programa que
receba os pre�os e as quantidades vendidas, armazenando-os em seus respectivos vetores. Depois,
determine e mostre:
a) A quantidade vendida, valor unit�rio e valor total de cada objeto. Ao final, dever�o ser mostrados
o valor total das vendas e o valor da comiss�o que ser� paga ao vendedor.
b) O valor do objeto mais vendido e sua posi��o no vetor (em caso de empates mostre todos
empatados).
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, maisvend = 0, quant[10];
    float ValorTot = 0, valorparcial, valor[10];

        for (i = 0; i < 10; i++){
            printf("Digite o valor unit�rio e a quantidade vendida de cada produto: ");
                scanf ("%f%d", &valor[i], &quant[i]);
        }

        // Letra a)
    for (i = 0; i < 10; i++){
        valorparcial = quant[i] * valor [i];
        printf("Quantidade vendida %d\tValor da unidade R$%.2f\tValor Total R$%.2f\n", quant[i], valor[i]);
        ValorTot += valorparcial;
    }
        printf ("Valor Total R$%.2f\n", ValorTot);
        printf("Comiss�o paga ao vendedor R$%.2f\n", ValorTot * 0.05);


        //Letra b)

        for (i = 0; i < 10; i++){
            if (quant[i] > maisvend)
            maisvend = quant[i];

        }
        for (i = 0; i < 10; i++){
            if (quant[i] == maisvend){
            printf("Posi��o %d\tValor R$%.2f\n", i, valor[i]);

            }
        }







return 0;
}
