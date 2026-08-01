#include <stdio.h>
#include <string.h>
#include <math.h>

main () {

    double valor1;
    double valor2;

    printf ("escreva os catetos: ");

    scanf ("%lf %lf", &valor1, &valor2);

    double valor3 = sqrt(pow(valor1,2)+pow(valor2,2));

    printf ("hipotenusa=%.2lf",valor3);

    return 0;
    }
    /*%f para definir casas com float e l antes do f para definir largura, separar % no scanf, não é cmath o correto é math.h bonna baka*/