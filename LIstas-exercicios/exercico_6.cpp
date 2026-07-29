//O usuário digita os valores de a, b e c. O programa calcula o discriminante e exibe as duas raízes, ou a mensagem `"Sem raízes reais"` se não existirem.
#include <stdio.h>
#include <string.h>
#include <math.h>

main () {

int valor1;
int valor2;
int valor3;

    printf ("escreva os valores b a c");
    scanf ("%d %d %d", valor1, valor2, valor3);

int valor4 = pow (valor2, 2) - 4*valor1*valor2;

if (valor4 == 0) {printf("tem apenas uma raiz");}
else if (valor4 > 0) {printf("tem apenas uma raiz");}
}