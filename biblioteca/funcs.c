
#include <stdlib.h>
#include <stdio.h>
#include "funcs.h"
#include <string.h>
#include<stdbool.h> 


//ATRIBUI UM VALOR PARA O PRIMEIRO ELEMENTO PARA QUE O MESMO NAO POSSUA LIXO NA MEMORIA 
void inicalizar(ACERVO *livros){
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
        printf("DADOS DO LIVRO %d\n\n",livros->A[pos].id );
        printf("TITULO: %s\n",livros->A[pos].titulo);
        printf("SUBTITULO: %s\n",livros->A[pos].subtitulo );
        printf("AUTORIA: %s\n",livros->A[pos].autoria );
        printf("IMPRENTA: %s\n\n", livros->A[pos].imprenta );
        
    
}
}
//FUNCAO PARA VER ITEM ESPECIFICO
void mostra_livro(ACERVO *livros, int pos){
    printf("\nDADOS DO LIVRO ID: %d\n",livros->A[pos].id);
    printf("TITULO: %s\n",livros->A[pos].titulo);
    printf("SUBTITULO: %s\n",livros->A[pos].subtitulo );
    printf("AUTORIA: %s\n",livros->A[pos].autoria );
    printf("IMPRENTA: %s\n\n", livros->A[pos].imprenta );
    
    
}
//RETORNA SE O VALOR DO INPUT EXISTE OU NAO
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

//INSERE ITEM NA ULTIMA POSICAO PARA SOBRESCREVELO POSTERIORMENTE
int deleta_livro(ACERVO *livros){
    int i,pos,tmp,res; 

    printf(" Digite o numero do ID desejado:");    
    scanf("%d", &pos);

    tmp =  busca_binaria(livros, pos);

    if (tmp == -1){
            printf("\nOcorreu um ERRO, talvez o valor desejado nao exista na lista de IDs \n\n");
            getchar();                
}   else{
            mostra_livro(livros,tmp);

            printf("\nDeseja realmente remover este livro do acervo?\n");
            printf(" 0 - SIM\n");
            printf(" 1 - NAO\n");

            scanf("%d",&res);
            getchar();  
            if (res == 0){
                for (i = tmp; i < livros->nro_elem; i++){

                    livros->A[i] = livros->A[i+1];

                    }

            livros->nro_elem--;
            
            system("clear");

            printf("\nLIVRO REMOVIDO COM SUCESSO\n\n");                         
    return 1;}else{
                  return 0;
                    }
}}

int busca_sequencial(ACERVO *livros, char *busc)
{

    int i;
    int j = -1;

    char *psResultado;

    for (i = 0; i < livros->nro_elem ; i++)
    {
        psResultado = strstr(livros->A[i].titulo, busc);
       
    
        if (psResultado != NULL)
        {
            mostra_livro(livros, i);
            j++;
        }
    }
    getchar();

    if (j == -1)
    {
        printf("\n\nNENHUM ITEM ENCONTRADO\n\n");

         return j;

    }
    else
    {
        j++;
        printf("\n\nFORAM ENCONTRADOS %d ITEN(S) CORRESPONDENTE(S) A BUSCA: '%s'\n\n", j,busc);
        return i;
    }

   
}