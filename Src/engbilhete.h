#ifndef ENGBILHETE_H_INCLUDED
#define ENGBILHETE_H_INCLUDED

struct bilhete1{
        int principal;
        int quantidade;
    };
struct bilhete1 bilhete1;

struct menuadicional1{
       int escolha;
       int deseja;
       int deseja1;
       int desejo;
       int vip;
       int precovip;
       int viprestantes;
};
struct menuadicional1 menuadicional1;

void engbilhete()
{
    int comida[]={0,3,2,5,5,15,9,8,5,7,2};
    int bebida[]={0,2,2,2,2,2,3,3,2,3,1};
    int extra[]={0,2,1,1,1};
    int b1,c1,d1,restante,resto,precobilhetes,totaldetudo,hotdog,precohotdog;
    int total=0;
    int totalbilhetes=300;
    menuadicional1.viprestantes=30;


do{
printf(" _____________________________________________________________________________________________________________\n");
printf("|                                                                                                             |\n");
printf("|######## ##     ##  ######      ###    ########  #### ##       ##     ## ######## ######## ########  ######  |\n");
printf("|   ##    ##     ## ##    ##    ## ##   ##     ##  ##  ##       ##     ## ##          ##    ##       ##    ## |\n");
printf("|   ##    ##     ## ##         ##   ##  ##     ##  ##  ##       ##     ## ##          ##    ##       ##       |\n");
printf("|   ##    ##     ## ##   #### ##     ## ########   ##  ##       ######### ######      ##    ######    ######  |\n");
printf("|   ##    ##     ## ##    ##  ######### ##     ##  ##  ##       ##     ## ##          ##    ##             ## |\n");
printf("|   ##    ##     ## ##    ##  ##     ## ##     ##  ##  ##       ##     ## ##          ##    ##       ##    ## |\n");
printf("|   ##     #######   ######   ##     ## ########  #### ######## ##     ## ########    ##    ########  ######  |\n");
printf("|_____________________________________________________________________________________________________________|\n");
printf("                                Welcome To TugaBilhetes Menu\n");
printf("                                   ___________________________      \n");
printf("                                  |                           |     \n");
printf("                                  | 1-Tickets                 |     \n");
printf("                                  | 2-Food&Drinks             |     \n");
printf("                                  | 3-VIP                     |     \n");
printf("                                  | 4-Change Colors           |     \n");
printf("                                  | 5-Checkout                |     \n");
printf("                                  |___________________________|     \n");
scanf("%i",&bilhete1.principal);
system("pause");
system("cls");
switch(bilhete1.principal)
{
    case 1:
    tuga();

printf("    ____________________________________                \n");
printf("   |                                    |               \n");
printf("   |    Tickets                         |               \n");
printf("   |    Country: Poland                 |               \n");
printf("   |    City: Warsaw                    |               \n");
printf("   |    Music Type: Beatbox             |               \n");
printf("   |    Ticket Price: 70 Euros          |               \n");
printf("   |    Avaliable Tickets: %i          |                \n",totalbilhetes);
printf("   |____________________________________|               \n");
printf("\nHow many tickets would u like to buy?\n");
scanf("%i",&bilhete1.quantidade);
precobilhetes=bilhete1.quantidade*70;
if(totalbilhetes>=bilhete1.quantidade)
{
    totalbilhetes=totalbilhetes-bilhete1.quantidade;
    system("pause");
    system("cls");
}
else
{
printf("Error Theres no more tickets to sell\n");
system("pause");
system("cls");
}
break;
default:printf("\n");
if(bilhete1.quantidade>=1)
{
    switch(bilhete1.principal)
    {

case 2:
    do{
    printf("  _______________________________________   ______________________________                 \n");
    printf(" |               1-Food                  | |        2-Food                |                \n");
    printf(" |_______________________________________| |______________________________|                \n");
    printf(" | 1-Hamburger- 3 Euros                  | | 1-Pepsi- 2 Euros             |                \n");
    printf(" | 2-Pizza- 2 Euros                      | | 2-Coca-Cola- 2 Euros         |                \n");
    printf(" | 3-Lasagna- 5 Euros                    | | 3-Fanta- 2 Euros             |                \n");
    printf(" | 4-Octupos Rice- 5 Euros               | | 4-Sumol- 2 Euros             |                \n");
    printf(" | 5-Sushi- 15 Euros Por 20 Peças        | | 5-Beer- 2 Euros              |                \n");
    printf(" | 6-Steak With Egg on top- 9 Euros      | | 6-Compal- 3 Euros            |                \n");
    printf(" | 7-Spaghetti Bolognese- 8 Euros        | | 7-Milkshake Banana- 3 Euros  |                \n");
    printf(" | 8-Tacos- 5 Euros 2 Tacos              | | 8-Ice Tea- 2 Euros           |                \n");
    printf(" | 9-Carbonara- 7 Euros                  | | 9-Lemonade- 3 Euros          |                \n");
    printf(" | 10-HotDog- 2 Euros                    | | 10-Water- 1 Euro             |                \n");
    printf(" | 0-Nothing                             | | 0-Nothing                    |                \n");
    printf(" |_______________________________________| |______________________________|                \n");
    printf("                                            ______________________________                \n");
    printf("                                           |          4-Extras            |               \n");
    printf("                                           |______________________________|               \n");
    printf("                                           | 1-French Fries- 2 euros      |               \n");
    printf("                                           | 2-Ketchup 250mgl- 1 Euro     |               \n");
    printf("                                           | 3-Mustard 250mgl- 1 euro     |               \n");
    printf("                                           | 4-Mayonanaise 250mgl- 1 euro |               \n");
    printf("                                           | 0-Nothing                    |               \n");
    printf("                                           |______________________________|               \n");
    printf("What food u desire? \n");
    scanf("%i",&b1);
    if(b1>10)
    {
        printf("Error\n");
        system("pause");
        system("cls");
        break;
    }
    else
    {
    }
    printf("What drink u desire? \n");
    scanf("%i",&c1);
    if(c1>10)
    {
        printf("Error\n");
        system("pause");
        system("cls");
        break;
    }
    else
    {
    }
    printf("Wanna add something extra?\n");
    scanf("%i",&d1);
    if(d1>4)
    {
        printf("Error\n");
        system("pause");
        system("cls");
        break;
    }
    else
    {
    }
    total=total+comida[b1]+bebida[c1]+extra[d1];
    printf("Would u like to add something more?\n");
    printf("1-Yes\n");
    printf("2-No\n");
    scanf("%i",&menuadicional1.deseja);
    system("pause");
    system("cls");
    }while(menuadicional1.deseja!=2);
    break;
case 3:

    printf("Would u like to add VIP to ur shopping card?\n");
    printf(" ___________________________\n");
    printf("| 1-Information about VIP   |\n");
    printf("| 2-VIP                     |\n");
    printf("| 3-Back to the menu        |\n");
    printf("| VIP Remanining %i         |\n",menuadicional1.viprestantes);
    printf("|___________________________|\n");
    scanf("%i",&menuadicional1.desejo);
    switch (menuadicional1.desejo)
    {
    case 1:
        printf("Our VIP gives access to meet they Artists and gives exclusive to the 1 line for more 10 euros\n");
        system("pause");
        system("cls");
        break;

    case 2:
        printf("How many vips will u like to buy?\n");
        scanf("%i",&menuadicional1.vip);
        if(menuadicional1.viprestantes>=menuadicional1.vip)
    {
        if(menuadicional1.viprestantes>=menuadicional1.desejo)
    {
        if(menuadicional1.vip<=bilhete1.quantidade)
        {
        menuadicional1.viprestantes=menuadicional1.viprestantes-menuadicional1.vip;
        menuadicional1.precovip=menuadicional1.vip*10;
        system("pause");
        system("cls");
        }
    }
    }

        else
    {
        printf("Theres no more avaliable vips\n");
        system("pause");
        system("cls");
    }
        break;
    case 3:system("pause");
           system("cls");
        break;
    default: printf("Erro\n");
    }
    break;
        case 4:
        coreseng();
        break;
case 5:
totaldetudo=total+precobilhetes+menuadicional1.precovip;
FILE*ficheiro;
ficheiro=(fopen("Bill.txt","a+"));
fprintf(ficheiro,"---------Bill---------\n");
fprintf(ficheiro,"FoodPrice  %i\n",total);
fprintf(ficheiro,"----------------\n");
fprintf(ficheiro,"Tickets Price %i\n",precobilhetes);
fprintf(ficheiro,"----------------\n");
fprintf(ficheiro,"VIP Price %i\n",menuadicional.precovip);
fprintf(ficheiro,"----------------\n");
fprintf(ficheiro,"Total %i\n",totaldetudo);
fclose(ficheiro);
printf(" _______________________________                \n");
printf("               Bill                             \n");
printf(" _______________________________               \n");
printf("  Food Price Will Be %i                       \n",total);
printf("  Ticket Price Will Be %i                      \n",precobilhetes);
printf("  Vip Price Will be %i                         \n",menuadicional1.precovip);
printf("  Total     =     %i  Euros                     \n",totaldetudo);
printf(" _______________________________               \n");
system("pause");
system("cls");
break;
}//switch do cliente bilhete erro
}//if para caso o cliente nao tenho comprado bilhete de erro
else
{
    printf("U need to buy a ticket first\n");
    system("pause");
    system("cls");
}
break;
}//switch principal
}while(bilhete1.principal!=5);//o loop do primeiro do
}  //acaba void


#endif // ENGBILHETE_H_INCLUDED
