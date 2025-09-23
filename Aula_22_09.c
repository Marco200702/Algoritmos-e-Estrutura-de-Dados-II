#include <stdio.h>
#include <string.h>

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

    printf("\n%s, %i, %s, %s", minhaCasa.rua, minhaCasa.numero, minhaCasa.bairo, minhaCasa.cep);
}