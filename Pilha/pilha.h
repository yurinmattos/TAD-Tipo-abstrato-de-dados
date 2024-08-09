//#ifndef Tad_h
//#define Tad_h

typedef struct pilha *Pilha;

Pilha inicializar();
Pilha destruir();
int Push(Pilha p , int x);
int Pop(Pilha p, int* x);
void imprimir(Pilha p);

//#endif