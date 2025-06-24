#include <stdio.h>
#include <locale.h>
#include <windows.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
int main() {
    SetConsoleOutputCP(65001); // Configura a saída do console para UTF-8
    setlocale(LC_ALL, "Portuguese");



    char estado[20]; // definindo o tamanho maximo do estado 
    char estado2[20];
    char codigo[29]; // definindo o tamanho maximo do codigo 
    char codigo2[29];
    char nomedaCidade[50]; // definindo o tamanho maximo do nome da cidade 
    char nomeDaCidade2[50];
    int populacao; // definido o tipo de dado inteiro da população 
    int populacao2;
    float area; // definindo o tipo de dado float da área 
    float area2;
    float PIB; // definindo o tipo de dado float do PIB
    float PIB2;
    int pontosTuristicos; // definindo o tipo de dado inteiro dos ppontos turisticos 
    int pontosTuristicos2;

    printf("Digite o estado: \n"); // solicitar ao usuário que digite o estado 
    scanf(" %[^\n]", estado);// ler a entrada do usuário, permitindo espaços 
    printf("Digite o código da carta: \n"); // solicitar ao usuário que digite o codigo da carta 
    scanf(" %[^\n]", codigo); // ler a entrada do usuário, permitindo espaços 
    printf("Digite o nome da primeira cidade: \n"); // solicitar ao usuário que digite o nome da cidade
    scanf(" %[^\n]", nomedaCidade); // ler a entrada do usuário, permitindo espaços 
    printf("Digite a população da cidade: \n");// solicitar ao usuário que digite a população do estado 
    scanf("%d", &populacao);// ler a entrada do usuário, permitindo espaços 
    printf("Digite a área do estado: \n");// solicitar ao usuário que digite a área do estado 
    scanf("%f", &area);// ler a entrada do usuário, permitindo espaços
    printf("Digite o PIB do estado: \n");// solicitar ao usuário que digit o PIB pdo estado
    scanf("%f", &PIB);// ler a entrada do usuário, permitindo espaços 
    printf("Digite a quantidade de pontos turísticos do cidade: \n"); // solicitar ao usuario que digite a quantidade de pontos turisticos da cidade
    scanf("%d", &pontosTuristicos);// ler a entrada do usuário, permitido espaços 

    printf("Digite o segundo estado: \n");
    scanf(" %[^\n]", estado2);
    printf("Digite o segundo código da carta:\n");
    scanf(" %[^\n]", codigo2);
    printf("Digite o nome da segunda cidade: \n");
    scanf(" %[^\n]", nomeDaCidade2);
    printf("Digite a população da segunda cidade: \n");
    scanf("%d", &populacao2);
    printf("Digite a segunda área: \n");
    scanf("%f", &area2);
    printf("Digite o segundo PIB: \n");
    scanf("%f", &PIB2);
    printf("Digite a segunda quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);   

    printf("Estado: %s \n", estado); 
    printf("Código da carta: %s \n", codigo);
    printf("nome da cidade: %s \n", nomedaCidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f bilhões de reais \n", PIB);
    printf("Pontos turísticos: %d \n", pontosTuristicos);

    printf("Estado: %s \n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s \n", nomeDaCidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", PIB2);
    printf("Pontos turísticos: %d \n", pontosTuristicos2);

    return 0;
}
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

