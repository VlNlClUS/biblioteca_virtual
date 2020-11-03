#include <stdio.h>
#include<stdlib.h>
#include "funcs.h"



int main ()
{
ACERVO livros;

inicalizarLLS(&livros);
  int y = 0, opcao, tmp;



    do
    {
        system("clear"); 
        printf("\nEntre com a opcao:\n");
        printf(" 1 - Inserir Novo Livro\n");
        printf(" 2 - Inserir elemento\n");
        printf(" 3 - Consultar posicao do valor\n");
        printf(" 4 - Ve Tudo\n");
        printf(" 5 - Sair\n");
        scanf("%d", &opcao);
        getchar();

        switch (opcao)
        {
     
        case 1:
        cadastro_livro(&livros);
            printf("Digite <enter> para voltar");
            getchar();
            break;
        case 2:
            printf("Digite <enter> para voltar");
            getchar();
            break;
        case 3:
         printf("Digite <enter> para voltar");
            getchar();
            break;
        case 4:
        mostra_todos(&livros);
            printf("Digite <enter> para voltar");
            getchar();
            break;
        case 5:
            printf("\nSolicitou a opcao - sair!\n");
            exit(0);
            break;
        default:
            printf("ATENCAO - Opcao invalida! \n");
            getchar();
        }
    } while (y == 0);



//liberando o espaço de memória alocado
  
  getchar();
  return 0;
}


