#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){

char username[10]; 
char senha[10];
int tentativas = 0;

printf("Bem-Vindo\n");

while(1){

if (tentativas >= 3){
printf("limite de tentativas alcançado");
break;
}

printf("login:");scanf("%s", username);
printf("senha:");scanf("%s", senha);

if(strcmp(username, "pedro")==0 & strcmp(senha, "1234")==0 ) {
printf ("acesso liberado");
break;
}
else { 
tentativas += 1; 
printf("login ou senha incorreto\nrestam %d tentativas\n", 3 - tentativas);
}
}
}