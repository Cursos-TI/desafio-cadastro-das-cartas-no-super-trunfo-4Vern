#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char  estado;
    int   cidade;
    char  codcart[4];
    int   populacao;
    float area;
    float PIB;
    int   turismo;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf ("Informe a letra do estado: \n");
    scanf  ("%c" , &estado);

    printf ("Informe o numero da cidade: \n");
    scanf  ("%d" , &cidade);

    printf ("Informe a populacao da cidade: \n");
    scanf  ("%d" , &populacao);

    printf ("informe a area em Km²: \n");
    scanf  ("%f" , &area);

    printf ("Informe o PIB da cidade: \n");
    scanf  ("%f" , &PIB);

    printf ("Informe a quantidade de pontos turisticos: \n");
    scanf  ("%d" , &turismo);

    //Junta os codigos do estado e da cidade//

    snprintf (codcart, sizeof(codcart), "%c%02d", estado, cidade);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf ("Estado: %c\n" , estado);
    printf ("Cidade: %d\n" , cidade);
    printf ("Codigo da carta: %s\n", codcart);
    printf ("Populacao: %d\n" , populacao);
    printf ("Área em Km²: %.2f\n", area);
    printf ("PIB: %.2f\n", PIB);
    printf ("Pontos turisticos: %d\n" , turismo);


    return 0;
}
