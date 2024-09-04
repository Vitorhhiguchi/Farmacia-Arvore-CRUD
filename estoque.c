#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estoque.h"

struct medicamento {
    char nome[20];
    int codigo;
    float valor;
    int data[3];
};

struct arvore {
    Medicamento* m;
    Arvore* esquerda;
    Arvore* direita;
};