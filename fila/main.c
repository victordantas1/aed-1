#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main() {
    Fila* fila = cria_fila();
    insere(fila, 1);
    insere(fila, 2);
    insere(fila, 3);
    insere(fila, 4);
    insere(fila, 5);
    insere(fila, 6);
    imprime_fila(fila);
    pertence(fila, 90) ? printf("Sim, pertence a fila\n") : printf("FAZ O L\n");
    printf("Tamanho: %d\n", fila->tamanho);
    printf("Busca por posicao: %d\n", busca_por_posicao(fila, 4)->info);
    printf("Esta vazia: %d\n", esta_vazia(fila));
    printf("Atualiza info: %d\n", atualiza_elemento(fila, 1, 21));
    imprime_fila(fila);
}