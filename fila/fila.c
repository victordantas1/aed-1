#include <stdlib.h>
#include <stdio.h>
#include "fila.h"

//Cria lista
Fila* cria_fila() {
    Fila* fila = malloc(sizeof(Fila));
    fila->tamanho = 0;
    fila->prim = NULL;
    return fila;
}

void insere(Fila* fila, int info) {
    FilaNo* p;
    FilaNo* novo = malloc(sizeof(FilaNo));
    novo->info = info;
    if(fila->tamanho == 0) fila->prim = novo, novo->proxNo = NULL;
    else { 
        for(p = fila->prim; p != NULL; p = p->proxNo) {
            if(p->proxNo == NULL) p->proxNo = novo, novo->proxNo = NULL;
        }
    }
    fila->tamanho += 1;
}

void imprime_fila(Fila* fila) {
    printf("FILA: \n");
    FilaNo* p;
    for(p = fila->prim; p != NULL; p=p->proxNo) {
        printf("info = %d\n", p->info);
    }
}

int pertence(Fila* fila, int info) {
    FilaNo* p;
    for(p = fila->prim; p != NULL; p = p->proxNo) {
        if(info == p->info) return 1;
    }
    return 0;
}

FilaNo* busca_por_posicao(Fila* fila, int posicao) {
    if(posicao == 0) return fila->prim;
    else {
        int percorrePosicao = 0;
        FilaNo* p;
        for(p = fila->prim; percorrePosicao < posicao; p = p->proxNo) percorrePosicao++;
        return p;
    }
}

int tamanho(Fila* fila) {
    int tamanho = 0;
    FilaNo* p;
    for(p = fila->prim; p != NULL; p = p->proxNo) tamanho++;
    fila->tamanho = tamanho;
    return tamanho;
}

int esta_vazia(Fila* fila) {
    return fila->tamanho == 0 ? 1 : 0; 
}

int atualiza_elemento(Fila* fila, int posicao, int info) {
    FilaNo* no = busca_por_posicao(fila, posicao);
    no->info = info;
    return no->info;
}

FilaNo* deleta_elemento(Fila* fila, int posicao) {
    if(posicao > fila->tamanho - 1) {
        printf("Posicao invalida\n");
    }
    else {
        FilaNo* noTmp;
        int percorrePosicao = 0;
        FilaNo* p;
        for(p = fila->prim; percorrePosicao < posicao - 1; p = p->proxNo) percorrePosicao++;
        noTmp = p->proxNo;
        p->proxNo = noTmp->proxNo;
        return noTmp;
    }
}
