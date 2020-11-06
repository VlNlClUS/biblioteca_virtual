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
    
    livros->nro_elem= 0;
    livros->count_id= 0;
}

//CAPTURA AS INFORMACOES DO ELEMENTO A SER ADICIONADO

void cadastro_livro(ACERVO *livros){

int pos;

pos = livros->nro_elem;
    
livros->A[pos].id = livros->count_id+1000;
livros->nro_elem++;
livros->count_id++;
   
    
        
if(livros->nro_elem <= X){
printf("\nDigite o nome do titulo do Livro: ");
    scanf("%s",livros->A[pos].titulo);

printf("Digite o nome do subtitulo do Livro: ");
    scanf("%s",livros->A[pos].subtitulo);

printf("Digite o nome da autoria do Livro: ");
    scanf("%s",livros->A[pos].autoria);

printf("Digite as informacoes da imprenta do Livro: ");
    scanf("%s",livros->A[pos].imprenta);


    
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

printf("\nELEMENTO %d", livros->nro_elem);

    printf("DADOS DO LIVRO %d\n\n",livros->A[pos].id );

    printf("TITULO: %s\n",livros->A[pos].titulo);
    printf("SUBTITULO: %s\n",livros->A[pos].subtitulo );
    printf("AUTORIA: %s\n",livros->A[pos].autoria );
    printf("IMPRENTA: %s\n\n", livros->A[pos].imprenta );
    
    
   
    

}
}

void mostra_livro(ACERVO *livros, int pos){



    printf("\nDADOS DO LIVRO \n\n");
    printf("ID: %d\n",livros->A[pos].id );
    printf("TITULO: %s\n",livros->A[pos].titulo);
    printf("SUBTITULO: %s\n",livros->A[pos].subtitulo );
    printf("AUTORIA: %s\n",livros->A[pos].autoria );
    printf("IMPRENTA: %s\n\n", livros->A[pos].imprenta );
    
    


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

void deleta_livro(ACERVO *livros, int pos){

        livros->A[pos].id = X + 1000;
     int i; 

for (i = pos; livros->A[i].id > livros->A[i++].id; i++){



}
livros->nro_elem--;
livros->A[pos].id = -1;

}