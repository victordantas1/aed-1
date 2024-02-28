
typedef struct listano ListaNo;
typedef struct lista Lista;

struct lista {
    ListaNo* prim;
    int tamanho;
};

struct listano { 
    int info; 
    ListaNo* proxNo;
};

Lista* cria_lista();

void insere(Lista* lista, int info);

void insereNoFim(Lista* lista, int info);

void imprime_lista(Lista* lista);

int pertence(Lista* lista, int info);

int tamanho(Lista* lista);
