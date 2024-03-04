typedef struct listano ListaNo;
typedef struct lista Lista;
// Sala
typedef struct lista_sala Lista_sala;
typedef struct sala Sala;
typedef struct sala_no Sala_no;
// Andar
typedef struct andar Andar;
// Predio
typedef struct predio Predio;
// Analise
typedef struct analise Analise;
// Cliente
typedef struct cliente Cliente;

// Definicao salas
struct sala {
    int numero_sala;
    int area_sala;
    int area_mesas;
    int total_mesas;
};

struct lista_sala {
    Sala_no* prim;
    int tamanho;
};

struct sala_no {
    Sala sala;
    Sala_no* prox_sala; 
};

// Definicao andares
struct andar {
    int numero_andar;
    int qtd_salas;
    int area_andar;
    Lista_sala* salas;
};

// Definicao predios
struct predio {
    int numero_pedio;
    int andares;
    int numero_de_salas;
};

struct lista {
    ListaNo* prim;
    int tamanho;
};

struct listano { 
    int info; 
    ListaNo* proxNo;
};

// Lista default
Lista* cria_lista();

void insere(Lista* lista, int info);

void insere_no_fim(Lista* lista, int info);

void insere_na_posicao(Lista* lista, int posicao, int info);

void imprime_lista(Lista* lista);

int pertence(Lista* lista, int info);

ListaNo* busca_por_posicao(Lista* lista, int posicao);

int busca_por_info(Lista* lista, int info);

int tamanho(Lista* lista);

int esta_vazia(Lista* lista);

int atualiza_elemento(Lista* lista, int posicao, int info);

void deleta_elemento(Lista* lista, int posicao);

// Lista sala
Lista_sala* cria_lista_sala();

void insere_sala(Lista_sala* lista, Sala sala);

void insere_sala_no_fim(Lista_sala* lista, Sala sala);

void insere_sala_na_posicao(Lista_sala* lista, int posicao, Sala sala);

void imprime_lista_sala(Lista_sala* lista);

int sala_pertence(Lista_sala* lista, Sala sala);

Sala_no* busca_sala_por_posicao(Lista_sala* lista, int posicao);

int busca_por_sala(Lista_sala* lista, Sala sala);

int tamanho_lista_sala(Lista_sala* lista);

int lista_sala_esta_vazia(Lista_sala* lista);

int atualiza_sala(Lista_sala* lista, int posicao, int info);

void deleta_sala(Lista_sala* lista, int posicao);
