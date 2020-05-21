#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include "tugabilhetes.h"
#include "menubilhetes.h"
struct registar{
char username[50];
char email[100];
char password[20];
};
struct registar registar;

struct login{
char email2[100];
char password2[20];
char username2[50];
};
struct login login;

struct ficheir{
char email3[100];
char username3[50];
char password3[20];
};
struct ficheir ficheir;

int main()
{
int a;

setlocale(LC_ALL,"Portuguese");
    do{
    FILE *ficheiro;
   ficheiro = fopen("registro.txt","a");
printf("                           ---------------Bem-Vindo Ao TugaBilhetes------------\n");
printf("                                    ----------1-Registrar---------\n");
printf("                                      ----------2-Login----------\n");
tuga();
scanf("%i",&a);
switch(a)
{
    case 1:
    if(a==1)
{

printf("------Registrar------\n");
fflush(stdin);
printf("Username:\n");
gets(registar.username);
fprintf(ficheiro,"Username %s\n",registar.username);
printf("Email:\n");
gets(registar.email);
fprintf(ficheiro,"Email %s\n",registar.email);
printf("Password:\n");
gets(registar.password);
fprintf(ficheiro,"Password %s\n",registar.password);
fprintf(ficheiro,"-------------\n");
fclose(ficheiro);
}
else
{
    printf("Erro404\n");
}
system("pause");
system("cls");
break;
    case 2:
fflush(stdin);
printf("----------Login----------\n");
printf("Username/Email: \n");
gets(login.username2);
printf("Password: \n");
gets(login.password2);
system("pause");
system("cls");
if(strcmp(login.username2,registar.username)==0)
{
}
else
{
                 printf("____ ____ ____ ____ \n");
                 printf("|___ |__/ |__/ |  | \n");
                 printf("|___ |  | |  | |__| \n");
                 system("pause");
                 system("cls");
}



        if(strcmp(login.password2,registar.password)==0)
{
bilhetes();
}


else
{
                 printf("____ ____ ____ ____ \n");
                 printf("|___ |__/ |__/ |  | \n");
                 printf("|___ |  | |  | |__| \n");
                 system("pause");
                 system("cls");
}




        break;




        default: printf("____ ____ ____ ____ \n");
                 printf("|___ |__/ |__/ |  | \n");
                 printf("|___ |  | |  | |__| \n");
                 system("pause");
                 system("cls");
}
}while(a!=0);
}

