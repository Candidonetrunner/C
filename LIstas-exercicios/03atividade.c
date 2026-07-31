#include <stdio.h>
#include <math.h>
#include <string.h>

int main()

{
    while (1)
    {
        
        char saida[10];

    
        printf("escreve o valor em celsius e sair se quiser parar:\n");

        scanf("%s", saida);

        if (strcmp(saida, "sair")==0) {
            printf ("valeu ai"); 
            break;
        }

        double temperatura1;

        if (sscanf (saida, "%lf", &temperatura1)== 1){

        double temperatura2 = temperatura1 * 1.80 + 32;

        printf("%lf fahrenheit\n", temperatura2);}
        else 
        {printf("entrada invalida\n");

        }
}
}