#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main () {

	char entrada[10];
	char dificuldade[10];
        int chute;

	while(1){
		printf("esolha uma dificuldade\nfacil\nmedio\ndificil\ndificudade:");scanf("%s", dificuldade);
		if(strcmp(dificuldade, "sair")==0){
		printf ("adeus\n");
		break;
		}
		if(strcmp(dificuldade, "facil")==0){
			int resposta = (rand() % 25) + 1;
			int tentativas = 0;
     			printf ("tente advinhar o numero de 1 a 25:\n");
		while (1){
				if (tentativas >= 5){
					printf ("kkkkkk vc e mt ruim as chances acabaram ja\n");
					break;
				}	
				scanf("%9s", entrada);
				if(strcmp(entrada, "desisto")==0){
					printf("%d,noob\n", resposta);
					break;
				}
				else if (strcmp,(entrada, "sair")==0){
					printf("ok, vamos ao menu\n");
				}
				else{
					sscanf(entrada,"%d",&chute);
					if (chute == resposta){
						printf("parabens, no facil e facil ne\n");
						break;
					}
					else if (chute >= resposta){
						printf ("um pouco menor amigo\n");
			        		tentativas += 1;
					}
					else if (chute <= resposta){
						printf("um pouco maior amigo\n");
						tentativas += 1;
					}
					else {
						printf("comando invalido\n");
					}	
				}
			}
		}
		else if(strcmp(dificuldade, "medio")==0){
			int resposta = (rand() % 50) + 1;
			int tentativas = 0;
			printf ("tente acertar o numero de 1 a 50:\n");
			while(1){
				if (tentativas >= 5){
					printf ("tu e meio ruim kkkkkkkk acabou as chances\n");
					break;
				}
				scanf("%9s", entrada);
				if(strcmp(entrada, "desisto")==0){
					printf("%d, se rendeu kkkk\n", resposta);
					break;
				}
				else if(strcmp(entrada, "sair")==0){
					printf ("vamo pro menu ent");
				}
				else{
					sscanf(entrada,"%d",&chute);
					if(chute == resposta){
						printf("parabens, sortudo fdp\n");
						break;
					}
					else if (chute >= resposta){
						printf ("um pouco menos parceiro\n");
						tentativas +=  1;
					}	
					else if (chute <= resposta){
						printf ("um pouco mais parceiro\n");
						tentativas += 1;
					}
					else {
						printf("comando invalido");
					}
				}
			}
		}

		else if(strcmp(dificuldade, "dificil")==0){
			int resposta = (rand() % 100)+1;
			int tentativas = 0;
     			printf ("tente advinha um numero de um a 100:\n");
		while (1){
				if (tentativas >= 5){
					printf ("se deu mal kkkk, as chances acabaram ja\n");
					break;
				}
				scanf("%9s", entrada);
				if(strcmp(entrada, "desisto")==0){
					printf("%d,tenta outra vez dps\n", resposta);
					break;
				}
				else if (strcmp,(entrada, "sair")==0){
					printf("ok, vamos ao menu\n");
				}
				else{
					sscanf(entrada,"%d",&chute);
					if (chute == resposta){
						printf("q sorte do caralho\n");
						break;
					}
					else if (chute >= resposta){
						printf ("um pouco menor amigo\n");
			        		tentativas += 1;
					}
					else if (chute <= resposta){
						printf("um pouco maior amigo\n");
						tentativas += 1;
					}
					else{
						printf("comando invalido kkkkkk\n");	
					}
				}
			}
		}
		else {printf("comando inválido\n");
		}	
	}
}	
