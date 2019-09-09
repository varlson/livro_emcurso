#include "livro.h"

struct l
{
  char nome[50];
  char autor[50];
  char gen[50];
  char ano[5];
};

L* cria_liv()
{
  L* l = malloc(sizeof(L));
  return l;
}


void set_nome(L* l, char* nome)
{
  strcpy(l->nome, nome);
}
void set_gen(L* l, char* gen)
{
  strcpy(l->gen, gen);
}
void set_ano(L* l, char* ano)
{
  strcpy(l->ano, ano);
}
void set_autor(L* l, char* autor)
{
  strcpy(l->autor, autor);
}


char* get_nome(L* l)
{
  return l->nome;
}
char* get_gen(L* l)
{
  return l->gen;
}
char* get_ano(L* l)
{
  return l->ano;
}
char* get_autor(L* l)
{
  return l->autor;
}
