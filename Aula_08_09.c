#include <stdio.h>
#include <string.h>

// função nesta área - DECLARAÇÃO

//TESTE 1  -  função dentro do int main
int somaInteiros(int a, int b);

//TESTE 2  -  função antes do int main
void montarTitulo() {
    printf("##################################\n");
    printf("###        Calculadora         ###\n");
    printf("##################################\n");
    printf("\n\n");
}

//TESTE 3  -  função com parâmetros 
void minhaFuncao (char nome[], int idade){
    printf("Olá %s, sua idade é: %d anos.\n", nome, idade);
}

//TESTE 4 - função com parâmetro, modificando-o
void minhaOutraFuncao(int vet[5]){
    for (int i = 0; i < 5; i++){
        printf("%d\n", vet[i]);
    }
}


int main (){

//Teste 1
    int s = somaInteiros(10, 30);
    printf("\nResultado: %d\n", s);
   
//Teste 2 
    montarTitulo(); // Eexemplo de chamada de função
    
//Teste 3
    minhaFuncao("Liam", 3);

//Teste 4 
    int vet[5] = {10, 20, 30 ,40, 50};
    vet [1] = 112;
    vet [2] = 1001;
    vet [ 4] = 39;
    minhaOutraFuncao(vet);
    
    return 0;
}


//IMPLEMENTAÇÃO da função
int somaInteiros(int a, int b){
    int soma = a + b;
    return soma;
}
