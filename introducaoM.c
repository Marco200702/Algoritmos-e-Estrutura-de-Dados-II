#include <stdio.h>

int main(void){
    //printf ou puts
    printf("\n\t\"Hello\" World\n");



    //TESTE COM VARIAVEL

    float resultado = 5 / 2;
    int num1 = 9;
    float num2 = 9.99;

    printf("\nResultado: %f\n", resultado);
    printf("\nResultado: %i\n", num1);
    printf("\nResultado: %f\n", num2);

    //TESTE 2
    
    float num3 = (float) 5 / 2;
    char ch = (char) num1;
    printf("Num3: %.2f", num3);
     

    return 0;
}