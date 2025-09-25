#include <stdio.h>
#include <string.h>
#include <stdbool.h>


//AULA 22/09 e AULA 24/09 ---- STRUCT  E  ENUM


/*
struct carro {

    //Membros que são definidos (escopo)
    char marca[50];     // membro 1 da estrutura
    char modelo[50];    // membro 2
    int ano;            // membro 3
    bool tranferido;    // membro 4
};*/


//Utilizando o typedef
typedef struct {
    char rua[213];
    int numero;
    char bairo[150];
    char cep[9];
} endereco;

int main(){

    //Para chama-lo, utiliza-se:
    //struct carro meu_carro;
     
    endereco minhaCasa = {"Tr Cuiaba", 293,"Jd Primavera", "85963142"};
    endereco minhaCasa2;
    minhaCasa2 = minhaCasa;

    printf("\n%s, %i, %s, %s", minhaCasa.rua, minhaCasa.numero, minhaCasa.bairo, minhaCasa.cep);
    printf("\n%s, %i, %s, %s", minhaCasa2.rua, minhaCasa2.numero, minhaCasa2.bairo, minhaCasa2.cep);



typedef struct{

    //Membros que são definidos (escopo)
    char marca[50];     // membro 1 da estrutura
    char modelo[50];    // membro 2
    int ano;            // membro 3
    bool tranferido;    // membro 4
} carro;




}