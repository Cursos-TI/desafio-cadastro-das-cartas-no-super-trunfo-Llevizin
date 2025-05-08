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
    float pib1_reais; // Declara uma variavel do tipo float
    int numero_pontos_turisticos1; // Declara uma variável do tipo int
    float densidade_populacional1; // Declara uma variáveldo do tipo float
    float pib_per_capita1; // Declara uma variável do tipo float

    char estado2; // Declara uma variável do tipo char
    char codigo_carta2[4]; // Declara um array de 4 caracteres
    char nome_cidade2[20]; // Declara um array de 20 caracteres
    int populacao2; // Declara uma variável do tipo int
    float area2; // Declara uma variável do tipo float
    float pib2; // Declara uma variável do tipo float
    float pib2_reais; // Declara uma variavel do tipo float
    int numero_pontos_turisticos2; // Declara uma variável do tipo int
    float densidade_populacional2; // Declara uma variáveldo do tipo float
    float pib_per_capita2; // Declara uma variável do tipo float


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
    pib1_reais = pib1 * 1e9; // Converte o PIB de bilhões para reais e armazena em "pib1_reais"

    printf("Quantidades de pontos turísticos na cidade: "); // Solicita a quantidade de pontos turísticos da cidade
    scanf("%d", &numero_pontos_turisticos1); // Lê a quantidade de pontos turísticos

    // Entrada de dados da Carta 2
    printf("\nDigite os dados da Carta 2\n"); // Exibe o título para a entrada da Carta 2

    printf("Digite a inicial do estado(letra de A a H): "); // Solicita a letra do estado 
    scanf(" %c", &estado2); // Lê a letra do estado

    printf("Digite a letra do estado seguida de um número de 01 a 04(ex: A01): "); // Solicita o código da cidade
    scanf("%3s", &codigo_carta2); // Lê o código com até 3 caracteres

    printf("Digite o nome da cidade (se for composto, digite tudo junto, ex: RioDeJaneiro): "); // Solicita o nome da cidade
    scanf("%s", &nome_cidade2); // Lê o nome da cidade 

    printf("Número de habitantes: "); // Solicita o número de habitantes
    scanf("%d", &populacao2); // Lê a população

    printf("Área da cidade em quilômetros quadrados: "); // Solicita a área da cidade em quilômetros quadrados
    scanf("%f", &area2); // Lê a área da cidade

    printf("O Produto Interno Bruto da cidade: "); // Solicita o valor do PIB
    scanf("%f", &pib2); // Lê o PIB
    pib2_reais = pib2 * 1e9; // Converte o PIB de bilhões para reais e armazena em "pib1_reais"

    printf("Quantidades de pontos turísticos na cidade: "); // Solicita a quantidade de pontos turísticos da cidade
    scanf("%d", &numero_pontos_turisticos2); // Lê a quantidade de pontos turísticos


    //Cálculo da Densidade Populacional e PIB per Capita - Carta 1
    densidade_populacional1 = (float) populacao1 / area1; // Divide a populacao1(convertida em float) pela area1 para obter a densidade populacional
    pib_per_capita1 = pib1_reais / (float) populacao1; // Converte o pib1 de bilhões para reais e divide pela populacao1(convertida em float) para obter o PIB per capita

    //Cálculo da Densidade Populacional e PIB per Capita - Carta 2
    densidade_populacional2 = (float) populacao2 / area2; // Divide a populacao2(convertida em float) pela area2 para obter a densidade populacional
    pib_per_capita2 = pib2_reais / (float) populacao2; // Converte o pib2 de bilhões para reais e divide pela populacao2(convertida em float) para obter o PIB per capita


    // Exibição de dados Carta 1
    printf("\nCarta 1:\n"); // Função usada pra exibir a mensagem "Carta 1"
    printf("Estado: %c\n", estado1); // Função usada para exibir os dados que estão armazenado na variável "estado1"
    printf("Código: %s\n", codigo_carta1); // Função usada para exibir os dados que estão armazenado na variável "codigo_carta1"
    printf("Nome da Cidade: %s\n", nome_cidade1); // Função usada para exibir os dados que estão armazenado na variável "nome_cidade1"
    printf("População: %d\n", populacao1); // Função usada para exibir os dados que estão armazenado na variável "populacao1"
    printf("Área: %.2f km²\n", area1); // Função usada para exibir os dados que estão armazenado na variável "area1"
    printf("PIB: %.2f bilhões de reais\n", pib1); // Função usada para exibir os dados que estão armazenado na variável "pib1"
    printf("Número de pontos turísticos: %d\n", numero_pontos_turisticos1); // Função usada para exibir os dados que estão armazenado na variável "numero_pontos_turisticos1"
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1 ); // Funçao usada para exibir os dados que estão armazenados na variável "densidade_pupulacional1"
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1); // Função usada para exibir os dados que estão armazenados na variável "pib_per_capita1"

    // Exibição de dados Carta 2
    printf("\nCarta 2:\n"); // Função usada pra exibir a mensagem "Carta 2"
    printf("Estado: %c\n", estado2); // Função usada para exibir os dados que estão armazenado na variável "estado2"
    printf("Código: %s\n", codigo_carta2); // Função usada para exibir os dados que estão armazenado na variável "codigo_carta2"
    printf("Nome da Cidade: %s\n", nome_cidade2); // Função usada para exibir os dados que estão armazenado na variável "nome_cidade2"
    printf("População: %d\n", populacao2); // Função usada para exibir os dados que estão armazenado na variável "populacao2"
    printf("Área: %.2f km²\n", area2); // Função usada para exibir os dados que estão armazenado na variável "area2"
    printf("PIB: %.2f bilhões de reais\n", pib2); // Função usada para exibir os dados que estão armazenado na variável "pib2"
    printf("Número de pontos turísticos: %d\n", numero_pontos_turisticos2); // Função usada para exibir os dados que estão armazenado na variável "numero_pontos_turisticos2"
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2 ); // Funçao usada para exibir os dados que estão armazenados na variável "densidade_pupulacional1"
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2); // Função usada para exibir os dados que estão armazenados na variável "pib_per_capita1"

    //Indica que o programa terminou
    return 0;

}