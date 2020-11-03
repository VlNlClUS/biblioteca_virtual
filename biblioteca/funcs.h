
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
} ACERVO;

// int ordena_elemento(ACERVO *livros, LIVRO *titulo, LIVRO *subtitulo, LIVRO *autoria, LIVRO *imprenta);
void cadastro_livro(ACERVO *livros);
void inicalizarLLS(ACERVO *livros);
void mostra_todos(ACERVO *livros);