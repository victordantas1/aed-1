#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main() {
    Lista_sala* lista = cria_lista_sala();

    Andar andar;
    andar.area_andar = 72;
    andar.numero_andar = 1;
    andar.qtd_salas = 2;
    andar.salas = lista;

    Sala sala1, sala2;
    sala1.numero_sala = 1;
    sala1.area_sala = 36;
    sala1.area_mesas = 4;
    sala1.total_mesas = 4;

    sala2.numero_sala = 2;
    sala2.area_sala = 36;
    sala2.area_mesas = 4;
    sala2.total_mesas = 4;

    
    insere_sala_no_fim(lista, sala1);
    insere_sala_no_fim(lista, sala2);
    imprime_lista_sala(andar.salas);
   
}