#include <stdio.h>
int main(void){


    //ESTRUTURA DE RAPETIÇÃO - WHILE
    //Ele irá repetir o código enquanto a validação for verdadeira, quando for falsa, ele para o loop.
    /*
    int i = 0;
    while (i < 6) {
        printf("%d\n", i);
        i++;
    }*/




    //ESTRUTURA DE REPETIÇÃO
    /*
    int a = 6;

    do {
        printf("%d\n", a);
        a--;
    } while (a > 0);
    */


//ESTRUTURA DE REPETIÇÃO - FOR
/*
    int i, j;
    for (i = 1; i <= 2; ++i) {
        printf("For externo: %d\n", i);

        for (j = 1; j <= 3; ++j) {
            printf("FOR interno: %d\n", j);
        }
    }*/



//INSTRUÇÃO BREAK
//Após realizar a verificação do loop, caso a condicional aceite, executa o BREAK, o qual PARA a compilação
/*
    int i = 0;
    while (i  10){
        if (i == 4){
            break;
        }
    printf("%d\n", i);
    i++;
    }
*/



//INSTRUÇÃO CONTINUE
//Após realizar a verificação do loop, caso a condicional aceite, executa o CONTINUE, o qual PULA o valor da condicional e continua a compilação
/*
int i = 0;
    while (i<10){
        if (i == 4){
            i++;
            continue;
        }
    printf("%d\n", i);
    i++;
    }*/


//ARRAY UNIDIMENSIONAL
/*
    int meuArray[] = {15, 52, 59, 70};
    meuArray[0] = 33;
    printf("%i", meuArray[0]);

    char palavra[10] = {'d', 'i', 'a', ' ', 'o', 'i', '\0'};
    printf("%c", palavra[0]);
*/

int arrayld[] = {15, 52, 59, 70};
arrayld[0] = 33;
printf("%d", arrayld[0]);
int i;
for (i = 0; i < 4; i++) {
    arrayld[2] = 0;
}

}