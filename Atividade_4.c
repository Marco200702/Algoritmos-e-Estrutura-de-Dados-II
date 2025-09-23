/**
    Este exercício visa desenvolver habilidades essenciais em C, 
    como manipulação de ponteiros, alocação dinâmica de memória, 
    validação de entradas e lógica de algoritmos simples, além de 
    compreender o endereçamento de memória. Esses conceitos são 
    fundamentais para a construção de sistemas complexos e aplicações 
    de alto desempenho. 

    Portanto, desenvolva um programa em linguagem C que simule o 
    controle de mensalidades de um curso. O programa deverá USAR FUNÇÕES
    e conter os seguintes itens principais:

    1. Perguntar ao usuário quantas mensalidades deseja registrar, 
       garantindo que o valor informado seja maior que zero.
       Caso contrário, o programa deve repetir a pergunta até que um 
       valor válido seja informado;
    2. Utilizar alocação dinâmica de memória com ponteiros para armazenar 
       os valores das mensalidades;
    3. Solicitar ao usuário que insira os valores de cada mensalidade, 
       também validando que cada valor seja maior que zero;
    4. Calcular a média dos valores das mensalidades;
    5. Exibir como resultado final:
            Todos os valores das mensalidades;
            O endereço de memória de cada valor armazenado;
            O valor da média calculada.
            Ex.: Parcela 01: R$ 425.50 [0xFAB12444]
                 ...
                 Parcela  n: R$ 585.50 [0xFAB124BB]
                 
                 Média das parcelas: R$ 597.74
 */

// A seguir tem-se um programa base para que vocês ajustem de acordo 
// o pedido anteriormente

#include <stdio.h>
#include <stdlib.h>

//Lê quantas parcelas das mensalidades o usuário necessita
//Retorna o resultado para o fim de alocar espaço.
int quantidade_mens(){
    int meses;
    printf("\n # # # CONTROLE DE MENSALIDADES # # #\n\n");
        
    while(meses<=0){
        printf("Insira quantas mensalidades existem: ");
        scanf("%d", &meses);
        
        if(meses <= 0){
            printf("VALOR INVÁLIDO! Insira um valora maior que 0");
        }
    }
    return meses;
}

//Armazena os valores no ponteiro. 
//O void é uma função que não retorna nada.
void armazenar_mens(float *mensalidades, int meses){
    for(int i = 0; i < meses; i++){
        do {
            printf("\nInsira o valor da mensalidade %i: R$ ", i + 1);
            scanf("%f", &mensalidades[i]);
            if(mensalidades[i] <= 0){
                printf("\nVALOR INVÁLIDO! Insira um valor maior que 0");
            }
        } while(mensalidades[i] <= 0);
    }
}

//Calcula a media das mensalidades e retorna elas
float calcular_media(float *mensalidades, int meses){
    float soma = 0;
    for(int i = 0; i < meses; i++){
        soma += mensalidades[i];
    }
    return soma/meses;
}

//Função para imprimir os resultados na tela
void imprimir_resul(float *mensalidades, int meses, float media){
    printf("\n\n- - - - - - - RESULTADOS - - - - - - -\n");
    for(int i = 0; i < meses; i++){
        printf("\nMensalidade %d no valor de R$%.2f - [%p]\n", i + 1, mensalidades[i], (void*)&mensalidades[i]);
    }
    printf("\nMEDIA DAS MENSALIDADES: R$%.2f", media);
}


int main() {
    
    int meses;
    float *mensalidades;
    float media;

    meses = quantidade_mens();
    
    
    mensalidades = (float*) calloc(meses, sizeof(float));
    if (mensalidades == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }
    
    armazenar_mens(mensalidades, meses);
    
    
    media = calcular_media(mensalidades, meses);
    
    
    imprimir_resul(mensalidades, meses, media);
    
    
    free(mensalidades);
    

    return 0;
}
