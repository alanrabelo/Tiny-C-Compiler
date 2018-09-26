%{

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include "lib.h"
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

%union {
	int i;
	float f;
	char *s;
}

/* declare tokens */
%token <s> FLOAT
%token <s> INT
%token <s> CHAR
%token <s> RETURN
%token <s> IDENTIFIER
%token <s> SEMICOLON
%token <s> COMMA
%token <s> ASSIGN
%token <i> NUM_INTEGER
%token <f> NUM_DECIMAL
%token <s> CHARACTER
%token <s> SOMA
%token <s> SUBTRACAO
%token <s> MULTIPLICACAO
%token <s> DIVISAO
%token <s> ABRE_PARENTESE
%token <s> FECHA_PARENTESE
%token <s> MODULO
%token <s> EXPONENCIACAO
%token <s> AND
%token <s> OR
%token <s> NOT

%type <f> expression T M E F

%start S

%%

S: programa { printf("SUCCESSFUL."); return 1;}
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

atribuicao : IDENTIFIER ASSIGN NUM_INTEGER SEMICOLON
| IDENTIFIER ASSIGN NUM_DECIMAL SEMICOLON
| IDENTIFIER ASSIGN CHARACTER SEMICOLON
| IDENTIFIER ASSIGN expression SEMICOLON
| IDENTIFIER ASSIGN logical_expression SEMICOLON
;

ddv1: IDENTIFIER SEMICOLON
;

ddv1: IDENTIFIER COMMA ddv1
;

// GRAMÁTICA PARA EXPRESSÕES

expression_with_semicolon : expression_with_semicolon expression SEMICOLON
|
;

expression : T SOMA expression { $$ = $1 + $3; printOp($$);}
| T SUBTRACAO expression { $$ = $1 - $3; }
| T { $$ = $1; }
;

T : M MULTIPLICACAO T {$$ = $1 * $3; }
| M DIVISAO T {$$ = $1 / $3; }
| M {$$ = $1; }
;

M : E MODULO M
| E {$$ = $1;}
;

E : F EXPONENCIACAO E
| F {$$ = $1; }
;

F : ABRE_PARENTESE expression FECHA_PARENTESE {$$ = $2; }
| NUM_INTEGER {$$ = $1;}
| NUM_DECIMAL {$$ = $1;}
| IDENTIFIER { }
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
