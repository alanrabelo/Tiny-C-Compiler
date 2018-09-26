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
%token SOMA
%token SUBTRACAO
%token MULTIPLICACAO
%token DIVISAO
%token ABRE_PARENTESE
%token FECHA_PARENTESE
%token MODULO
%token EXPONENCIACAO
%token AND
%token OR
%token NOT

%start S

%%

S: programa { printf("SUCCESSFUL COMPILATION."); return 1;}
;

programa: declaracoes
;

declaracoes: declaracoes declaracao_de_variaveis
| declaracoes atribuicao
| declaracoes expression_with_semicolon
|
;
//ok

declaracao_de_variaveis: declaracao_de_variaveis tipo ddv1
| tipo ddv1
;

atribuicao : IDENTIFIER ASSIGN valor SEMICOLON
| IDENTIFIER ASSIGN expression SEMICOLON
| IDENTIFIER ASSIGN logical_expression SEMICOLON
;

ddv1: IDENTIFIER SEMICOLON
;

ddv1: IDENTIFIER COMMA ddv1
;

// GRAMÁTICA PARA EXPRESSÕES

expression_with_semicolon : expression SEMICOLON
;

expression : T SOMA expression
| T SUBTRACAO expression
| T
;

T : M MULTIPLICACAO T
| M DIVISAO T
| M
;

M : E MODULO M
| E
;

E : F EXPONENCIACAO E
| F
;

F : ABRE_PARENTESE expression FECHA_PARENTESE
| valor
| IDENTIFIER
;

logical_expression_with_semicolon : logical_expression SEMICOLON
;

logical_expression : logical_expression AND logical_not
| logical_expression OR logical_not
| logical_not
| ABRE_PARENTESE logical_expression FECHA_PARENTESE
;

logical_not : NOT any_expression
| any_expression
;

any_expression : expression
| logical_expression
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
