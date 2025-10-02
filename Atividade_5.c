/*01 - Criar um programa que permita o usuário informar o modelo, a
marca e o ano do carro. Pegue esses dados informados e
guarde em uma estrutura de dados.
– O modelo e a marca pode ser um char de 50 caracteres;
– O ano uma variável do tipo int;
– Crie uma estrutura para isso

02 - Neste outro exercício, crie um vetor com 5 elementos usando a
estrutura carros do exercício 01, ou seja, será um vetor de
carros. Limpe os dados de cada elemento e faça as
adequações necessárias para receber do usuário os 5 carros
com seus respectivos dados: modelo, marca e ano.
● Após receber os dados, finalizar o programa e mostrar todos
os carros inseridos e com uma saída bem formatada para
facilitar a visualização.

03 - Criar um programa que utilize o enum chamado nivel, definido
anteriormente, para verificar e avaliar o nível de ruído
informado pelo usuário;
● O usuário deve informar um valor inteiro, simbolizando o ruído
em decibéis;
● Por meio de uma função, verificar o valor e informar na tela se
o ruído é baixo (< BAIXO), médio (entre BAIXO e MEDIO), alto
(entre MEDIO e ALTO) ou muito alto*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct 
{
    char modelo[51];
    char marca[51];
    int ano;
    bool transferido;

} carro;


int main(void) {
    carro car[2];
    int tamVetor = sizeof(car) / sizeof(car[0]);
    int resultado_tranferido = 0;

    for (int i = 0; i < tamVetor; i++){   
        for (int j = 0; j < sizeof(car[i].marca); j++) 
        {
            car[i].marca[j] = '\0';
            car[i].modelo[j] = '\0';
        }
        car[i].ano = 0;
        car[i].transferido = false;
    }

    int i = 0;
    while (i < tamVetor) 
    {
        printf("\nInforme o modelo: ");
        fgets(car[i].modelo, sizeof(car[i].modelo), stdin);
        
        printf("Informe a marca: ");
        fgets(car[i].marca, sizeof(car[i].marca), stdin);
        
        printf("Informe o ano: ");
        scanf("%i", &car[i].ano);

        
        printf("Insira se foi transferido (1 para sim e 0 para não): ");
        scanf("%d", &resultado_tranferido);
        if(resultado_tranferido == 1){
            car[i].transferido = true;
        }
        else if(resultado_tranferido == 0){
            car[i].transferido = false;
        }
        else{
            printf("O valor inserido não eh correspondente!");
        }
    
        getchar();
        getchar();
        i++;
    }

   
        
        printf("\n### Carro %d ###\n", i + 1);
        printf(" Modelo: %s\r Marca: %s\r Ano: %i\r Transferido: %i", 
                car[i].modelo, 
                car[i].marca, 
                car[i].ano,
                car[i].transferido);
        printf("\n###############\n");
    

    return 0;
}
