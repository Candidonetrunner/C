#include <stdio.h>
#include <string.h>

int main (){

double p1;
double c1;
double p2;
double c2;

printf ("digite os pesos e comprimentos nas seguintes ordens peso 1 comprimento 1 peso 2 comprimento 2\n");

scanf ("%lf %lf %lf %lf", &p1, &c1, &p2, &c2);

double esquerda = p1 * c1; 
double direita = p2 * c2;
if (esquerda > direita) {
printf ("a gangorra pende para a esquerda\n");
}
if (esquerda < direita) {
printf ("a gangorra pende para a direita\n");
}
if (esquerda == direita) {
printf ("a gangorra esta perfeitamente equilibrada\n");
}
}