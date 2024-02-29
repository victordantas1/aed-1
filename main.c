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
    imprime_lista(lista);
    printf("%d\n", pertence(lista, 4));
    printf("%d\n", lista->tamanho);
}