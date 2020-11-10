//VALOR RESPONSAVEL POR DELIMITAR A TAMANHO  DO VETOR DE STRUCTS 
#define X 100


//STRUCT QUE POSSUI INFORMACOES RELACIONADAS AO ITEM
	typedef struct
	{
	
		char titulo[50];
		char subtitulo[50];
		char autoria[50];
		char imprenta[50];
		int id;

	} LIVRO;

//STRUCT RESPONSAVEL POR TORNAR A PRIMEIRA STRUCT UM VETOR E POR ORGANIZAR INFORMACOES GERAIS 
	typedef struct
	{
		LIVRO A[X];
		int nro_elem;
		int count_id;
	} ACERVO;

	ACERVO livros;

//PROTOTIPOS DAS FUNCOES 
	void cadastro_livro(ACERVO *livros);
	void inicalizar(ACERVO *livros);
	void mostra_todos(ACERVO *livros);
	int busca_binaria(ACERVO *livros, int ch);
	void mostra_livro(ACERVO *livros, int pos);
	int deleta_livro(ACERVO *livros);
	int busca_sequencial(ACERVO *livros, char *busc);