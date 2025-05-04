// Biblioteca que permite a entrada e saída de dados
#include <stdio.h> 

// Função Principal do Programa
int main(){

    char estado1; // Declara uma variável do tipo char
    char codigo_carta1[4]; // Declara um array de 4 caracteres
    char nome_cidade1[20]; // Declara um array de 20 caracteres
    int populacao1; // Declara uma variável do tipo int
    float area1; // Declara uma variável do tipo float
    float pib1; // Declara uma variável do tipo float
    int numero_pontos_turisticos1; // Declara uma variável do tipo int


    char estado2; // Declara uma variável do tipo char
    char codigo_carta2[4]; // Declara um array de 4 caracteres
    char nome_cidade2[20]; // Declara um array de 20 caracteres
    int populacao2; // Declara uma variável do tipo int
    float area2; // Declara uma variável do tipo float
    float pib2; // Declara uma variável do tipo float
    int numero_pontos_turisticos2; // Declara uma variável do tipo int



    // Entrada de dados da Carta 1
    printf("Digite dos dados da Carta 1\n"); // Função usada para exibir mensagens e dados na tela

    printf("Digite a inicial do estado(letra de A a H):"); // Função usada para exibir mensagens e dados na tela
    scanf(" %c", &estado1); // Função usada para ler dados de entrada do teclado

    printf("Digite o código do estado(ex:A01):"); // Função usada para exibir mensagens e dados na tela
    scanf("%3s", &codigo_carta1); // Função usada para ler dados de entrada do teclado

    printf("Digite o nome da cidade:"); // Função usada para exibir mensagens e dados na tela
    scanf("%s", &nome_cidade1); // Função usada para ler dados de entrada do teclado
   
    printf("Número de habitantes:"); // Função usada para exibir mensagens e dados na tela
    scanf("%d", &populacao1); // Função usada para ler dados de entrada do teclado

    printf("Área da cidade em quilômetros quadrados:"); // Função usada para exibir mensagens e dados na tela
    scanf("%f", &area1); // Função usada para ler dados de entrada do teclado

    printf("O Produto Interno Bruto da cidade:"); // Função usada para exibir mensagens e dados na tela
    scanf("%f", &pib1); // Função usada para ler dados de entrada do teclado

    printf("Quantidades de pontos turísticos na cidade:"); // Função usada para exibir mensagens e dados na tela
    scanf("%d", &numero_pontos_turisticos1); // Função usada para ler dados de entrada do teclado



    // Entrada de dados da Carta 2
    printf("\nDigite dos dados da Carta 2"); // Função usada para exibir mensagens e dados na tela

    printf("\nDigite a inicial do estado(letra de A a H):"); // Função usada para exibir mensagens e dados na tela
    scanf(" %c", &estado2); // Função usada para ler dados de entrada do teclado

    printf("Digite o código do estado(ex:A01):"); // Função usada para exibir mensagens e dados na tela
    scanf("%3s", &codigo_carta2); // Função usada para ler dados de entrada do teclado

    printf("Digite o nome da cidade:"); // Função usada para exibir mensagens e dados na tela
    scanf("%s", &nome_cidade2); // Função usada para ler dados de entrada do teclado
    
    printf("Número de habitantes:"); // Função usada para exibir mensagens e dados na tela
    scanf("%d", &populacao2); // Função usada para ler dados de entrada do teclado

    printf("Área da cidade em quilômetros quadrados:"); // Função usada para exibir mensagens e dados na tela
    scanf("%f", &area2); // Função usada para ler dados de entrada do teclado

    printf("O Produto Interno Bruto da cidade:"); // Função usada para exibir mensagens e dados na tela
    scanf("%f", &pib2); // Função usada para ler dados de entrada do teclado

    printf("Quantidades de pontos turísticos na cidade:"); // Função usada para exibir mensagens e dados na tela
    scanf("%d", &numero_pontos_turisticos2); // Função usada para ler dados de entrada do teclado


    
    // Exibição de dados Carta 1
    printf("\nCarta 1:\n"); // Função usada pra exibir a mensagem "Carta 1"
    printf("Estado: %c\n", estado1); //Função usada para exibir os dados que estão armazenado na variável "estado1"
    printf("Código: %s\n", codigo_carta1); //Função usada para exibir os dados que estão armazenado na variável "codigo_carta1"
    printf("Nome da Cidade: %s\n", nome_cidade1); //Função usada para exibir os dados que estão armazenado na variável "nome_cidade1"
    printf("Populção: %d\n", populacao1); //Função usada para exibir os dados que estão armazenado na variável "populacao1"
    printf("Área: %.2f km²\n", area1); //Função usada para exibir os dados que estão armazenado na variável "area1"
    printf("PIB: %.2f\n", pib1); //Função usada para exibir os dados que estão armazenado na variável "pib1"
    printf("Número de pontos turísticos: %d\n", numero_pontos_turisticos1); //Função usada para exibir os dados que estão armazenado na variável "numero_pontos_turisticos1"

    // Exibição de dados Carta 2
    printf("\nCarta 2:\n"); // Função usada pra exibir a mensagem "Carta 2"
    printf("Estado: %c\n", estado2); //Função usada para exibir os dados que estão armazenado na variável "estado2"
    printf("Código: %s\n", codigo_carta2); //Função usada para exibir os dados que estão armazenado na variável "codigo_carta2"
    printf("Nome da Cidade: %s\n", nome_cidade2); //Função usada para exibir os dados que estão armazenado na variável "nome_cidade2"
    printf("Populção: %d\n", populacao2); //Função usada para exibir os dados que estão armazenado na variável "populacao2"
    printf("Área: %.2f km²\n", area2); //Função usada para exibir os dados que estão armazenado na variável "area2"
    printf("PIB: %.2f\n", pib2); //Função usada para exibir os dados que estão armazenado na variável "pib2"
    printf("Número de pontos turísticos: %d\n", numero_pontos_turisticos2); //Função usada para exibir os dados que estão armazenado na variável "numero_pontos_turisticos2"

    //Indica que o programa terminou
    return 0;

}