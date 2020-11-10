
#include <stdlib.h>
#include <stdio.h>
#include "funcs.h"
#include <string.h>

int main ()
{
    inicalizar(&livros);

    int y = 0, opcao,opcao1,opcao2, z,p,tmp,res;

    do
    {
        z=0;

        system("clear"); 

        printf("\nEntre com a opcao:\n");
        printf(" 1 - Inserir Novo Livro\n");
        printf(" 2 - Remover Livro\n");
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
                do {

                    system("clear"); 

                    printf("\nEntre com a opcao:\n");
                    printf(" 1 - Pesquisa por ID (busca binaria)\n");
                    printf(" 2 - Pesquisa por Titulo (busca sequencial)\n");
                    printf(" 3 - voltar\n");
                    
                    scanf("%d", &opcao1);

                    getchar();

                    switch (opcao1){

                        case 1:
                                printf(" Digite o numero do ID desejado para consulta:");    
                                scanf("%d", &p);

                                tmp =  busca_binaria(&livros, p);

                                if (tmp == -1){
                                    printf("Ocorreu um ERRO, talvez o valor desejado nao exista na lista de IDs \n"); //Ou está vazia na lista
                                    getchar();
                                }
                                else{
                                    mostra_livro(&livros,tmp);

                                    printf("\nDeseja realmente remover este livro do acervo?\n");
                                    printf(" 0 - SIM\n");
                                    printf(" 1 - NAO\n");

                                    scanf("%d",&res);

                                    if (res == 0){
                                        deleta_livro(&livros,tmp);

                                        z=1;

                                        getchar();

                                        break;

                                    }else{
                                        printf("Digite <enter> para voltar");

                                        getchar();

                                        break;

                                    }
                                    getchar();
                                }
                            
                                
                        case 2:
                                printf("Digite <enter> para voltar");

                                getchar();

                                break;

                        case 3:
                                z=1;
                                    
                                break;

                        default:
                                printf("ATENCAO - Opcao invalida! \n");

                                getchar();

                            }
                }while (z == 0);

                printf("Digite <enter> para voltar");

                getchar();

                break;

            case 3:
                    do {

                        system("clear"); 

                        printf("\nEntre com a opcao:\n");
                        printf(" 1 - Pesquisa por ID (busca binaria)\n");
                        printf(" 2 - Pesquisa por Titulo (busca sequencial)\n");
                        printf(" 3 - voltar\n");

                        scanf("%d", &opcao1);

                        getchar();

                        switch (opcao1){
                            case 1:
                                    printf(" Digite o numero do ID desejado para consulta:");

                                    scanf("%d", &p);

                                    tmp =  busca_binaria(&livros, p);

                                    if (tmp == -1){
                                        printf("Ocorreu um ERRO, talvez o valor desejado nao exista na lista de IDs \n");
                                        getchar();
                                    }
                                    else{
                                        printf("\nposicao do valor %d na lista = %d \n", p, tmp);

                                        mostra_livro(&livros,tmp);

                                        getchar();
                                    }
                                    printf("Digite <enter> para voltar");

                                    getchar();

                                    break;

                            case 2:
                                    printf("Digite <enter> para voltar");

                                    getchar();

                                    break;

                            case 3:
                                    z=1;
                                
                                    break;

                            default:
                                    printf("ATENCAO - Opcao invalida! \n");

                                    getchar();
                            }
                    }while (z == 0);
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
    }while (y == 0);

    getchar();

    return 0;
}


