#include <stdlib.h>
#include <stdio.h>
#include "fila.h"

int main(){

    int opc, valor;
    Fila f = inicializar();

    while(opc != 4){
        printf("1-Inserir na fila\n2-Remover da fila\n3-Imprimir fila\nEscolha:");
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            printf("\nValor:");
            scanf("%d", &valor);
            inserir(f, valor);
            break;
        case 2:
            remover(f);
            break;
        case 3:
            imprimir(f);
        default:
            break;
        }
    }
    return 0;
}