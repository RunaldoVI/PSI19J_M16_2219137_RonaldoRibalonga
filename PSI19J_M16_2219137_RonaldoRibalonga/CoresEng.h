#ifndef CORESENG_H_INCLUDED
#define CORESENG_H_INCLUDED

void coreseng()
{

    int cor1;

printf(" _____________________      \n");
printf("|        Colors       |     \n");
printf("|_____________________|     \n");
printf("|1-Blue               |     \n");
printf("|2-Green              |     \n");
printf("|3-Green-Water        |     \n");
printf("|4-Red                |     \n");
printf("|5-Purple             |     \n");
printf("|6-Yellow             |     \n");
printf("|7-White              |     \n");
printf("|8-Grey               |     \n");
printf("|9-Light Blue         |     \n");
printf("|_____________________|     \n");
printf("What color u desire?\n");
scanf("%i",&cor1);
switch(cor1)
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

#endif // CORESENG_H_INCLUDED
