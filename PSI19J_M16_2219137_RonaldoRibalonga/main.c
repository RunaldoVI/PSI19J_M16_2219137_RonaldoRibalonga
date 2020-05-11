#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "tugabilhetes.h"
#include "menubilhetes.h"
struct registrar{
char username[50];
char email[100];
char password[20];
};
struct registrar registrar[100];

struct login{
char usernama[50];
char pessword[20];
};
struct login login;

int main()
{
int a;
setlocale(LC_ALL,"Portuguese");
    //do{
    FILE *ficheiro;
    FILE *ficheira;
   ficheiro = fopen("registro.txt","a");
   ficheira = fopen("login.txt","a");
printf("---------------Bem-Vindo Ao TugaBilhetes------------\n");
printf("             ----------1-Registrar---------\n");
printf("              ----------2-Login----------\n");
tuga();
bilhetes();
scanf("%i",&a);
/*switch(a)
{
    case 1:
    if(a==1)
{

printf("------Registrar------\n");
fflush(stdin);
printf("Username:\n");
gets(registrar[a].username);
fprintf(ficheiro,"Username %s\n",registrar[a].username);
printf("Email:\n");
gets(registrar[a].email);
fprintf(ficheiro,"Email %s\n",registrar[a].email);
printf("Password:\n");
gets(registrar[a].password);
fprintf(ficheiro,"Password %s\n",registrar[a].password);
fprintf(ficheiro,"-------------\n");
fclose(ficheiro);
}
    else
{
    printf("error404\n");
}
system("pause");
system("cls");
break;
    case 2:
        fflush(stdin);
        printf("----------Login----------\n");
        printf("Username: \n");
        gets(login.usernama);
        fprintf(ficheira,"Username %s\n",login.usernama);
        printf("Password: \n");
        gets(login.pessword);
        fprintf(ficheira,"Password %s\n",login.pessword);
        fclose(ficheira);
        system("pause");
        system("cls");
        break;




        default: printf("Erro");

}
}while(a!=0);*/
}
