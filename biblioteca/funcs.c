#include <stdio.h>
#include<stdlib.h>
#include "funcs.h"


void inicalizarLLS(ACERVO *livros)
{
    livros->nro_elem= 0;
}



//CAPTURA AS INFORMACOES DO ELEMENTO A SER ADICIONADO

void cadastro_livro(ACERVO *livros){

int tmp;

    if (livros->nro_elem >= X){
        tmp = 777;}else{

    int i, pos;

    for (pos = livros->nro_elem; (pos > 0) && (livros->A[pos-1].id > livros->A[pos].id); pos--)
    {
      
        livros->A[pos] = livros->A[pos-1];
    }
  

    livros->nro_elem++;
    tmp = pos;
    livros->A[pos].id = pos;
        }
if(tmp != 777){
printf("\nDigite o nome do titulo do Livro: ");
    scanf("%s",livros->A[tmp].titulo);

printf("Digite o nome do subtitulo do Livro: ");
    scanf("%s",livros->A[tmp].subtitulo);

printf("Digite o nome da autoria do Livro: ");
    scanf("%s",livros->A[tmp].autoria);

printf("Digite as informacoes da imprenta do Livro: ");
    scanf("%s",livros->A[tmp].imprenta);



    
        printf("\n\nLIVRO CADASTRADO COM SUCESSO\n\n");
        getchar();
    }else{
        printf("\n\nALGO DEU ERRADO :(\n\n");
        getchar();
    }
}


//FUNCAO PARA VER TODOS OS ITEMS CADASTRADOS

void mostra_todos(ACERVO *livros){
int pos;
for(pos=0; pos<livros->nro_elem; pos++){



    printf("\nDADOS DO LIVRO %d\n\n",livros->A[pos].id );

    printf("TITULO: %s\n",livros->A[pos].titulo);
    printf("SUBTITULO: %s\n",livros->A[pos].subtitulo );
    printf("AUTORIA: %s\n",livros->A[pos].autoria );
    printf("IMPRENTA: %s\n", livros->A[pos].imprenta );
    
    
   
    

}
}


