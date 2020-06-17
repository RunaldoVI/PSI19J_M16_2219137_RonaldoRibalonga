#ifndef MENUBILHETES_H_INCLUDED
#define MENUBILHETES_H_INCLUDED
struct bilhete{
        int principal;
        int quantidade;
    };
struct bilhete bilhete;

struct menuadicional{
       int escolha;
       int deseja;
       int deseja1;
       int desejo;
       int vip;
       int precovip;
       int viprestantes;
};
struct menuadicional menuadicional;

void bilhetes()
{
    int comida[]={0,3,2,5,5,15,9,8,5,7,2};
    int bebida[]={0,2,2,2,2,2,3,3,2,3,1};
    int extra[]={0,2,1,1,1,1};
    int b,c,d,restante,resto,precobilhetes,totaldetudo;
    int total=0;
    int totalbilhetes=300;
  menuadicional.viprestantes=30;


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
printf("                                Bem Vindo Ao Menu de TugaBilhetes\n");
printf("                                   ___________________________      \n");
printf("                                  |                           |     \n");
printf("                                  | 1-Bilhetes                |     \n");
printf("                                  | 2-Comida&Bebida           |     \n");
printf("                                  | 3-VIP                     |     \n");
printf("                                  | 4-Mudar as Cores          |     \n");
printf("                                  | 5-Encerrar Compra         |     \n");
printf("                                  |___________________________|     \n");
scanf("%i",&bilhete.principal);
system("pause");
system("cls");
switch(bilhete.principal)
{
    case 1:
    tuga();

printf("    ____________________________________                \n");
printf("   |                                    |               \n");
printf("   |    Bilhetes                        |               \n");
printf("   |    Pais: Polônia                   |               \n");
printf("   |    Cidade: Varsóvia                |               \n");
printf("   |    Tipo de musica: Beatbox         |               \n");
printf("   |    Custo de bilhete: 70 Euros      |               \n");
printf("   |    Bilhetes Disponiveis: %i       |               \n",totalbilhetes);
printf("   |____________________________________|               \n");
printf("\nQuantos bilhetes gostaria de comprar?\n");
scanf("%i",&bilhete.quantidade);
precobilhetes=bilhete.quantidade*70;
if(totalbilhetes>=bilhete.quantidade)
{
    totalbilhetes=totalbilhetes-bilhete.quantidade;
    system("pause");
    system("cls");
}
else
{
printf("Erro já nao existem mais bilhetes disponiveis\n");
system("pause");
system("cls");
}
break;
default:printf("\n");
if(bilhete.quantidade>=1)
{
    switch(bilhete.principal)
    {

case 2:
    do{
    printf("  _______________________________________   ______________________________                 \n");
    printf(" |               1-Comidas               | |        2-Bebidas             |                \n");
    printf(" |_______________________________________| |______________________________|                \n");
    printf(" | 1-Hamburger- 3 Euros                  | | 1-Pepsi- 2 Euros             |                \n");
    printf(" | 2-Pizza- 2 Euros                      | | 2-Coca-Cola- 2 Euros         |                \n");
    printf(" | 3-Lasanha- 5 Euros                    | | 3-Fanta- 2 Euros             |                \n");
    printf(" | 4-Arroz De polvo- 5 Euros             | | 4-Sumol- 2 Euros             |                \n");
    printf(" | 5-Sushi- 15 Euros Por 20 Peças        | | 5-Cerveja- 2 Euros           |                \n");
    printf(" | 6-Bitoque- 9 Euros                    | | 6-Compal- 3 Euros            |                \n");
    printf(" | 7-Esparguete A bolenhesa- 8 Euros     | | 7-Milkshake Banana- 3 Euros  |                \n");
    printf(" | 8-Tacos- 5 Euros 2 Tacos              | | 8-Ice Tea- 2 Euros           |                \n");
    printf(" | 9-Carbonara- 7 Euros                  | | 9-Limonada- 3 Euros          |                \n");
    printf(" | 10-Cachorro Quente- 2 Euros           | | 10-Agua- 1 Euro              |                \n");
    printf(" | 0-Nada                                | | 0-Nada                       |                \n");
    printf(" |_______________________________________| |______________________________|                \n");
    printf("                                            ______________________________                \n");
    printf("                                           |          4-Extras            |               \n");
    printf("                                           |______________________________|               \n");
    printf("                                           | 1-Batatas Fritas- 2 euros    |               \n");
    printf("                                           | 2-Ketchup 250mgl- 1 Euro     |               \n");
    printf("                                           | 3-Mostarda 250mgl- 1 euro    |               \n");
    printf("                                           | 4-Maionese 250mgl- 1 euro    |               \n");
    printf("                                           | 5-Pipocas  300g-1 euro       |               \n");
    printf("                                           | 0-Nada                       |               \n");
    printf("                                           |______________________________|               \n");
    printf("Qual comida deseja?\n");
    scanf("%i",&b);
    if(b>10)
    {
        printf("Erro\n");
        system("pause");
        system("cls");
        break;
    }
    else
    {

    }
    printf("Que bebida deseja?\n");
    scanf("%i",&c);
    if(c>10)
    {
        printf("Erro\n");
        system("pause");
        system("cls");
        break;
    }
    else
    {

    }
    printf("Deseja algum extra?\n");
    scanf("%i",&d);
    if(d>10)
    {
        printf("Erro\n");
        system("pause");
        system("cls");
        break;
    }
    else
    {

    }
    total=total+comida[b]+bebida[c]+extra[d];
    printf("Deseja mais alguma coisa?\n");
    printf("1-Sim\n");
    printf("2-Não\n");
    scanf("%i",&menuadicional.deseja);
    system("pause");
    system("cls");
    }while(menuadicional.deseja!=2);
    break;
case 3:

    printf("Deseja adicionar VIP ao seu pedido?\n");
    printf(" ___________________________\n");
    printf("| 1-Informações sobre o VIP |\n");
    printf("| 2-VIP                     |\n");
    printf("| 3-Voltar ao menu          | \n");
    printf("|  VIP Restantes %i         |\n",menuadicional.viprestantes);
    printf("|___________________________|\n");
    scanf("%i",&menuadicional.desejo);
    switch (menuadicional.desejo)
    {
    case 1:
        printf("O nosso VIP da acesso aos bastidores para conhecer os seus artitistas favoritos e da acesso a primeira fila por apenas\nmais 10 Euros\n");
        system("pause");
        system("cls");
        break;

    case 2:
        printf("Quantos VIPS gostaria de adicionar?\n");
        scanf("%i",&menuadicional.vip);
    if(menuadicional.viprestantes>=menuadicional.vip)
    {


        if(menuadicional.viprestantes>=menuadicional.desejo)
    {
        if(menuadicional.vip<=bilhete.quantidade)
        {
        menuadicional.viprestantes=menuadicional.viprestantes-menuadicional.vip;
        menuadicional.precovip=menuadicional.vip*10;
        system("pause");
        system("cls");
        }
        else
        {
        printf("Nao podes comprar mais vips do que bilhetes\n");
        system("pause");
        system("cls");
        }
    }
    }
        else
    {
        printf("Ja nao ha mais vips disponveis\n");
        system("pause");
        system("cls");
    }
        break;
    case 3:
        system("pause");
        system("cls");
    break;
    default: printf("Erro\n");
        system("pause");
        system("cls");
    }
    break;
    break;
    case 4:
        cores();
        break;
case 5:
    totaldetudo=total+precobilhetes+menuadicional.precovip;
    FILE*ficheiro;
ficheiro=(fopen("Talao.txt","w"));
fprintf(ficheiro,"---------Talao---------\n");
fprintf(ficheiro,"Preço Comida  %i\n",total);
fprintf(ficheiro,"----------------\n");
fprintf(ficheiro,"Preço Bilhetes %i\n",precobilhetes);
fprintf(ficheiro,"----------------\n");
fprintf(ficheiro,"Preço VIP %i\n",menuadicional.precovip);
fprintf(ficheiro,"----------------\n");
fprintf(ficheiro,"Total %i\n",totaldetudo);
fclose(ficheiro);
printf(" _______________________________               \n");
printf("             Talao                             \n");
printf(" _______________________________               \n");
printf(" Quantidade de bilhetes %i                     \n",bilhete.quantidade);
printf(" O preço da comida sera %i                     \n",total);
printf(" O preço dos bilhetes sera %i                  \n",precobilhetes);
printf(" O preço do VIP sera %i                        \n",menuadicional.precovip);
printf(" Total     =     %i  Euros                     \n",totaldetudo);
printf("_______________________________                \n");
system("pause");
system("cls");
break;
}//switch do cliente bilhete erro
}//if para caso o cliente nao tenho comprado bilhete de erro
else
{
    printf("Precisas de comprar um bilhete primeiro\n");
    system("pause");
    system("cls");
}
}//switch principal
}while(bilhete.principal!=5);//o loop do primeiro do
}  //acaba void








#endif // MENUBILHETES_H_INCLUDED
