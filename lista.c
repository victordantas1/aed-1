#include <stdlib.h>
#include <stdio.h>
#include "lista.h"

//Cria lista
Lista* cria_lista() {
    Lista* lista = malloc(sizeof(Lista));
    lista->tamanho = 0;
    lista->prim = NULL;
    return lista;
}

//Insere no inicio da lista
void insere(Lista* lista, int info) {
    ListaNo* novo = malloc(sizeof(ListaNo));
    novo->info = info;
    // proximo recebe o prim
    novo->proxNo = lista->prim;
    // primeiro recebe novo
    lista->prim = novo;
    lista->tamanho += 1;
}

void insere_no_fim(Lista* lista, int info) {
    if(lista->prim == NULL) insere(lista, info);
    else {
        ListaNo* p;
        ListaNo* novo = malloc(sizeof(ListaNo));
        novo->info = info;
        for(p = lista->prim; p != NULL; p = p->proxNo) {
            if(p->proxNo == NULL) p->proxNo = novo, novo->proxNo = NULL;
        }
        lista->tamanho += 1;
    }
}

void insere_na_posicao(Lista* lista, int posicao, int info) {
    int percorrePosicao = 0;
    ListaNo* novo = malloc(sizeof(ListaNo));
    ListaNo* p;
    novo->info = info;
    for(p = lista->prim; percorrePosicao < posicao; p = p->proxNo) {
        percorrePosicao++;
    }
    novo->proxNo = p->proxNo;
    p->proxNo = novo;
}
    

void imprime_lista(Lista* lista) {
    ListaNo* p;
    for(p = lista->prim; p != NULL; p=p->proxNo) {
        printf("info = %d\n", p->info);
    }
}

int pertence(Lista* lista, int info) {
    ListaNo* p;
    for(p = lista->prim; p != NULL; p = p->proxNo) {
        if(info == p->info) return 1;
    }
    return 0;
}

int tamanho(Lista* lista) {
    int tamanho = 0;
    ListaNo* p;
    for(p = lista->prim; p != NULL; p = p->proxNo) tamanho++;
    lista->tamanho = tamanho;
    return tamanho;
}
