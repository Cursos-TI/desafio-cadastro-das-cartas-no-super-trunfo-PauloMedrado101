#include <stdio.h>
#include <windows.h>



#include <windows.h> // Adicione esta linha para usar funções do Windows

int main() {
     
    SetConsoleOutputCP(65001); // Configura a saída para UTF-8
    SetConsoleCP(65001);       // Configura a entrada para UTF-8 (útil para scanf)

    //estado 01 : São Paulo 
    // cidade 01: São Paulo
    // pib da primeira cidade 829 bilhões de reais 
    // área da primeira cidade 1.521 km²
    // população da primeira cidade 11.451.999 habitantes 

    //estado02: Rio de Janeiro
    //Cidade 02: Rio de Janeiro
    //PIB da segunda cidade 359,6 Bilhões de reais 
    // área da segunda cidade 1.200 km²
    // população da segunda cidade 6.729.894 habitantes 

    char estado[20]; // qual e o estado 
    char estado2[20];
    char codigo[29]; // definindo o codigo da carta 
    char codigo2[29];
    char nomeDaCidade[50]; // qual a cidade 
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
    scanf(" %[^\n]", nomeDaCidade); // ler a entrada do usuário, permitindo espaços 
    printf("Digite a população da cidade: \n");// solicitar ao usuário que digite a população do estado 
    scanf("%d", &populacao);// ler a entrada do usuário, permitindo espaços 
    printf("Digite a área da cidade: \n");// solicitar ao usuário que digite a área do estado 
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

    float densidadepopulacional1 = populacao / area;
    float densidadepopulacional2 = populacao2 / area2;
    float pibpercapita1 = PIB / populacao;
    float pibpercapita2 = PIB2 / populacao2;

    printf("\n-----primeira carta-----\n");
    printf("Estado: %s \n", estado); 
    printf("Código da carta: %s \n", codigo);
    printf("nome da cidade: %s \n", nomeDaCidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f bilhões de reais \n", PIB);
    printf("Pontos turísticos: %d \n", pontosTuristicos);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidadepopulacional1);
    printf("PIB per capita: %.2f reais por habitante\n", pibpercapita1);



    printf("\n-----segunda carta-----\n");
    printf("Estado: %s \n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s \n", nomeDaCidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", PIB2);
    printf("Pontos turísticos: %d \n", pontosTuristicos2);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidadepopulacional2);
    printf("PIB per capita: %.2f reais por habitante\n", pibpercapita2);

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


