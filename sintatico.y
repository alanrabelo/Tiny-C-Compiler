%{

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define tamanho 100000
extern int yylex();
extern char* yytext;
extern char AUX12[tamanho], AUX13[tamanho];
extern int ajuda_sint;
extern int ajuda_lex;
extern char vets[tamanho];
extern char vets2[tamanho];
extern int coluna;
extern int lines;
int tam;
int LIN = 0;
char str9[tamanho];


%}

/* declare tokens */
%token FLOAT
%token INT
%token CHAR
%token RETURN
%token IDENTIFIER
%token SEMICOLON
%token COMMA
%token ASSIGN
%token NUM_INTEGER
%token NUM_DECIMAL
%token CHARACTER

%start S

%%

S: programa { printf("SUCCESSFUL COMPILATION."); return 1;}
;


programa: declaracoes
;

declaracoes: declaracoes declaracao_de_variaveis
| declaracoes atribuicao
|
;
//ok

declaracao_de_variaveis: declaracao_de_variaveis tipo ddv1
| tipo ddv1
;

atribuicao : IDENTIFIER ASSIGN valor SEMICOLON
;

ddv1: IDENTIFIER SEMICOLON
;

ddv1: IDENTIFIER COMMA ddv1
;


valor: NUM_INTEGER
	| NUM_DECIMAL
	| CHARACTER
;


tipo: INT
	| CHAR
	| FLOAT
;
//ok

%%

yyerror(char *s)
{
	if(ajuda_sint == 0){

	    tam = coluna - (strlen(AUX12)-1);
		LIN = lines;
		strcpy(str9, AUX12);
		ajuda_sint = 1;
	}
	/*else{

		LIN++;
		ajuda_sint = 3;
	}*/
}

int main(int argc, char **argv)
{
	char str34[tamanho];
	int indice = 0;
	yyparse();
	while(yylex());
		//percorre o léxico
//printf("%s     %s\n\n\n", vets2,str);
	while(vets2[indice] != '\0'){

		if(vets2[indice] == '\n')
			break;

		str34[indice] = vets2[indice];
		indice++;
	}
	str34[indice] = '\0';

	if(ajuda_sint == 1){

		printf("error:syntax:%d:%d: %s\n%s\n%*s",LIN,tam,str9,str34,tam, "^");
	}
}
