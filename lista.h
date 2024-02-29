
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

void insere_no_fim(Lista* lista, int info);

void insere_na_posicao(Lista* lista, int posicao, int info);

void imprime_lista(Lista* lista);

int pertence(Lista* lista, int info);

int tamanho(Lista* lista);
