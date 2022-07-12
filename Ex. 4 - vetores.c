/*
Uma pequena loja de artesanato possui apenas um vendedor e comercializa 10 tipos de objetos
diferentes. O vendedor recebe um salário de R$1100,00 acrescido de 5% do valor total de suas
vendas. O valor unitário dos objetos deve ser informado e armazenado em um vetor; a quantidade
vendida de cada objeto deve ficar em outro vetor, mas na mesma posição. Crie um programa que
receba os preços e as quantidades vendidas, armazenando-os em seus respectivos vetores. Depois,
determine e mostre:
a) A quantidade vendida, valor unitário e valor total de cada objeto. Ao final, deverão ser mostrados
o valor total das vendas e o valor da comissão que será paga ao vendedor.
b) O valor do objeto mais vendido e sua posição no vetor (em caso de empates mostre todos
empatados).
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, maisvend = 0, quant[10];
    float ValorTot = 0, valorparcial, valor[10];

        for (i = 0; i < 10; i++){
            printf("Digite o valor unitário e a quantidade vendida de cada produto: ");
                scanf ("%f%d", &valor[i], &quant[i]);
        }

        // Letra a)
    for (i = 0; i < 10; i++){
        valorparcial = quant[i] * valor [i];
        printf("Quantidade vendida %d\tValor da unidade R$%.2f\tValor Total R$%.2f\n", quant[i], valor[i]);
        ValorTot += valorparcial;
    }
        printf ("Valor Total R$%.2f\n", ValorTot);
        printf("Comissão paga ao vendedor R$%.2f\n", ValorTot * 0.05);


        //Letra b)

        for (i = 0; i < 10; i++){
            if (quant[i] > maisvend)
            maisvend = quant[i];

        }
        for (i = 0; i < 10; i++){
            if (quant[i] == maisvend){
            printf("Posição %d\tValor R$%.2f\n", i, valor[i]);

            }
        }







return 0;
}
