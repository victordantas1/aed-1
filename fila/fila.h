typedef struct filano FilaNo;
typedef struct fila Fila;

struct fila {
    FilaNo* prim;
    FilaNo* ult;
    int tamanho;
};

struct filano { 
    int info; 
    FilaNo* proxNo;
    FilaNo* antNo;
};

Fila* cria_fila();

void insere(Fila* fila, int info);

void imprime_fila(Fila* fila);

int pertence(Fila* fila, int info);

FilaNo* busca_por_posicao(Fila* fila, int posicao);

int tamanho(Fila* fila);

int esta_vazia(Fila* fila);

int atualiza_elemento(Fila* fila, int posicao, int info);

FilaNo* deleta_elemento(Fila* fila, int posicao);
