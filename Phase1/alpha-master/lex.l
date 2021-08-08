%{
#include "lex.yy.h"
#include <string.h>

const char* category_names[] = {
    "IDENT",
    "KEYWORD",
    "OPERATOR",
    "INTCONST",
    "REALCONST",
    "PUNCTUATION",
    "STRING",
    "COMMENT"
};

int line_number;
char name[256];
int token_count = 0;
enum category category;
%}

keyword             if|else|while|for|function|return|break|continue|and|not|or|local|true|false|nil
operator            (\=)|(\+)|(\-)|(\*)|(\/)|(\%)|(\=\=)|(\!\=)|(\+\+)|(\-\-)|(\>)|(\<)|(\>\=)|(\<\=)
intconst            [0-9]+
punctuation         (\{)|(\})|(\()|(\))|(\[)|(\])|(\:)|(\,)|(\:\:)|(\.)|(\.\.)|(\;)
ident               [a-zA-Z][a-zA-Z0-9_]*
string              \"[^"\n"]+\"
comment             "//".+|"/*".+"*/"

%option yylineno

%%
{keyword} {
    processToken(KEYWORD);
    return 100;
}
{ident} {
    processToken(IDENT);
    return 101;
}
{comment} {
    processToken(COMMENT);
    return 102;
}
{operator} {
    processToken(OPERATOR);
    return 103;
}
{intconst} {
    processToken(INTCONST);
    return 104;
}
{intconst}\.{intconst} {
    processToken(REALCONST);
    return 105;
}
{punctuation} {
    processToken(PUNCTUATION);
    return 106;
}
{string} {
    processToken(STRING);
    return 107;
}
. { }
\n { }
%%

void processToken(enum category cat){
    category = cat;
    token_count++;
    line_number = yylineno;
    strcpy(name, yytext);
}

void insertToken(enum category cat){
    alpha_token_t *new, *tmp = head, *prev = NULL;

    new = (alpha_token_t *)malloc(sizeof(alpha_token_t));
    if(head == NULL){
        head = new;
        new->next = NULL;
    }
    else {
        while(tmp!=NULL){
            prev = tmp;
            tmp = tmp->next;
        }
        prev->next = new;
        new->next = NULL;
    }
    new->line_number = yylineno;
    category = cat;
    token_count++;
    strcpy(name, yytext);
}

keyword typeOfWord(char *word){
    if(strcmp(text, "{") == 0) return LEFT_BRACE;
    else if(strcmp(text, "}") == 0) return RIGHT_BRACE;
    else if(strcmp(text, "[") == 0) return LEFT_BRACKET;
    else if(strcmp(text, "]") == 0) return RIGHT_BRACKET;
    else if(strcmp(text, "(") == 0) return LEFT_PARENTHESIS;
    else if(strcmp(text, ")") == 0) return RIGHT_PARENTHESIS;
    else if(strcmp(text, ";") == 0) return SEMICOLON;
    else if(strcmp(text, ",") == 0) return COMMA;
    else if(strcmp(text, ":") == 0) return COLON;
    else if(strcmp(text, "::") == 0) return DOUBLE_COLON;
    else if(strcmp(text, ".") == 0) return DOT; 
    else if(strcmp(text, "..") == 0) return DOUBLE_DOT;
    else if(strcmp(word, "true") == 0) return TRUE;
    else if(strcmp(word, "false") == 0) return FALSE;
    else if(strcmp(word, "nil") == 0) return NIL;
}

int yywrap(){
    return 1;
}

int alpha_yylex(void *ylval){
    int r = yylex();
    ((struct alpha_token_t*)ylval)->line_number = line_number;
    ((struct alpha_token_t*)ylval)->token_no = token_count;
    ((struct alpha_token_t*)ylval)->category = category;
    strcpy(((struct alpha_token_t*)ylval)->text, name);
    return r;
}