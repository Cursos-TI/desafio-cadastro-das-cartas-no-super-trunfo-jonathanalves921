#include <stdio.h>

int main() {
       
    int pontos_turisticos;
    int codigo;
    int populacao;
    float area;
    float PIB;
    char nome[50];

 printf("Digite o nome da cidade: \n");
 scanf("%s", &nome);

 printf("Digite o código da cidade: \n");
 scanf("%d", &codigo);

 printf("Digite a quantidade populacional da cidade: \n");
 scanf("%d", &populacao);

 printf("Digite a área da cidade: \n");
 scanf("%f", &area);

 printf("Digite o PIB da cidade: \n");
 scanf("%d", &PIB);

 printf("Digite o número de pontos turísticos da cidade \n");
 scanf("%d", &pontos_turisticos);

    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
