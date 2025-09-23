#include <stdio.h>
#include <string.h>
#include <math.h>


//ATIVIDADE 3
//Crie uma calculadora utilizando 4 cálculos escolhidos importando a biblioteca math.h
//Utilize os cálculos através de funções, no qual o usuário escolherá qual quer utilizar com os valores que ele inseriu.


/* #1 double pow(double x, double y)
RETORNA: x elevado a y.
RECEBE: dois valores do tipo double, x e y, em que x será a base e y será o expoente.

   #2 double sqrt(double x)
RETORNA: a raiz quadrada de x ou NaN se x for negativo.
RECEBE: x, um valor do tipo double.

   #3 double asin(double x)
RETORNA: o seno de um ângulo, tal que, -1 <= seno <= 1.
RECEBE: o ângulo, em radianos, cujo seno foi informado como parâmetro ou NaN se o argumento estiver fora do domínio de entrada.

   #4 double acos(double x)
RETORNA: o cosseno de um ângulo; isto é, um número entre -1 e 1, tal que -1<=cosseno<=1
RECEBE: o ângulo, em radianos, do cosseno que foi informado como parâmetro ou NaN se o argumento estiver fora do domínio de entrada.
*/



float elevado(float valor_1, float valor_2){
    float resultado = pow(valor_1, valor_2);
    return resultado;
}

float raiz(float valor_1){
    float resultado = sqrt(valor_1);
    return resultado;
}

float seno(float valor_1){
    float resultado = asin(valor_1);
    return resultado;
}

float coss(float valor_1){
    float resultado = acos(valor_1);
    return resultado;
}



int main(){
    float valor_1;
    float valor_2;
    
    int opcao;
    printf("##################################\n");
    printf("###        Calculadora         ###\n");
    printf("##################################\n");
    printf("\n");
    
    printf("1 - Calcular x elevado a y\n");
    printf("2 - Calcular a raiz quadrada de x\n");
    printf("3 - Calcular o seno do angulo x\n");
    printf("4 - Calcular o cosseno do angulo x\n");
    printf("\tEscolha a operacao: ");
    scanf("%d", &opcao);
    
    if (opcao == 1){
        printf("Insira o valor de x (base): ");
        scanf("%f", &valor_1);
        printf("Insira o valor de y (expoente): ");
        scanf("%f", &valor_2);
        printf("O resultado da operacao e: %f\n", elevado(valor_1, valor_2));
    }

    else if (opcao == 2){
        printf("Insira o valor de x: ");
        scanf("%f", &valor_1);
        printf("O resultado da operacao e: %f\n", raiz(valor_1));
    }

    else if (opcao == 3){
        printf("Insira o valor de x: ");
        scanf("%f", &valor_1);
        printf("O resultado da operacao e: %f\n", seno(valor_1));
    }

    else if (opcao == 4){
        printf("Insira o valor de x: ");
        scanf("%f", &valor_1);
        printf("O resultado da operacao e: %f\n", coss(valor_1));
    }
    
    return 0;
}

