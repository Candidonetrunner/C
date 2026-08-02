#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){

char username[10]; 
char login[10];
char senha[10];
char senhav[10];
char acesso[10];
int tentativas = 0;

printf("Bem-Vindo\n");
while (1){
printf ("digite 'cadastro' para se cadastrar e 'login' para fazer login\n");
scanf ("%9s", acesso);
if (strcmp(acesso, "cadastro")==0){
printf ("Escolha seu login e cadastro\n");
printf("login:");scanf ("%9s", login); 
printf("senha:");scanf ("%9s", senhav); 
}
else if (strcmp(acesso, "login")==0){
while(1){
if (tentativas >= 3){
printf("limite de tentativas alcançado");
break;
}
printf("login:");scanf("%9s", username);
printf("senha:");scanf("%9s", senha);
if(strcmp(username, login)==0 && strcmp(senha, senhav)==0 ) {
printf ("acesso liberado\n");
break;
}
else { 
tentativas += 1; 
printf("login ou senha incorreto\nrestam %d tentativas\n", 3 - tentativas);
}
}
}
else {printf("comando invalido");
}
}
}