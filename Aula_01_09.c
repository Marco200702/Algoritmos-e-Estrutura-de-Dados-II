#include <stdio.h>
#include <string.h>

int main(void){


//############# PONTEIROS ##################


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
    int arr [8] = {10, 20, 30, 40, 50, 60, 70, 80};
    for (int i = 0; i < 8; i++) {
        printf("%p\n", &arr[i]);
    }

}