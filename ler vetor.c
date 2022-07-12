#include <stdio.h>
#include<stdlib.h>


int main() {

    int i;
    int num2 [5];

    //Leitura do vetor//
    for(i = 0; i < 5; i ++){
    printf("Digite o elemnto da posição %d: ", i);
    scanf("%d", &num2[i]);

}
        printf("\n\n");
    for (i = 0; i< 5; i++)
        printf("%d ", num2[i]);
    printf("\n\n");


return 0;
}
