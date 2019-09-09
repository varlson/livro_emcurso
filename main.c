#include "livro.h"

int main(int argc, char const *argv[]) {

  char nome[50];
  char autor[50];
  char gen[50];
  char ano[5];
  bool teste = false;
  int size, pos, opx;
  printf("Tamanho: ");
  scanf("%d", &size);
  setbuf(stdin, NULL);

  L** l = malloc(size * sizeof(L*));

  for(int i=0; i<size;i++)
  {
    l[i] = cria_liv();
    printf("Nome do Livro: ");
    scanf("%[^\n]s",nome);
    setbuf(stdin, NULL);
    set_nome(l[i], nome);

    printf("Autor do Livro: ");
    scanf("%[^\n]s",autor);
    setbuf(stdin, NULL);
    set_autor(l[i], autor);

    printf("Genero do Livro: ");
    scanf("%[^\n]s",gen);
    setbuf(stdin, NULL);
    set_gen(l[i], gen);

    printf("Ano do Livro: ");
    scanf("%[^\n]s",ano);
    setbuf(stdin, NULL);
    set_ano(l[i], ano);

  }


  do
  {
    system("clear");
    do
  {
    system("clear");
    printf("1 => Ver Livros Cadastrados\n 2 => Remover Livro\n3 => Buscar Livro\n4 => Deletar e Sair\n\n");
    scanf("%d", &opx);
    setbuf(stdin, NULL);

    switch(opx)
    {
      case 1:
      for(int i=0; i<size;i++)
      {
        printf("Nome %s\nAutor: %s\nGenero: %s\nAno: %s\n\n",l[i]->nome, l[i]->autor, l[i]->gen, l[i]->ano);
      }
      break;

      case 2:
      for(int i=0; i<size;i++)
      {
        printf("%d - %s\n", l[i]->nome);
      }
      printf("Entre com numero de livro que deseja remover: ");
      scanf("%d", &pos);
      setbuf(stdin, NULL);
      for(int i=pos-1; i<size;i++)
      {
        l[i] = l[i+1];
      }
      printf("\n\t\tRemoxao feita co sucesso\n\n");
      size--;
      break;

      case 3:
      printf("Nome do Livro: ");
      scanf("%s", nome);
      for(int i=0; i<size;i++)
      {
        if(strncmp(l[i]->nome, nome, strlen(nome)))
        {
          continue;
        }else
        {
          printf("Nome %s\nAutor: %s\nGenero: %s\nAno: %s\n\n",l[i]->nome, l[i]->autor, l[i]->gen, l[i]->ano);
          break;
          teste = true;
        }
      }
      if(teste != true)
      {
        printf("Livro nao encontrado!\n");
      }
      break;

      case 4:
      for(int i=0; i<size;i++)
      {
        free(l[i]);
      }
      free(l);
      break;

      default:
      printf("Opxao Ivalida\n\n");
    }

    printf("\n\t\tSair s/n ?");
  }while(getchar() != 's');

  return 0;
}
