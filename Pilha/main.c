#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){

    int r;
    Pilha p = inicializar();

    Push(p, 10);
    Push(p, 22);
    Push(p, 1000);
    imprimir(p);

    Pop(p, &r);
    printf("\n%d\n", r);

    imprimir(p);

    return 0;
}