#include <stdio.h>
#include <string.h>
#include <math.h>

main () {

double valor1;
double valor2;

    printf (" digite seu peso em kg e altura em metro ");

    scanf  ("%lf %lf", &valor1, &valor2);

double valor3 = valor1 / (valor2*valor2);

if (valor3 < 18.5 ) 
    {printf("%lf abaixo do peso", valor3);}

else if (valor3 > 18.5 & valor3 < 25.0)
    {printf("%lf peso normal", valor3);}

else if (valor3 > 25.0 & valor3 < 29.9)
    {printf("%lf sobre peso", valor3);}

else if (valor3 > 30 & valor3 < 34.9)
    {printf("%lf obesidade grau 1", valor3);}

else if (valor3 > 35.0 & valor3 < 39.9)
    {printf("%lf obesidade grau 2", valor3);}

else if (valor3 > 40)
    {printf("%lf obesidade grau 3", valor3);}
    










}