#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main() {
    Lista* lista = cria_lista();
    insere_no_fim(lista, 1);
    insere_no_fim(lista, 2);
    insere_no_fim(lista, 3);
    insere_no_fim(lista, 4);
    insere_no_fim(lista, 5);
    insere_no_fim(lista, 6);
    insere_na_posicao(lista, 3, 10);
    insere_na_posicao(lista, 0, 20);
    imprime_lista(lista);
    pertence(lista, 90) ? printf("Sim, pertence a lista\n") : printf("FAZ O L\n");
    printf("Tamanho: %d\n", lista->tamanho);
    printf("Buscao por info: %d\n", busca_por_info(lista, 10));
    printf("Busca por posicao: %d\n", busca_por_posicao(lista, 4)->info);
    printf("Esta vazia: %d\n", esta_vazia(lista));
    printf("Atualiza info: %d\n", atualiza_elemento(lista, 1, 21));
    deleta_elemento(lista, 5);
    imprime_lista(lista);
}