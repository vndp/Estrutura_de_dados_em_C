#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct No{
    int dado;
    struct No * prox;

}No;

typedef struct Pilha{
    No *topo;

}Pilha;

void inicializar_pilha(Pilha *p){
    p-> topo = NULL;
}

//empilhamento

void empilha(int dado, Pilha * p){
    No *ptr = (No*) malloc(sizeof(No));
    if(ptr ==  NULL){
        printf("ERRO: alocacao do no\n");
        return;
    }else{
        ptr -> dado = dado;
        ptr -> prox = p-> topo;
        p->topo = ptr;
        }
}

//Desempilhar

int desempilhar(Pilha * p){
    No *ptr = p-> topo;
    int dado;
    if (ptr == NULL){
        printf("pilha vazia.\n");
        return;
    }else{
        p-> topo = ptr -> prox;
        ptr -> prox = NULL;
        free(ptr);
        return dado;
    }
}
void imprimir_pilha(Pilha * p){
    No *ptr = p-> topo;
    if(ptr == NULL){
        printf("Pilha vazia.\n");
        return;
    }else{
         while(ptr != NULL){
            printf("%d ", ptr->dado);
            ptr = ptr->prox;
     }
            printf("\n");
    }
}
int main(){
 Pilha *p1 = (Pilha*) malloc(sizeof(Pilha));
    if(p1 == NULL){
            printf("Erro de locação da pilha.\n");
            exit(0);
    } else{
        inicializar_pilha(p1);

        empilha(10,p1);
        empilha(20,p1);
        empilha(30,p1);

        imprimir_pilha(p1);

        printf("tentando desempilhar - reesultado: %d\n", desempilhar(p1));
        imprimir_pilha(p1);
        printf("tentando desempilhar - reesultado: %d\n", desempilhar(p1));
        imprimir_pilha(p1);
        printf("tentando desempilhar - reesultado: %d\n", desempilhar(p1));
        imprimir_pilha(p1);
    }
 }
