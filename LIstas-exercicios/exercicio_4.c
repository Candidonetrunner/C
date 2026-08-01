#include <stdio.h>
#include <string.h>
#include <math.h>

main () {
    int valor1;
    int valor2;

        printf ("digite a base e o expoente (exemplo : 2 2):");

        scanf ("%d %d", &valor1, &valor2);

    int valor3=pow(valor1,valor2);

        printf ("%d", valor3);

        if (valor3%2== 0)
            {printf("\npar");}

        else 
        {printf("\nimpar");}                                    
    }
    // usar % para o computar verificar se as divisões tem resto ou não