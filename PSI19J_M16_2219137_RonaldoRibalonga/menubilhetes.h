#ifndef MENUBILHETES_H_INCLUDED
#define MENUBILHETES_H_INCLUDED

void bilhetes()
{
    int bilhete;
    int quantidade;
    int escolha;
    int comida;
    int bebida;
    int metu;
    int deseja;
    int extra;
    int a;



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
printf("                                Bem Vindo Ao Menu de TugaBilhetes\n");
printf("Deseja ver o nosso menu de bilhetes?\nSe sim digite 1\nSe não digite 2\n");
scanf("%i",&bilhete);
system("pause");
system("cls");
if (bilhete==1)
{
    tuga();

printf("    ____________________________________                \n");
printf("   |                                    |               \n");
printf("   |    Bilhetes                        |               \n" );
printf("   |    Pais: Polônia                   |               \n");
printf("   |    Cidade: Varsóvia                |               \n");
printf("   |    Tipo de musica: Hip-Hop         |               \n");
printf("   |    Custo de bilhete: 45-70Euros    |               \n");
printf("   |    Direito a menu a escolha        |               \n");
printf("   |____________________________________|               \n");
printf("Quantos bilhetes gostaria de comprar?\n");
scanf("%i",&quantidade);
if(quantidade>0)
{
    printf("  ___________________________   ___________________________  _________________________________                      \n");
    printf(" |          1-Comidas        | |        2-Bebidas          ||             3-Menus             |                     \n");
    printf(" |___________________________| |___________________________||_________________________________|                     \n");
    printf(" | 1-Hamburger               | | 1-Pepsi                   || 1-Comida a escolha+Bebida       |                     \n");
    printf(" | 2-Pizza                   | | 2-Coca-Cola               || 2-Comida+Batata frita           |                     \n");
    printf(" | 3-Lasanha                 | | 3-Fanta                   || 3-Comida+bebida+batata          |                     \n");
    printf(" | 4-Arroz De polvo          | | 4-Sumol                   || 4-2 Comidas a escolha           |                     \n");
    printf(" | 5-Sushi                   | | 5-Cerveja                 || 5-Comida + 2 Bebidas            |                     \n");
    printf(" | 6-Bitoque                 | | 6-Compal                  || 6-2 Comida + batatas fritas     |                     \n");
    printf(" | 7-Esparguete A bolenhesa  | | 7-Milkshake               || 7-2 Comidas + 2Bebidas+ 2Extras |                     \n");
    printf(" | 8-Tacos                   | | 8-Ice Tea                 || 8-Menu Familia                  |                     \n");
    printf(" | 9-Carbonara               | | 9-Limonada                || 9-Menu Amigos                   |                     \n");
    printf(" | 10-Cachorro Quente        | | 10-Agua                   || 10-Menu Escolha                 |                     \n");
    printf(" |___________________________| |___________________________||_________________________________|                     \n");
    printf("                                                                  ____________________________                      \n");
    printf("                                                                 |           4-Extras         |                     \n");
    printf("                                                                 |____________________________|                     \n");
    printf("                                                                 |1-Batatas Fritas            |                     \n");
    printf("                                                                 |2-Ketchup                   |                     \n");
    printf("                                                                 |3-Mostarda                  |                     \n");
    printf("                                                                 |4-Maionese                  |                     \n");
    printf("                                                                 |5-Molho BBQ                 |                     \n");
    printf("                                                                 |6-Pão De alho               |                     \n");
    printf("                                                                 |____________________________|                     \n");
    printf("Menu Familia- 4 comidas e 4 bebidas a escolha.\n");
    printf("Menu Amigos- 5 Comidas a escolha e 5 cervejas.\n");
    printf("Menu Escolha-Acerte o menu do dia e ganhe outro de graça + bebida\n");
    printf("\nO que deseja escolher?\n");
    scanf("%i",&escolha);
    switch(escolha)
    {
        case 1:printf("Qual comida deseja?\n");
               scanf("%i",&comida);
               printf("Deseja mais alguma coisa?\n");
               printf("1-Sim\n");
               printf("2-Não\n");
               scanf("%i",&deseja);
               do{
               printf("O que deseja mais?\n");
    printf("  ___________________________   ___________________________  ____________________________               \n");
    printf(" |          1-Comidas        | |        2-Bebidas          ||         3-Menus            |              \n");
    printf(" |___________________________| |___________________________||____________________________|              \n");
    printf(" | 1-Hamburger               | | 1-Pepsi                   || 1-Comida a escolha+Bebida  |              \n");
    printf(" | 2-Pizza                   | | 2-Coca-Cola               || 2-Comida+1 extra           |              \n");
    printf(" | 3-Lasanha                 | | 3-Fanta                   || 3-Comida+bebida+1 extra    |              \n");
    printf(" | 4-Arroz De polvo          | | 4-Sumol                   || 4-2 Comidas a escolha      |              \n");
    printf(" | 5-Sushi                   | | 5-Cerveja                 || 5-Comida + 2 Bebidas       |              \n");
    printf(" | 6-Bitoque                 | | 6-Compal                  || 6-2 Comida + 1 extra       |              \n");
    printf(" | 7-Esparguete A bolenhesa  | | 7-Milkshake               || 7-2 comidas+2 bebida+1extra|              \n");
    printf(" | 8-Tacos                   | | 8-Ice Tea                 || 8-Menu Familia             |              \n");
    printf(" | 9-Carbonara               | | 9-Limonada                || 9-Menu Amigos              |              \n");
    printf(" | 10-Cachorro Quente        | | 10-Agua                   || 10-Menu Escolha            |              \n");
    printf(" |___________________________| |___________________________||___________________________ |              \n");
    printf("                                                             ____________________________               \n");
    printf("                                                            |           4-Extras         |              \n");
    printf("                                                            |____________________________|              \n");
    printf("                                                            |1-Batatas Fritas            |              \n");
    printf("                                                            |2-Ketchup                   |              \n");
    printf("                                                            |3-Mostarda                  |              \n");
    printf("                                                            |4-Maionese                  |              \n");
    printf("                                                            |5-Molho BBQ                 |              \n");
    printf("                                                            |6-Pão De alho               |              \n");
    printf("                                                            |____________________________|              \n");
    printf("Menu Familia- 4 comidas e 4 bebidas a escolha.\n");
    printf("Menu Amigos- 5 Comidas a escolha e 5 cervejas.\n");
    printf("Menu Escolha-Acerte o menu do dia e ganhe outro de graça + bebida\n");
    scanf("%i",&escolha);
    switch(escolha)
    {
        case 1:printf("Que Comida deseja?");
               scanf("%i",&comida);
               printf("Deseja mais alguma coisa?\n");
               printf("1-Sim\n");
               printf("2-Não\n");
               scanf("%i",&deseja);
               break;
        case 2:printf("Que bebida deseja?");
               scanf("%i",&bebida);
               printf("Deseja mais alguma coisa?\n");
               printf("1-Sim\n");
               printf("2-Não\n");
               scanf("%i",&deseja);
               break;
        case 3:printf("Que menu deseja?\n");
               scanf("%i",&metu);
               switch (metu)
               {
            case 1:printf("Que Comida deseja?\n");
                   scanf("%i",&comida);
                   printf("Que bebida deseja?\n");
                   scanf("%i",&bebida);
                   printf("Deseja mais alguma coisa?\n");
                   printf("1-Sim\n");
                   printf("2-Não\n");
                   scanf("%i",&deseja);
                   system("pause");
                   system("cls");
                   break;
            case 2:printf("Que Comida deseja?\n");
                   scanf("%i",&comida);
                   printf("Qual extra deseja?\n");
                   scanf("%i",&extra);
                   printf("1-Sim\n");
                   printf("2-Não\n");
                   scanf("%i",&deseja);
                   system("pause");
                   system("cls");
                   break;
            case 3:printf("Que Comida deseja?\n");
                   scanf("%i",&comida);
                   printf("Que bebida deseja?\n");
                   scanf("%i",&bebida);
                   printf("Qual extra deseja?\n");
                   scanf("%i",&extra);
                   printf("Deseja mais alguma coisa?\n");
                   printf("1-Sim\n");
                   printf("2-Não\n");
                   scanf("%i",&deseja);
                   system("pause");
                   system("cls");
                   break;
            case 4:printf("Que Comida deseja?\n");
                   scanf("%i",&comida);
                   printf("Qual a outra que comida que deseja?\n");
                   scanf("%i",&comida);
                   printf("1-Sim\n");
                   printf("2-Não\n");
                   scanf("%i",&deseja);
                   system("pause");
                   system("cls");
                   break;
            case 5:printf("Que Comida deseja?\n");
                   scanf("%i",&comida);
                   printf("Que bebida deseja?\n");
                   scanf("%i",&bebida);
                   printf("Qual a outra bebida deseja?\n");
                   scanf("%i",&bebida);
                   printf("1-Sim\n");
                   printf("2-Não\n");
                   scanf("%i",&deseja);
                   system("pause");
                   system("cls");
                   break;
            case 6:printf("Que Comida deseja?\n");
                   scanf("%i",&comida);
                   printf("Qual a outra que comida que deseja?\n");
                   scanf("%i",&comida);
                   printf("Qual extra deseja?\n");
                   scanf("%i",&extra);
                   printf("1-Sim\n");
                   printf("2-Não\n");
                   scanf("%i",&deseja);
                   system("pause");
                   system("cls");
                   break;
            case 7:printf("Que Comida deseja?\n");
                   scanf("%i",&comida);
                   printf("Qual a outra que comida que deseja?\n");
                   scanf("%i",&comida);
                   printf("Que bebida deseja?\n");
                   scanf("%i",&bebida);
                   printf("Qual a outra bebida deseja?\n");
                   scanf("i",&bebida);
                   printf("Qual extra deseja?\n");
                   scanf("%i",&extra);
                   printf("Qual o outro extra que deseja?\n");
                   scanf("%i",&extra);
                   printf("1-Sim\n");
                   printf("2-Não\n");
                   scanf("%i",&deseja);
                   system("pause");
                   system("cls");
                   break;
            case 8:
                    printf("Digite a %i comida que deseja?\n",a+1);
                    scanf("%i",&comida);
                    printf("Digite a %i bebida que deseja?\n",a+1);
                    scanf("%i",&bebida);

                   break;
                   default:printf("Erro\n");

               }

    }



               }while(deseja!=2);
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
}






#endif // MENUBILHETES_H_INCLUDED
