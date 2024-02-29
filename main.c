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
    printf("%d\n", lista->tamanho);
    printf("%d\n", busca_por_posicao(lista, 0));
    printf("%d\n", busca_por_info(lista, 10));
    printf("%d\n", esta_vazia(lista));
}