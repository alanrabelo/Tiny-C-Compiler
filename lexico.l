/* Nao usar a biblioteca do flex*/
%option noyywrap

%x IN_COMMENT

%{
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <sintatico.tab.h>
#define tamanho 100000
int ajuda_sint = 0;
union yylval;
int ajuda_lex = 0;
int chars = 1;//contador de char
int token = 0;//contador de token
int lines = 1;//contador de linha
int lines2 = 0;
int chars2 = 1;
int pula_linha = 0;
int coluna = 0;
char AUX12[tamanho];
char AUX13[tamanho];
int i=0;
char *string;
void copia_token_erro();
char vets[tamanho];
char vets2[tamanho];
%}

%%

"int"      {strcat(vets, yytext);copia_token_erro();chars+=strlen(yytext);token++;return(INT);}
"char"     {strcat(vets, yytext);copia_token_erro();chars+=strlen(yytext);token++;return(CHAR);}
"float"    {strcat(vets, yytext);copia_token_erro();chars+=strlen(yytext);token++;return(FLOAT);}
"return"   {strcat(vets, yytext);copia_token_erro();chars+=strlen(yytext);token++;return(RETURN);}
";"        {strcat(vets, yytext);copia_token_erro();chars+=strlen(yytext);token++;return(SEMICOLON);}
","        {strcat(vets, yytext);copia_token_erro();chars+=strlen(yytext);token++;return(COMMA);}
"="        {strcat(vets, yytext);copia_token_erro();chars+=strlen(yytext);token++;return(ASSIGN);}
"+"        {strcat(vets, yytext);copia_token_erro();chars+=strlen(yytext);token++;return(SOMA);}
"-"        {strcat(vets, yytext);copia_token_erro();chars+=strlen(yytext);token++;return(SUBTRACAO);}
"*"        {strcat(vets, yytext);copia_token_erro();chars+=strlen(yytext);token++;return(MULTIPLICACAO);}
"/"        {strcat(vets, yytext);copia_token_erro();chars+=strlen(yytext);token++;return(DIVISAO);}
"("        {strcat(vets, yytext);copia_token_erro();chars+=strlen(yytext);token++;return(ABRE_PARENTESE);}
")"        {strcat(vets, yytext);copia_token_erro();chars+=strlen(yytext);token++;return(FECHA_PARENTESE);}
"**"       {strcat(vets, yytext);copia_token_erro();chars+=strlen(yytext);token++;return(EXPONENCIACAO);}
"%"        {strcat(vets, yytext);copia_token_erro();chars+=strlen(yytext);token++;return(MODULO);}
"!"        {strcat(vets, yytext);copia_token_erro();chars+=strlen(yytext);token++;return(NOT);}
"&&"       {strcat(vets, yytext);copia_token_erro();chars+=strlen(yytext);token++;return(AND);}
"||"       {strcat(vets, yytext);copia_token_erro();chars+=strlen(yytext);token++;return(OR);}

[+-]?([0-9]*[.])?[0-9]+         {strcat(vets, yytext);copia_token_erro();chars+=strlen(yytext);token++;yylval.f = atoi(yytext);return(NUM_DECIMAL);}

[+-]?[0-9]+                     {strcat(vets, yytext);copia_token_erro();chars+=strlen(yytext);token++;yylval.i = atoi(yytext);return(NUM_INTEGER);}

'[\\]?(.)'	                    {strcat(vets, yytext);copia_token_erro(); string = malloc(strlen(yytext)*sizeof(char));strcpy(string, yytext); i = 0;
                                 while(string[i] != '\0'){string[i] = string[i+1]; i++;} string[i-2] = '\0';
			                    chars+=strlen(yytext);token++;yylval.s = atoi(yytext);return(CHARACTER);}

[_a-zA-Z][_a-zA-Z0-9]*	        {strcat(vets, yytext);copia_token_erro();chars+=strlen(yytext);token++;yylval.s = atoi(yytext);return(IDENTIFIER);}

%%

void copia_token_erro(){

	int i=0;

    strcat(AUX13,yytext);

	for (i = 0; yytext[i] != '\0'; i++){
		if(yytext[i] == '\n'){
        	strcpy(AUX12,"");
            strcpy(AUX13,"");
            coluna = 0;
        }
		else if(yytext[i] == '\t')
        	coluna += 8 - (coluna % 8);

		else{

        	strcpy(AUX12,yytext);
            coluna++;
        }
    }
}