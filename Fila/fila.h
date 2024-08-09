
typedef struct fila *Fila;

Fila inicializar();

Fila destruir(Fila f);

int inserir(Fila f, int x);

int remover(Fila f);

void imprimir(Fila f);