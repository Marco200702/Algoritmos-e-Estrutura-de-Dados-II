#include <stdio.h>
int main(void){
//ATIVIDADE 1  
/*Criar um programa capaz de receber 3 valores de mensalidade de um usuário;
* Solicitar ao usuário informar se haverá ou não incidência de taxa (*1.27):
* Resultados (saida no terminal):
- Mostrar o nome do usuário;
- Mostrar a média dos valores da mensalidade sem taxa;
- Mostrar a média dos valores com taxa aplicada.
*/

    float parc1;
    float parc2;
    float parc3;
    float resultado;
    int taxa;
    char nome[100];

    printf("\nDigite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    printf("\nInsira o valor da primeira parcela: ");
    scanf("%f", &parc1);

    printf("Insira o valor da segunda parcela: ");
    scanf("%f", &parc2);

    printf("Insira o valor da terceira parcela: ");
    scanf("%f", &parc3);

    printf("A mensalidade tera taxa? (1 = sim / 0 = nao): ");
    scanf("%i", &taxa);

    if (taxa == 1){
        resultado = (parc1 + parc2 + parc3)/3;
        resultado *= 1.27;
        printf("\nA media das parcelas com a taxa incluida do %s eh: %f\n\n", nome, resultado);
    }
    else if (taxa == 0){
        resultado = (parc1 + parc2 + parc3)/3;
        printf("\nA media das parcelas sem taxa do %s eh: %f\n\n", nome, resultado);
    }
    else{
        printf("\nMensalidade incondizente!\n\n");
    }

}