#include <stdio.h>
#include <string.h>

int main(void){


//################### PONTEIROS ########################


// ###### EXEMPLO 1 #####
    /*
    int idade = 41;
    int* ptr = &idade;

    printf("\n%d", idade);
    printf("\n%p\n", &idade);
    printf("%p\n", ptr);
    */


// ##### EXEMPLO 2 #####
    /*
    int x = 5, y = 7, z = 0;
    z = x * y;
    int* p = NULL;
    p = &z;
    printf("\n%i", z);
    printf("\n%p", &z);
    printf("\n%p", p);
    */


// ##### EXEMPLO 3 #####
/*
    int idade = 41;
    int* ptr = &idade;

    printf("\n%p", ptr);
    printf("\n%d", idade);
    printf("\n%d\n", *ptr);
    */
    

// ##### EXEMPLO 4 #####
    /*
    int arr [8] = {10, 20, 30, 40, 50, 60, 70, 80};
    for (int i = 0; i < 8; i++) {
        printf("%p\n", &arr[i]);
    }
    */
    

//###### EXEMPLO 5 ######
    /*
    int arr[4] = {10, 20, 30, 40};
    printf("%p\n", arr);
    printf("%p\n", &arr[0]);
    printf("%d\n", *arr);
    */



// ##### EXEMPLO 6 #####
    /*
    int arr[4] = {10, 20, 30, 40};
    int *ptr = arr;
    for (int i = 0; i < 4; i++) {
        printf("%d\n", *(ptr + i));
    }
    */


    /*
    int arr[4] = {10, 20, 30, 40};
    *arr = 7;
    *(arr + 1) = 14;
    for (int i = 0; i < 4; i++) {
        printf("%d\n", *(arr + i));
    }

    free(arr); //limpa o espaço
    */

    char str[] = "programacao";
    char letra = 'a';
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == letra) {
            printf("Letra '%c' encontrada na posição %d\n", letra, i);
        }
    }


}