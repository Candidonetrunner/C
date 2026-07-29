#include <stdio.h> 
#include <string.h>


main() {
int valor1;
int valor2;
char simbolo[2];

printf ("bota os valores ai");

scanf ( "%d %c %d", &valor1, &simbolo, &valor2);




if (strcmp(simbolo,"+")== 0) 
    {printf ("%d", valor1 + valor2);}

else if (strcmp(simbolo,"-")== 0) 
    {printf ("%d", valor1 - valor2);}

else if (strcmp(simbolo,"*")== 0) 
    {printf ("%d", valor1 * valor2);}

else if (strcmp(simbolo,"/")== 0) 
    {printf ("%d", valor1 / valor2);}

else if (strcmp(simbolo,"&")== 0) 
    {printf ("%d", valor1 & valor2);}

else {printf ("nao inventa viado");}


}
// %c é ideal para reconhecer characteres separados no scanf