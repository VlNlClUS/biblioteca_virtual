#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include "funcs.h"
#include <string.h>

void inicalizar(ACERVO *livros)
{
    
    livros->nro_elem= 1;
    livros->prox= 1;
}

//CAPTURA AS INFORMACOES DO ELEMENTO A SER ADICIONADO

void cadastro_livro(ACERVO *livros){

int tmp;



    if (livros->nro_elem >= X){
        tmp = 777;}else{

    int i, pos;

for(i=1; livros->A[i].id>0; i++ ){

}



    for (pos = livros->nro_elem; (pos > 0) && (livros->A[pos-1].id > i); pos--)
    {
      
        livros->A[pos] = livros->A[pos-1];
    }
  
livros->A[pos].id = i;
livros->nro_elem++;

    tmp = pos;
    
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
for(pos=1; pos<livros->nro_elem; pos++){

printf("\nELEMENTO %d", livros->nro_elem);

    printf("DADOS DO LIVRO %d\n\n",livros->A[pos].id );

    printf("TITULO: %s\n",livros->A[pos].titulo);
    printf("SUBTITULO: %s\n",livros->A[pos].subtitulo );
    printf("AUTORIA: %s\n",livros->A[pos].autoria );
    printf("IMPRENTA: %s\n\n", livros->A[pos].imprenta );
    
    
   
    

}
}


//retorna a posição do elemento na LLS
int busca_binaria(ACERVO *livros, int ch)
{
    int esq, dir, meio;
    esq = 0;
    dir = livros->nro_elem - 1;
    while (esq <= dir)
    {
        meio = ((esq + dir) / 2);
        if (livros->A[meio].id == ch)
            return meio;
        else
        {
            if (livros->A[meio].id < ch)
                esq = meio + 1;
            else
                dir = meio - 1;
        }
    }

    return -1;
}