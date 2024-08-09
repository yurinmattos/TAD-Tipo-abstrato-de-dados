#include <stdlib.h>
#include <stdio.h>
#include "filaGenerica.h"
#define TAM 100

struct pessoa{
    int tipo;
    void* info;
    struct pessoa* prox;
};


void imprimirLista(Pessoa p){
    int i =0;
    while(p != NULL){
        printf("Pos:%d  Tipo:%d\n", i, p->tipo);
        p = p->prox;
    }
}

Pessoa inserir(Pessoa p, int tipo, void* info){
    while(p != NULL){
        p = p->prox;
    }
    Pessoa aux = (Pessoa) malloc(sizeof(struct pessoa));
    aux->tipo = tipo;
    aux->info = info;
    aux->prox = NULL;
    return aux;
}

