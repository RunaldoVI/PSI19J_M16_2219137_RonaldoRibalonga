#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include "tugabilhetes.h"
#include "menubilhetes.h"
#include "engbilhete.h"
#include "CoresEng.h"
#include "cores.h"
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

struct minimo{

char minimousername[80];
char minimopassword[90];
char minimoemail[200];
};
struct minimo minimo;

int main()
{
int a;
int segundos=0,minutos=0,horas=0;
int menulingua;



setlocale(LC_ALL,"Portuguese");
printf(" ____________________________________________________________________________________________________________________________________________________________________   \n");
printf("|                                                                                                                                                                    |  \n");
printf("|                                                                                                                                                                    |  \n");
printf("|   #         ######                                                                      # ######                                                                   |  \n");
printf("|  ##         #     #  ####  #####  ##### #    #  ####  #    # ######  ####  ######      #  #     #  ####  #####  ##### #    #  ####  #    # ######  ####            |  \n");
printf("| # #         #     # #    # #    #   #   #    # #    # #    # #      #      #          #   #     # #    # #    #   #   #    # #    # #    # #      #                |  \n");
printf("|   #   ##### ######  #    # #    #   #   #    # #      #    # #####   ####  #####     #    ######  #    # #    #   #   #    # #      #    # #####   ####            |  \n");
printf("|   #         #       #    # #####    #   #    # #  ### #    # #           # #        #     #       #    # #####    #   #    # #  ### #    # #           #           |  \n");
printf("|   #         #       #    # #   #    #   #    # #    # #    # #      #    # #       #      #       #    # #   #    #   #    # #    # #    # #      #    #           |  \n");
printf("| #####       #        ####  #    #   #    ####   ####   ####  ######  ####  ###### #       #        ####  #    #   #    ####   ####   ####  ######  ####            |  \n");
printf("|--------------------------------------------------------------------------------------------------------------------------------------------------------------------|  \n");
printf("|   #####         #######                                            # ###                                                                                           |  \n");
printf("|  #     #        #       #    #  ####  #      #  ####  #    #      #   #  #    #  ####  #      ######  ####                                                         |  \n");
printf("|        #        #       ##   # #    # #      # #      #    #     #    #  ##   # #    # #      #      #                                                             |  \n");
printf("|   #####   ##### #####   # #  # #      #      #  ####  ######    #     #  # #  # #      #      #####   ####                                                         |  \n");
printf("|  #              #       #  # # #  ### #      #      # #    #   #      #  #  # # #  ### #      #           #                                                        |  \n");
printf("|  #              #       #   ## #    # #      # #    # #    #  #       #  #   ## #    # #      #      #    #                                                        |  \n");
printf("|  #######        ####### #    #  ####  ###### #  ####  #    # #       ### #    #  ####  ###### ######  ####                                                         |  \n");
printf("|____________________________________________________________________________________________________________________________________________________________________|  \n");


scanf("%i",&menulingua);
system("pause");
system("cls");
switch(menulingua)
{
case 1:

    do{
    FILE *ficheiro;
tuga();
printf("                           ---------------Bem-Vindo Ao TugaBilhetes------------\n");
printf("                                    ----------1-Registrar---------\n");
printf("                                      ----------2-Login----------\n");
printf("                                         --------0-Sair--------\n");
scanf("%i",&a);
switch(a)
{
    case 1:
    if(a==1)
{

printf("------Registrar------\n");
ficheiro = fopen("registro.txt","a+");
printf("Usuário:\n");
fflush(stdin);
gets(registar.username);
if(strlen(registar.username)>=5)
{
fprintf(ficheiro,"Usuário %s\n",registar.username);
}
else
{
    printf("Não tem caracters sufecientes\n");
    system("pause");
    system("cls");
    break;
    default:printf("Erro");
}
printf("Email:\n");
gets(registar.email);
fflush(stdin);
if(strlen(registar.email)>=20)
{
fprintf(ficheiro,"Email %s\n",registar.email);
}
else
{
printf("Não tem caracters sufecientes\n");
system("pause");
system("cls");
break;
}
printf("Palavra-Passe:\n");
fflush(stdin);
gets(registar.password);
if(strlen(registar.password)>=10)
{
fprintf(ficheiro,"Password %s\n",registar.password);
fprintf(ficheiro,"-------------\n");
fclose(ficheiro);
}
else
{
    printf("Não tem caracters sufecientes\n");
    system("pause");
    system("cls");
    break;
}
}
else
{
    printf("Erro404\n");
}
system("pause");
system("cls");
break;
    case 2:
        ficheiro = fopen("login.txt","a+");
fflush(stdin);
printf("----------Login----------\n");
printf("Username \n");
gets(login.username2);
fprintf(ficheiro,"Username: %s\n",login.username2);
printf("Password: \n");
gets(login.password2);
fprintf(ficheiro,"Password: %s\n",login.password2);
system("pause");
system("cls");

if(strcmp(login.username2,registar.username)==0)
{
if(strcmpi(login.username2,minimo.minimousername)!=0)
{
if(strcmpi(login.password2,minimo.minimopassword)!=0)
{
if(strcmp(login.password2,registar.password)==0)
{
bilhetes();
}
}
}
else
{
                 printf("____ ____ ____ ____ \n");
                 printf("|___ |__/ |__/ |  | \n");
                 printf("|___ |  | |  | |__| \n");
                 system("pause");
                 system("cls");
}
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




}
}while(a!=0);
break;
    case 2:
            do{
    FILE *ficheiro;
   ficheiro = fopen("registro.txt","a+");
tuga();
printf("                           ---------------Welcome To TugaBilhetes------------\n");
printf("                                    ----------1-Register----------\n");
printf("                                      ----------2-Login----------\n");
printf("                                         --------0-Exit--------\n");
scanf("%i",&a);
switch(a)
{
    case 1:
    if(a==1)
{
FILE * ficheiro;
ficheiro = fopen("Registereng.txt","a+");
printf("------Register------\n");
fflush(stdin);
printf("Username:\n");
gets(registar.username);
if(strlen(registar.username)>=5)
{
fprintf(ficheiro,"Username %s\n",registar.username);
}
else
{
    printf("Dont got enough caracters\n");
    system("pause");
    system("cls");
    break;
    default:printf("Erro");
}
printf("Email:\n");
gets(registar.email);
if(strlen(registar.email)>=20)
{
fprintf(ficheiro,"Email %s\n",registar.email);
}
else
{
    printf("Dont got enough caracters\n");
    system("pause");
    system("cls");
    break;
}
printf("Password:\n");
gets(registar.password);
if(strlen(registar.password)>=10)
{
fprintf(ficheiro,"Password %s\n",registar.password);
fprintf(ficheiro,"-------------\n");
fclose(ficheiro);
}
else
{
    printf("Dont got enough caracters\n");
    system("pause");
    system("cls");
    break;
}
}
else
{
    printf("Erro404\n");
}
system("pause");
system("cls");
break;
    case 2:
        ficheiro = fopen("Logineng.txt","a+");
fflush(stdin);
printf("----------Login----------\n");
printf("Username \n");
gets(login.username2);
fprintf(ficheiro,"Password: %s\n",login.username2);
printf("Password: \n");
gets(login.password2);
fprintf(ficheiro,"Password: %s\n",login.password2);
system("pause");
system("cls");
if(strcmp(login.username2,registar.username)==0)
{
if(strcmpi(login.username2,minimo.minimousername)!=0)
{
if(strcmpi(login.password2,minimo.minimopassword)!=0)
{
if(strcmp(login.password2,registar.password)==0)

{
engbilhete();
}
}
}
else
{
                 printf("____ ____ ____ ____ \n");
                 printf("|___ |__/ |__/ |  | \n");
                 printf("|___ |  | |  | |__| \n");
                 system("pause");
                 system("cls");
}
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




}
}while(a!=0);
}
}
