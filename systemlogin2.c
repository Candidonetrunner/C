#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){

char username[10]; 
char login[10];
char flogin[10];
char senha[10];
char senhav[10];
char fsenha[10];
char acesso[10];
int tentativas = 0;
int cadastro = 0;
FILE *arquivo; 


printf("Bem-Vindo\n");
while (1){
printf ("digite 'cadastro' para se cadastrar e 'login' para fazer login\n");
scanf ("%9s", acesso);
if (strcmp(acesso, "cadastro")==0){
printf ("Escolha seu login e senha\n");
printf("login:");scanf ("%9s",login); 
printf("senha:");scanf ("%9s",senhav); 
cadastro += 1;
arquivo = fopen ("usuario.txt","w");
fprintf (arquivo,"%s\n%s",login, senhav);
fclose (arquivo);
}
else if (strcmp(acesso, "login")==0 && cadastro == 0){
printf ("nenhum cadastro realizado\n");
}
else if (strcmp(acesso, "login")==0){
while(1){
arquivo = fopen("usuario.txt", "r");
fscanf (arquivo,("%9s\n%9s"),flogin,fsenha);
if (tentativas >= 3){
printf("limite de tentativas alcancado\n");
break;
}
printf("login:");scanf("%9s", username);
printf("senha:");scanf("%9s", senha);
if(strcmp(username, flogin)==0 && strcmp(senha, fsenha)==0 ) {
printf ("acesso liberado\n");
break;
}
else { 
tentativas += 1; 
printf("login ou senha incorreto\nrestam %d tentativas\n", 3 - tentativas);
}
}
}
else {printf("comando invalido\n");
}
}
}