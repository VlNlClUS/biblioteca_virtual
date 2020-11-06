
#define X 100



typedef struct
{
  
 	char titulo[50];
	char subtitulo[50];
	char autoria[50];
	char imprenta[50];
	int id;

} LIVRO;

typedef struct
{
    LIVRO A[X];
    int nro_elem;
	int count_id;
} ACERVO;

 ACERVO livros;

// int ordena_elemento(ACERVO *livros, LIVRO *titulo, LIVRO *subtitulo, LIVRO *autoria, LIVRO *imprenta);
void cadastro_livro(ACERVO *livros);
void inicalizar(ACERVO *livros);
void mostra_todos(ACERVO *livros);
int busca_binaria(ACERVO *livros, int ch);
void mostra_livro(ACERVO *livros, int pos);
void deleta_livro(ACERVO *livros, int pos);