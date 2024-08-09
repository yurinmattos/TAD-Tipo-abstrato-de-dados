#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#define N 100

struct pilha
{
    int vet[N];
    int topo;
};

Pilha inicializar()
{

    Pilha p = (Pilha)malloc(sizeof(struct pilha));
    p->topo = 0;
    return p;
}

Pilha destruir(Pilha p)
{
    free(p);
    return NULL;
}

int pilhaCheia(Pilha p)
{
    if (p->topo == N)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int Push(Pilha p, int x)
{
    if (pilhaCheia(p))
    {
        return 0;
    }
    else
    {
        p->vet[p->topo] = x;
        p->topo++;
        return 1;
    }
}

int pilhaVazia(Pilha p)
{
    if (p->topo == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int Pop(Pilha p, int* x){
    if(pilhaVazia(p)){
        return 0;
    }
    else{
        p->topo--;
        *x = p->vet[p->topo];
        return 1;
    }
}

void imprimir(Pilha p){
    for (int i = 0; i < p->topo; i++)
    {
        printf("%d-", p->vet[i]);
    }
    printf("\n");
}