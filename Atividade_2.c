#include <stdio.h>
#include <string.h>

//ATIVIDADE
//zerar cada posição das strings
//mostrar o conteúdo vazio delas;
//pegar via tarminal, o nome completo (str1) e nome da cidade (str2);
//mostrar o tamanho de cada string.


int main() {
    char str1[30];  // Vetor unidimensional de tamanho 30 para adicionar o nome
    char str2[25];  // Vetor unidimencionsl
    int i;

    // Zerar cada posição das strings
    for(i = 0; i < sizeof(str1); i++) {
        str1[i] = '\0';
    }
    for(i = 0; i < sizeof(str2); i++) {
        str2[i] = '\0';
    }

    // Mostrar conteúdo vazio
    printf("Conteudo vazio de str1: \"%s\"\n", str1);
    printf("Conteudo inicial de str2: \"%s\"\n", str2);

    // Ler os dados via terminal
    printf("\nDigite o nome completo: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Digite o nome da cidade: ");
    fgets(str2, sizeof(str2), stdin);

    // Remover o '\n' do final do fgets
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Mostrar o tamanho de cada string
    printf("\nNome completo: %s (tamanho: %zu)", str1, strlen(str1));
    printf("\nCidade: %s (tamanho: %zu)\n\n", str2, strlen(str2));

    return 0;
}
