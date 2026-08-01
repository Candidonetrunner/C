#include <stdio.h>
#include <string.h>

int main () {


printf ("digita sua idade e se tem cnh no seguinte modelo '18 sim'\n");

int idade;
char cnh[10];

scanf ("%d %s", &idade, &cnh );

if (idade >= 18 & strcmp (cnh, "sim")==0) {printf ("pode dirigir pai");
}
else {printf ("pode nao");}
}