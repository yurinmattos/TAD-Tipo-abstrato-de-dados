#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#define TAM 100

struct fila
{
    int vet[TAM];
    int frente;
    int tras;
};

Fila inicializar()
{

    Fila f = (Fila)malloc(sizeof(struct fila));

    f->frente = 0;
    f->tras = -1;
    return f;
}

Fila destruir(Fila f)
{
    free(f);
    return NULL;
}

int filaCheia(Fila f){
    if(f->tras == TAM-1){
        printf("\nFila Cheia\n");
        return 1;
    }
    else{
        return 0;
    }
}

int inserir(Fila f, int x)
{
    if (filaCheia(f))
    {
        return 0;
    }
    else
    {
        f->tras++;
        f->vet[f->tras] = x;
        return 1;
    }
}

int filaVazia(Fila f){
    if(f->frente > f->tras){
        return 1;
    }
    else{
        return 0;
    }
}

int remover(Fila f){
    if(filaVazia(f)){
        printf("\nFila Vazia\n");
        return 0;
    }
    else{
        printf("\n%d - removido\n", f->vet[f->frente]);
        f->vet[f->frente] = -1;
        f->frente++;
        return 1;
    }
}

void imprimir(Fila f){
    if(filaVazia(f)){
        printf("\nFila Vazia\n");
    }
    else{
        printf("\n");
        for(int i = f->frente; i < f->tras+1; i++){
            printf("%d-", f->vet[i]);
        }
        printf("\n");
    }
}