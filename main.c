/*Autor: Matheus Fidelis da Silva*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

#define tam_sala_componentes 6

char sala[][tam_sala_componentes] = {{"   11"},
                                    {"   21"},
                                    {"   22"},
                                    {"   34"},
                                    {"   34"}};

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    /* The breaking bad */

    /*Construcao mapa sala*/
    int valor1 = 1, valor2 = 1;
    char walker = 'W';
    int local_atual_linha = 0, local_atual_coluna = 0;
    int item1 = 0, item2 = 0, item3 = 0, item4 = 0;

    sala[local_atual_linha][local_atual_coluna] = walker;


    char movi;
    int termino_mapa_sala = 0;

    do
    {
        system("cls");
         /*Apresentando mapa sala que contém materiais.*/

        printf("\xDB\xDB\xDB\xDB\xDB|PORTA|\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB \n");
        for(int linha = 0; linha < tam_sala_componentes-1; linha++){
            printf("\xDB\t");
            for(int coluna = 0; coluna < tam_sala_componentes-1; coluna++){
                printf("%c\t\xDB\t", sala[linha][coluna]);
        }
        printf("\n");
        }

        printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
        /*apresentando matriz*/

        movi = getch();
        /* code */
        switch(movi){
            case 'w':
                //Colocando limitador de mapa
                if(local_atual_linha == 0 && local_atual_coluna != 0){
                    break;
                }
                if(local_atual_coluna == 0 && local_atual_linha == 0 && (item1+item2+item3+item4) == 4){
                    printf("\n\t**********************************\n\t    Parabens! Missao Concluida!\n\t**********************************\n");
                    termino_mapa_sala = 1;
                    sleep(3);
                }
                else if(local_atual_coluna == 0 && local_atual_linha == 0 && (item1+item2+item3+item4) < 4)
                {
                    printf("\n\t*************************************\n\t Voce nao coletou todos os produtos!\n\t*************************************\n");
                    sleep(2);
                    break;
                }
                if(sala[local_atual_linha-1][local_atual_coluna] != ' '){
                    if(sala[local_atual_linha-1][local_atual_coluna] == '1')
                    {
                        item1++;
                        sala[local_atual_linha][local_atual_coluna] = ' ';
                        local_atual_linha--;
                        sala[local_atual_linha][local_atual_coluna] = walker;
                    }
                    else if(sala[local_atual_linha-1][local_atual_coluna] == '2')
                    {
                        item2++;
                        sala[local_atual_linha][local_atual_coluna] = ' ';
                        local_atual_linha--;
                        sala[local_atual_linha][local_atual_coluna] = walker;
                    }
                    else if(sala[local_atual_linha-1][local_atual_coluna] == '3')
                    {
                        item3++;
                        sala[local_atual_linha][local_atual_coluna] = ' ';
                        local_atual_linha--;
                        sala[local_atual_linha][local_atual_coluna] = walker;
                    }
                    else if(sala[local_atual_linha-1][local_atual_coluna] == '4')
                    {
                        item4++;
                        sala[local_atual_linha][local_atual_coluna] = ' ';
                        local_atual_linha--;
                        sala[local_atual_linha][local_atual_coluna] = walker;
                    }

                }
                else
                {
                    sala[local_atual_linha][local_atual_coluna] = ' ';
                    local_atual_linha--;
                    sala[local_atual_linha][local_atual_coluna] = walker;
                }
                break;
            case 's':
                    //Colocando limitador de mapa
                    if(local_atual_linha == 4){
                        break;
                    }
                    if(sala[local_atual_linha+1][local_atual_coluna] != ' '){
                        if(sala[local_atual_linha+1][local_atual_coluna] == '1')
                        {
                            item1++;
                            sala[local_atual_linha][local_atual_coluna] = ' ';
                            local_atual_linha++;
                            sala[local_atual_linha][local_atual_coluna] = walker;
                        }
                        else if(sala[local_atual_linha+1][local_atual_coluna] == '2')
                        {
                            item2++;
                            sala[local_atual_linha][local_atual_coluna] = ' ';
                            local_atual_linha++;
                            sala[local_atual_linha][local_atual_coluna] = walker;
                        }
                        else if(sala[local_atual_linha+1][local_atual_coluna] == '3')
                        {
                            item3++;
                            sala[local_atual_linha][local_atual_coluna] = ' ';
                            local_atual_linha++;
                            sala[local_atual_linha][local_atual_coluna] = walker;
                        }
                        else if(sala[local_atual_linha+1][local_atual_coluna] == '4')
                        {
                            item4++;
                            sala[local_atual_linha][local_atual_coluna] = ' ';
                            local_atual_linha++;
                            sala[local_atual_linha][local_atual_coluna] = walker;
                        }

                    }
                    else
                    {
                        sala[local_atual_linha][local_atual_coluna] = ' ';
                        local_atual_linha++;
                        sala[local_atual_linha][local_atual_coluna] = walker;
                    }
                    break;
            case 'd':
                    //Colocando limitador de mapa
                    if(local_atual_coluna == 4){
                        break;
                    }
                    if(sala[local_atual_linha][local_atual_coluna+1] != ' ')
                    {
                        if(sala[local_atual_linha][local_atual_coluna+1] == '1')
                        {
                            item1++;
                            sala[local_atual_linha][local_atual_coluna] = ' ';
                            local_atual_coluna++;
                            sala[local_atual_linha][local_atual_coluna] = walker;
                        }
                        else if(sala[local_atual_linha][local_atual_coluna+1] == '2')
                        {
                            item2++;
                            sala[local_atual_linha][local_atual_coluna] = ' ';
                            local_atual_coluna++;
                            sala[local_atual_linha][local_atual_coluna] = walker;
                        }
                        else if(sala[local_atual_linha][local_atual_coluna+1] == '3')
                        {
                            item3++;
                            sala[local_atual_linha][local_atual_coluna] = ' ';
                            local_atual_coluna++;
                            sala[local_atual_linha][local_atual_coluna] = walker;
                        }
                        else if(sala[local_atual_linha][local_atual_coluna+1] == '4')
                        {
                            item4++;
                            sala[local_atual_linha][local_atual_coluna] = ' ';
                            local_atual_coluna++;
                            sala[local_atual_linha][local_atual_coluna] = walker;
                        }

                    }
                    else
                    {
                        sala[local_atual_linha][local_atual_coluna] = ' ';
                        local_atual_coluna++;
                        sala[local_atual_linha][local_atual_coluna] = walker;
                    }
                    break;
            case 'a':
                    //Colocando limitador de mapa
                    if(local_atual_coluna == 0){
                        break;
                    }
                    if(sala[local_atual_linha][local_atual_coluna-1] != ' '){
                        if(sala[local_atual_linha][local_atual_coluna-1] == '1')
                        {
                            item1++;
                            sala[local_atual_linha][local_atual_coluna] = ' ';
                            local_atual_coluna--;
                            sala[local_atual_linha][local_atual_coluna] = walker;
                        }
                        else if(sala[local_atual_linha][local_atual_coluna-1] == '2')
                        {
                            item2++;
                            sala[local_atual_linha][local_atual_coluna] = ' ';
                            local_atual_coluna--;
                            sala[local_atual_linha][local_atual_coluna] = walker;
                        }
                        else if(sala[local_atual_linha][local_atual_coluna-1] == '3')
                        {
                            item3++;
                            sala[local_atual_linha][local_atual_coluna] = ' ';
                            local_atual_coluna--;
                            sala[local_atual_linha][local_atual_coluna] = walker;
                        }
                        else if(sala[local_atual_linha][local_atual_coluna-1] == '4')
                        {
                            item4++;
                            sala[local_atual_linha][local_atual_coluna] = ' ';
                            local_atual_coluna--;
                            sala[local_atual_linha][local_atual_coluna] = walker;
                        }

                    }
                    else
                    {
                        sala[local_atual_linha][local_atual_coluna] = ' ';
                        local_atual_coluna--;
                        sala[local_atual_linha][local_atual_coluna] = walker;
                    }
                    break;
            }
            if(item1 > 1 || item2 > 1 || item3 > 1 || item4 > 1)
            {
                printf("\n\nVOCE FOI PEGO!\n\n***************FIM DO JOGO!!***************\n\n");
                return 0;
            }
    } while(termino_mapa_sala == 0);

    /*Construcao mapa estacionamento*/
    int carro_certo = 0, saindo_estacionamento = 0;
    char mapa_estacionamento[3][10];
    char carros[] = {"01234567"};
    /*preenchimento do estacionamento carros*/
    for(int linha = 0; linha < 3; linha++){
        for(int coluna = 0, carro = 0; coluna < 10; coluna++, carro++){
            if(linha == 0 && coluna > 2){
                mapa_estacionamento[linha][coluna] = carros[carro];
            }
            else
            {
                mapa_estacionamento[linha][coluna] = ' ';
                carro = 0;
            }
        }
    }
    mapa_estacionamento[local_atual_linha][local_atual_coluna] = walker;

    do
    {
        system("cls");

         /*Impressao*/
        printf("\xDB\xDB|PORTA|\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
        for(int linha = 0; linha < 3; linha++){

            if(linha == 2){
                for(int contador1 = 0; contador1 < 1; contador1++){
                     printf("|        |");
                    for(int contador2 = 0; contador2 < 9; contador2++){
                        printf("       |");
                    }
                    printf("\n");
                }

            }
            printf("| ");
            for(int coluna = 0; coluna < 10; coluna++)
            {
                if(linha == 1){
                    printf("   %c   ", mapa_estacionamento[linha][coluna]);
                    if(coluna == 9) printf("|");else{printf(" ");}
                }
                else{
                printf("   %c   |", mapa_estacionamento[linha][coluna]);
                }
            }
            printf("\n");
            if(linha == 0){
                for(int contador1 = 0; contador1 < 2; contador1++){
                     printf("|        |");
                    for(int contador2 = 0; contador2 < 9; contador2++){
                        printf("       |");
                    }
                    printf("\n");
                }
                }
            if(linha == 0){
                printf("\n");
            }
            if(linha == 1){
                printf("\n");
            }
            if(linha == 2){
                for(int contador1 = 0; contador1 < 1; contador1++){
                     printf("|        |");
                    for(int contador2 = 0; contador2 < 9; contador2++){
                        printf("       |");
                    }
                    printf("\n");
                }

            }

        }
        printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB|SAIDA|\xDB\n");
        movi = getch();
        switch (movi)
        {
        case 'w':
            if(local_atual_linha == 0){
                break;
            }
            if(mapa_estacionamento[local_atual_linha-1][local_atual_coluna] != '5' && local_atual_linha == 1 && local_atual_coluna > 2)
            {
                printf("------------------------------\n Esse nao eh seu carro Walter!\n------------------------------");
                sleep(2);
                break;
            }
            else
            {   if(mapa_estacionamento[local_atual_linha-1][local_atual_coluna] == '5'){
                printf("Voce chegou ao seu carro.");
                sleep(2);
                carro_certo = 1;
            }
                mapa_estacionamento[local_atual_linha][local_atual_coluna] = ' ';
                local_atual_linha--;
                mapa_estacionamento[local_atual_linha][local_atual_coluna] = walker;
            }
            break;
        case 's':
            if(local_atual_linha == 2 && local_atual_coluna != 9){
                break;
            }
            if(local_atual_linha == 2 && local_atual_coluna == 9 && carro_certo == 1)
            {
                printf("\n***Saindo do estacionamento.***\n");
                sleep(2);
                saindo_estacionamento = 1;
            }
            else if(local_atual_linha == 2 && local_atual_coluna == 9 && carro_certo == 0)
            {
                printf("\n***Voce precisa pegar seu carro Walter!!***\n");
                sleep(2);
            }
            mapa_estacionamento[local_atual_linha][local_atual_coluna] = ' ';
            local_atual_linha++;
            mapa_estacionamento[local_atual_linha][local_atual_coluna] = walker;
            break;
        case 'd':
            if(local_atual_coluna == 9){
                break;
            }
            if(local_atual_linha == 0 && local_atual_coluna > 1){
                if(carro_certo){
                    printf("\n***NAO PODE PASSAR POR CIMA DE UM CARRO!**\n");
                    sleep(2);
                    break;

                }
                else
                {
                printf("------------------------------\n Esse nao eh seu carro Walter!\n------------------------------");
                sleep(2);
                break;
                }

            }
            mapa_estacionamento[local_atual_linha][local_atual_coluna] = ' ';
            local_atual_coluna++;
            mapa_estacionamento[local_atual_linha][local_atual_coluna] = walker;
            break;
        case 'a':
            if(local_atual_coluna == 0){
                break;
            }
            if(local_atual_linha == 0 && local_atual_coluna > 2){
                if(carro_certo){
                    printf("\n***NAO PODE PASSAR POR CIMA DE UM CARRO!**\n");
                    sleep(2);
                    break;

                }
                else
                {
                printf("------------------------------\n Esse nao eh seu carro Walter!\n------------------------------");
                sleep(2);
                break;
                }

            }

            mapa_estacionamento[local_atual_linha][local_atual_coluna] = ' ';
            local_atual_coluna--;
            mapa_estacionamento[local_atual_linha][local_atual_coluna] = walker;
            break;
        default:
            break;
        }
        /* code */
    } while(saindo_estacionamento == 0);

    /*Terceiro Mapa!*/
    char mapa_cidade[8][10];

    /*paredes*/
    for(int contador = 6; contador < 10; contador++){
        mapa_cidade[0][contador] = '\xDB';
    }
    for(int contador = 1; contador < 5; contador++){
        mapa_cidade[1][contador] = '\xDB';
    }
    for(int contador = 1; contador < 9; contador++){
        mapa_cidade[2][contador] = '\xDB';
    }
    for(int contador = 1; contador < 10; contador++){
        if(contador!= 5 && contador !=8){
        mapa_cidade[4][contador] = '\xDB';
        }
    }
    for(int contador = 2; contador < 10; contador++){
        if(contador!= 5 && contador !=8){
        mapa_cidade[5][contador] = '\xDB';
        }
    }
    for(int contador = 0; contador < 10; contador++){
        if(contador!= 5 && contador !=8 && contador != 1 && contador != 3){
        mapa_cidade[6][contador] = '\xDB';
        }
    }
    mapa_cidade[7][0] = '\xDB';
    for(int linha = 0; linha < 8; linha++){
        for(int coluna = 0; coluna < 10; coluna++){
            if(mapa_cidade[linha][coluna] != '\xDB'){
                mapa_cidade[linha][coluna] = ' ';
            }
        }
    }

    mapa_cidade[0][0] = walker;
    mapa_cidade[1][5] = '4';
    mapa_cidade[1][9] = 'P';
    mapa_cidade[2][0] = '3';
    mapa_cidade[2][9] = '1';
    mapa_cidade[4][5] = 'P';
    mapa_cidade[5][5] = '2';
    mapa_cidade[6][3] = 'J';
    mapa_cidade[7][9] = 'S';


   /*Impressao do mapa*/
   local_atual_linha = 0;
   local_atual_coluna = 0;
   int policia = 0, estou_com_jesse = 0, fim_de_jogo = 0;
    do{
        policia = 0;
        system("cls");
        for(int linha = 0; linha < 8; linha++){
            for(int coluna = 0; coluna < 10; coluna++){
                if(mapa_cidade[linha][coluna] == '\xDB'){
                    printf("%c%c%c", mapa_cidade[linha][coluna], mapa_cidade[linha][coluna], mapa_cidade[linha][coluna]);
                }else if(mapa_cidade[linha][coluna] == ' '){
                    printf("%c%c%c", mapa_cidade[linha][coluna], mapa_cidade[linha][coluna], mapa_cidade[linha][coluna]);
                }else{
                    printf(" %c ", mapa_cidade[linha][coluna]);
            }
        }
        printf("\n");
        }
        printf("Item 1 - %d\tItem 2 - %d\tItem 3 - %d\tItem 4 - %d\n", item1,item2,item3,item4);

        movi = getch();


        switch (movi)
        {
        case 'w':
            if(mapa_cidade[local_atual_linha-1][local_atual_coluna] == '\xDB' || local_atual_linha == 0)
            {
                break;
            }
            if(mapa_cidade[local_atual_linha-1][local_atual_coluna] == 'P')
            {
                policia = rand() % 100;
                //sendo preso
                if(policia >= 50){
                    printf("\n Voce foi preso!!\n  ***GAME OVER***\n");
                    printf("\n\n");
                    return 0;
                }
                else
                {
                    printf("\nVoce perdeu todo os materiais.\n");
                    sleep(3);
                    item1 = item2 = item3 = item4 = 0;
                    //mapa_cidade[local_atual_linha][local_atual_coluna] = 'P';
                    //local_atual_linha--;
                    //mapa_cidade[local_atual_linha][local_atual_coluna] = walker;
                }
            }
            if(mapa_cidade[local_atual_linha-1][local_atual_coluna] == '3')
            {
                mapa_cidade[local_atual_linha][local_atual_coluna] = ' ';
                local_atual_linha--;
                mapa_cidade[local_atual_linha][local_atual_coluna] = walker;
                item3++;
            }
            if(mapa_cidade[local_atual_linha-1][local_atual_coluna] == '1')
            {
                mapa_cidade[local_atual_linha][local_atual_coluna] = ' ';
                local_atual_linha--;
                mapa_cidade[local_atual_linha][local_atual_coluna] = walker;
                item1++;

            }
            if(mapa_cidade[local_atual_linha-1][local_atual_coluna] == 'J')
            {
                mapa_cidade[local_atual_linha][local_atual_coluna] = ' ';
                local_atual_linha--;
                mapa_cidade[local_atual_linha][local_atual_coluna] = walker;
                estou_com_jesse = 1;

            }
            if(mapa_cidade[local_atual_linha-1][local_atual_coluna] == '2')
            {
                mapa_cidade[local_atual_linha][local_atual_coluna] = ' ';
                local_atual_linha--;
                mapa_cidade[local_atual_linha][local_atual_coluna] = walker;
                item2++;

            }
            if(mapa_cidade[local_atual_linha-1][local_atual_coluna] == ' ')
            {
                mapa_cidade[local_atual_linha][local_atual_coluna] = ' ';
                local_atual_linha--;
                mapa_cidade[local_atual_linha][local_atual_coluna] = walker;

            }
            break;
        case 's':
            if(local_atual_linha == 7 || mapa_cidade[local_atual_linha+1][local_atual_coluna] == '\xDB')
            {
                break;
            }
            if(mapa_cidade[local_atual_linha+1][local_atual_coluna] == 'P')
            {
                policia = rand() % 100;
                //sendo preso
                if(policia >= 50)
                {
                    printf("\n Voce foi preso!!\n  ***GAME OVER***\n");
                    printf("\n\n");
                    return 0;
                }
                else
                {
                    printf("\nVoce perdeu todo os materiais.\n");
                    sleep(3);
                    item1 = item2 = item3 = item4 = 0;
                    //mapa_cidade[local_atual_linha][local_atual_coluna] = 'P';
                    //local_atual_linha++;
                    //mapa_cidade[local_atual_linha][local_atual_coluna] = walker;
                }
            }
            if(mapa_cidade[local_atual_linha+1][local_atual_coluna] == '3')
            {
                mapa_cidade[local_atual_linha][local_atual_coluna] = ' ';
                local_atual_linha++;
                mapa_cidade[local_atual_linha][local_atual_coluna] = walker;
                item3++;
            }
            if(mapa_cidade[local_atual_linha+1][local_atual_coluna] == '1')
            {
                mapa_cidade[local_atual_linha][local_atual_coluna] = ' ';
                local_atual_linha++;
                mapa_cidade[local_atual_linha][local_atual_coluna] = walker;
                item1++;
            }
            if(mapa_cidade[local_atual_linha+1][local_atual_coluna] == '2')
            {
                mapa_cidade[local_atual_linha][local_atual_coluna] = ' ';
                local_atual_linha++;
                mapa_cidade[local_atual_linha][local_atual_coluna] = walker;
                item2++;
            }
            if(mapa_cidade[local_atual_linha+1][local_atual_coluna] == '4'){
                mapa_cidade[local_atual_linha][local_atual_coluna] = ' ';
                local_atual_linha++;
                mapa_cidade[local_atual_linha][local_atual_coluna] = walker;
                item4++;
            }
            if(mapa_cidade[local_atual_linha+1][local_atual_coluna] == ' ')
            {
                mapa_cidade[local_atual_linha][local_atual_coluna] = ' ';
                local_atual_linha++;
                mapa_cidade[local_atual_linha][local_atual_coluna] = walker;
            }
            break;
        case 'd':
            if(mapa_cidade[local_atual_linha][local_atual_coluna+1] == '\xDB' || local_atual_coluna == 9)
            {
                break;
            }
            if(mapa_cidade[local_atual_linha][local_atual_coluna+1] == 'P')
            {
                policia = rand() % 100;
                //sendo preso
                if(policia >= 50){
                    printf("\n Voce foi preso!!\n  ***GAME OVER***\n");
                    printf("\n\n");
                    return 0;
                }
                else
                {
                    printf("\nVoce perdeu todo os materiais.\n");
                    sleep(3);
                    item1 = item2 = item3 = item4 = 0;
                    //mapa_cidade[local_atual_linha][local_atual_coluna] = 'P';
                    //local_atual_coluna++;
                    //mapa_cidade[local_atual_linha][local_atual_coluna] = walker;
                }
            }
            if(mapa_cidade[local_atual_linha][local_atual_coluna+1] == 'S')
            {
                if(estou_com_jesse == 1 && item1 >= 1 && item2 >= 1 && item3 >= 1 && item4 >= 1){
                    system("cls");
                    printf("\n\n************************************\n   Conseguimos sair da cidade!\n************************************\n");
                    sleep(3);
                    fim_de_jogo = 1;

                }
                else if(mapa_cidade[1][5] == ' ' && mapa_cidade[2][0] == ' ' && mapa_cidade[2][9] == ' ' && mapa_cidade[5][5] == ' ' && (item4+item1+item2+item3 < 4) && estou_com_jesse == 1)
                {
                    printf("\n\n*************Infelizmente hoje nao teremos producao.*************\n\n");
                    sleep(2);
                    fim_de_jogo = 1;
                }
                if(estou_com_jesse == 0)
                {
                    printf("\nVoce precisa pegar jesse\n");
                    sleep(2);
                }

            }
            if(mapa_cidade[local_atual_linha][local_atual_coluna+1] == ' ')
            {
                mapa_cidade[local_atual_linha][local_atual_coluna] = ' ';
                local_atual_coluna++;
                mapa_cidade[local_atual_linha][local_atual_coluna] = walker;

            }
            break;
        case 'a':
            if(mapa_cidade[local_atual_linha][local_atual_coluna-1] == '\xDB' || local_atual_coluna == 0)
            {
                break;
            }
            else
            {
                mapa_cidade[local_atual_linha][local_atual_coluna] = ' ';
                local_atual_coluna--;
                mapa_cidade[local_atual_linha][local_atual_coluna] = walker;

            }
            break;
        default:
            break;
        }

    }while(fim_de_jogo == 0);
    system("cls");
     /*movimentacao carrinho*/
    for(int contador = 0; contador < 100; contador++){
        system("cls");
        for(int contador1 = 0; contador1 < contador; contador1++){
           printf(" ");
        }
        printf(" \xDC\xDC\xDB\xDB\xDB\xDB\xDC\xDC");
        printf("\n");
        for(int contador2 = 0; contador2 < contador; contador2++){
            printf(" ");
       }
        printf(" \xDFO\xDF\xDF\xDF\xDFO\xDF\n\n");
        //Sleep(10);
    }
    system("cls");
    if((item1+item2+item3+item4) == 8){
        printf("\n\nHoje a producao vai ser dobrada!");
        sleep(3);
    }if((item1+item2+item3+item4) > 4 && (item1+item2+item3+item4) < 8){
        printf("\n\nHoje a producao vai ser normal!");
        sleep(3);
    }

    /*movimentacao carrinho
    for(int contador = 0; contador < 100; contador++){
        system("cls");
        for(int contador1 = 0; contador1 < contador; contador1++){
           printf(" ");
        }
        printf(" \xDC\xDC\xDB\xDB\xDB\xDB\xDC\xDC");
        printf("\n");
        for(int contador2 = 0; contador2 < contador; contador2++){
            printf(" ");
       }
        printf(" \xDFO\xDF\xDF\xDF\xDFO\xDF\n\n");
        //Sleep(10);
    }*/


    return 0;
}
