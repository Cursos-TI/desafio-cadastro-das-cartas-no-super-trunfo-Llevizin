#include <stdio.h> // Biblioteca que permite a entrada e saída de dados
 
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
    printf("Digite os dados da Carta 1\n"); // Exibe o título para a entrada da Carta 1

    printf("Digite a inicial do estado(letra de A a H): "); // Solicita a letra do estado
    scanf(" %c", &estado1); // Lê a letra do estado

    printf("Digite a letra do estado seguida de um número de 01 a 04(ex: A01): "); // Solicita o código da cidade
    scanf("%3s", &codigo_carta1); // Lê o código com até 3 caracteres
    
    printf("Digite o nome da cidade (se for composto, digite tudo junto, ex: RioDeJaneiro): "); // Solicita o nome da cidade
    scanf("%s", &nome_cidade1); // Lê o nome da cidade 
   
    printf("Número de habitantes: "); // Solicita o número de habitantes
    scanf("%d", &populacao1); // Lê a população

    printf("Área da cidade em quilômetros quadrados: "); // Solicita a área da cidade em quilômetros quadrados
    scanf("%f", &area1); // Lê a área da cidade

    printf("O Produto Interno Bruto da cidade: "); // Solicita o valor do PIB
    scanf("%f", &pib1); // Lê o PIB

    printf("Quantidades de pontos turísticos na cidade: "); // Solicita a quantidade de pontos turísticos da cidade
    scanf("%d", &numero_pontos_turisticos1); // Lê a quantidade de pontos turísticos

    // Entrada de dados da Carta 2
    printf("\nDigite os dados da Carta 2\n"); // Exibe o título para a entrada da Carta 2

    printf("Digite a inicial do estado(letra de A a H): "); // Solicita a letra do estado
    scanf(" %c", &estado2); // Lê a letra do estado

    printf("Digite o código do estado(ex:A01): "); // Solicita o código da cidade
    scanf("%3s", &codigo_carta2); // Lê o código com até 3 caracteres

    printf("Digite o nome da cidade (se for composto, digite tudo junto, ex: RioDeJaneiro): "); // Solicita o nome da cidade
    scanf("%s", &nome_cidade2); // Lê o nome da cidade 

    printf("Número de habitantes: "); // Solicita o número de habitantes
    scanf("%d", &populacao2); // Lê a população
    
    printf("Área da cidade em quilômetros quadrados: "); // Solicita a área da cidade em quilômetros quadrados
    scanf("%f", &area2); // Lê a área da cidade

    printf("O Produto Interno Bruto da cidade: "); // Solicita o valor do PIB
    scanf("%f", &pib2); // Lê o PIB

    printf("Quantidades de pontos turísticos na cidade: "); // Solicita a quantidade de pontos turísticos da cidade
    scanf("%d", &numero_pontos_turisticos2); // Lê a quantidade de pontos turísticos


    // Exibição de dados Carta 1
    printf("\nCarta 1:\n"); // Função usada pra exibir a mensagem "Carta 1"
    printf("Estado: %c\n", estado1); // Função usada para exibir os dados que estão armazenado na variável "estado1"
    printf("Código: %s\n", codigo_carta1); // Função usada para exibir os dados que estão armazenado na variável "codigo_carta1"
    printf("Nome da Cidade: %s\n", nome_cidade1); // Função usada para exibir os dados que estão armazenado na variável "nome_cidade1"
    printf("População: %d\n", populacao1); // Função usada para exibir os dados que estão armazenado na variável "populacao1"
    printf("Área: %.2f km²\n", area1); // Função usada para exibir os dados que estão armazenado na variável "area1"
    printf("PIB: %.2f bilhões de reais\n", pib1); // Função usada para exibir os dados que estão armazenado na variável "pib1"
    printf("Número de pontos turísticos: %d\n", numero_pontos_turisticos1); // Função usada para exibir os dados que estão armazenado na variável "numero_pontos_turisticos1"

    // Exibição de dados Carta 2
    printf("\nCarta 2:\n"); // Função usada pra exibir a mensagem "Carta 2"
    printf("Estado: %c\n", estado2); // Função usada para exibir os dados que estão armazenado na variável "estado2"
    printf("Código: %s\n", codigo_carta2); // Função usada para exibir os dados que estão armazenado na variável "codigo_carta2"
    printf("Nome da Cidade: %s\n", nome_cidade2); // Função usada para exibir os dados que estão armazenado na variável "nome_cidade2"
    printf("População: %d\n", populacao2); // Função usada para exibir os dados que estão armazenado na variável "populacao2"
    printf("Área: %.2f km²\n", area2); // Função usada para exibir os dados que estão armazenado na variável "area2"
    printf("PIB: %.2f bilhões de reais\n", pib2); // Função usada para exibir os dados que estão armazenado na variável "pib2"
    printf("Número de pontos turísticos: %d\n", numero_pontos_turisticos2); // Função usada para exibir os dados que estão armazenado na variável "numero_pontos_turisticos2"

    //Indica que o programa terminou
    return 0;

}