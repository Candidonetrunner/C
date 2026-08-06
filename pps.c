#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (){

    char jogador[10];
    char entrada[10];
    char jj[10];
    int jc;
    int pj;
    int pc;

    printf("Quem e o jogador?\n");

    scanf("%9s", jogador);

    while(1){
            jc = (rand() % 2);
            printf ("digite 'jogar', 'sair' ou 'placar'");
            scanf ("%9s", entrada);~
            if (strcmp(entrada, "jogar")==0){
                prinf("pedra...\npapel...\ntesooooou");
                scanf("%d",jj);
                    if (jj (strcmp(jj, "pedra")==0) && jc == 0){

                    }
                    else if (strcmp(jj, "papel") == 0 && jc == 1){

                    }
                    else if(strcmp(jj, "tesoura") == 0 && jc == 2){

                    }
                    if (jj (strcmp(jj, "pedra")==0) && jc == 2){

                    }
                    else if (strcmp(jj, "papel") == 0 && jc == 0){

                    }
                    else if(strcmp(jj, "tesoura") == 0 && jc == 1){

                    }
                     if (jj (strcmp(jj, "pedra")==0) && jc == 1){

                    }
                    else if (strcmp(jj, "papel") == 0 && jc == 2){

                    }
                    if (jj (strcmp(jj, "pedra")==0) && jc == 1){

                    }
                    

            }
            if (strcmp(entrada, "sair")==0){

            }  
            if (strcmp(entrada, "sair")==0){
            }

    }
}