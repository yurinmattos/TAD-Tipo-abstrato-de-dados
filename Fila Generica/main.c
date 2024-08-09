#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "filaGenerica.h"

typedef struct aluno
{
    int matricula;
    int anoIngresso;
    char nome[50];
    char curso[30];
}Aluno;

typedef struct professor{
    int matricula[12];
    float salaria;
    char nome[50];
}Professor;

int main(){

    Pessoa* p;
    Aluno* a;

    int opc = 0;
    a = (Aluno*) malloc(sizeof(Aluno));

    while(opc != 6){
        printf("1-Inserir\n2-Imprimir");
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            scanf("%c, %d, %c, %d", a->nome, a->matricula, a->curso, a->anoIngresso);
            p = inserir(p, 2, a, 1);
            p = p->prox;
            break;
        case 2:
            imprimirLista(p);    
            break;
        
        default:
            break;
        }
    }
    
    

    imprimirLista(p);


return 0;
}