#include <stdio.h>
#include <string.h>
#include <math.h>

int main () {

int variavel1 = 5;

int variavel2 = 10;

char trocar[10];

printf ("variavel 1: %d variavel 2: %d digite trocar para invertelas\n", variavel1, variavel2);

scanf ("%s", &trocar);

if (strcmp (trocar, "trocar")==0)
{variavel1 +=5;
variavel2 -=5;
}

printf ("variavel 1: %d variavel 2: %d\n essa porra ta facil demais\n na real faz o que quiser ai com essas variaveis\n coloque um +-*/ e um valor pra qualquer variavel\n ex: +10*100\n digite sair para sair e limpar para limpar as variaveis\n", variavel1, variavel2);

char entrada[10];

char funcao1;
char funcao2;

int valor1;
int valor2;

while(1)
{

scanf ("%s", entrada);

if(strcmp(entrada, "sair")==0) {
printf ("tenha um bom dia");
break;

}
if(strcmp(entrada, "limpar")==0) {
variavel1= 0;
variavel2= 0;
}

sscanf(entrada, "%c%d%c%d", &funcao1, &valor1, &funcao2, &valor2);

if(funcao1 == '+') {
variavel1 += valor1;
}
if(funcao1 == '-') {
variavel1 -= valor1;
}
if(funcao1 == '*') {
variavel1 *= valor1;
}
if(funcao1 == '/') {
variavel1 /= valor1;
}
if(funcao2 == '+') {
variavel2 += valor2;
}
if(funcao2 == '-') {
variavel2 -= valor2;
}
if(funcao2 == '*') {
variavel2 *= valor2;
}
if(funcao2 == '/') {
variavel2 /= valor2;
}

printf ("variavel 1: %d variavel 2: %d\n", variavel1, variavel2);
}
}
