#include <stdio.h>
#include <string.h>
#include <stdbool.h>

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

typedef struct{
    char marca[50];
    char modelo[50];
    int ano;
    bool transferido;
} carro;





        