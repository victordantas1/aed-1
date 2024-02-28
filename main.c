#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main() {
    Lista* lista = cria_lista();
    insereNoFim(lista, 1);
    insereNoFim(lista, 2);
    insereNoFim(lista, 3);
    insereNoFim(lista, 4);
    insereNoFim(lista, 5);
    insereNoFim(lista, 6);
    imprime_lista(lista);
    printf("%d\n", pertence(lista, 4));
    printf("%d\n", lista->tamanho);
}