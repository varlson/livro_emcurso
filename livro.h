#ifndef LIVRO_H
#define LIVRO_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct l L;

L* cria_liv();

void set_nome(L* l, char* nome);
void set_gen(L* l, char* gen);
void set_ano(L* l, char* ano);
void set_autor(L* l, char* autor);


char* get_nome(L* l);
char* get_gen(L* l);
char* get_ano(L* l);
char* get_autor(L* l);



#endif
