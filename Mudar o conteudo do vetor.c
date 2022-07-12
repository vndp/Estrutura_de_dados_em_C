#include <stdio.h>
#include<stdlib.h>
//

int main() {

    int i;
    int num2 [10];

    //Leitura do vetor//
    for(i = 0; i < 10; i ++){
    printf("Digite o elemnto da posição %d: ", i);
    scanf("%d", &num2[i]);

}

    for (i = 0; i< 10; i++)
        num2 [i] = num2 [i] * 3; //Pegar o valor salvo no vetor i e multiplicara por nesse caso 3, salvando o valor no vetor (alterando o msm)




        printf("\n\n");
    for (i = 0; i< 10; i++)
        printf("%d ", num2[i]);
    printf("\n\n");


return 0;
}
