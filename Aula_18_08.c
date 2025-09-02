#include <stdio.h>
#include <stdbool.h> 
int main(void){

    /*int n = 0;
    puts("Meu progarama de teste");
    puts("Insira um numero: ");
    scanf("%d", &n);
    getchar();
    printf("Usuario, informe seu nome: ");
    fgets(nome,)

    printf("O usuario digitou: %d", n);*/
    
    
    int x = 10, y = 4;
    printf("\n\n ### Meu Programa ###\n\n");
    printf(" -> A soma .............: %i \n", x +y);
    printf(" -> O resto da divisão .: %i \n", x % y);
    
    
    printf(" -> Saída AND logico: %i \n", (x < 5 && y >=4));
    printf(" -> Saida NOT logico: %i \n", !(x<y));
    return 0;
}


