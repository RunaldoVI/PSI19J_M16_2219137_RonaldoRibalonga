#ifndef CORES_H_INCLUDED
#define CORES_H_INCLUDED
void cores()
{

    int cor;

printf(" _____________________      \n");
printf("|        Cores        |     \n");
printf("|_____________________|     \n");
printf("|1-Azul               |     \n");
printf("|2-Verde              |     \n");
printf("|3-Verde-água         |     \n");
printf("|4-Vermelho           |     \n");
printf("|5-Roxo               |     \n");
printf("|6-Amarelo            |     \n");
printf("|7-Branco             |     \n");
printf("|8-Cinza              |     \n");
printf("|9-Azul Claro         |     \n");
printf("|_____________________|     \n");
printf("Qual cor deseja escolher?\n");
scanf("%i",&cor);
switch(cor)
{
    case 1:system("color 1");
system("pause");
system("cls");
    break;
    case 2:system("color 2");
system("pause");
system("cls");
    break;
    case 3:system("color 3");
system("pause");
system("cls");
    break;
    case 4:system("color 4");
system("pause");
system("cls");
    break;
    case 5:system("color 5");
system("pause");
system("cls");
    break;
    case 6:system("color 6");
system("pause");
system("cls");
    break;
    case 7:system("color 7");
system("pause");
system("cls");
    break;
    case 8:system("color 8");
system("pause");
system("cls");
    break;
    case 9:system("color 9");
system("pause");
system("cls");
    break;
    default: printf("Erro\n");
system("pause");
system("cls");

}
}


#endif // CORES_H_INCLUDED
