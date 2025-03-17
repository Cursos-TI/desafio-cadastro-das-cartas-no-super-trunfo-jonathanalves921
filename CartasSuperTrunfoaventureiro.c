#include <stdio.h>
#include <string.h>
// função para dar um nome dinâmico para uma variavel
typedef struct {
    int pontos_turisticos;
    int codigo;
    int populacao;
    float area;
    float PIB;
    char estado[50];
    char cidade[50];
} Carta;

// exibe os dados de uma carta junto com a densidade populacional e o pib per capita
void exibirCarta(Carta carta) {
    float densidade_populacional = carta.populacao / carta.area;
    float pib_per_capita = carta.PIB / carta.populacao;

    printf("Estado: %s\n", carta.estado);
    printf("Código: %d\n", carta.codigo);
    printf("Cidade: %s\n", carta.cidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f \n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.PIB / 1e9);  
    printf("Pontos Turísticos: %d\n", carta.pontos_turisticos);
    printf("Densidade Populacional: %.2f  \n", densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita);
    printf("\n");
}

int main() {
    // Dados da primeira carta
    Carta carta1;
    printf("Digite o nome do Estado:\n");
    scanf("%s", carta1.estado);

    printf("Digite o código da carta:\n");
    scanf("%d", &carta1.codigo);

    printf("Digite o nome da cidade:\n");
    scanf("%s", carta1.cidade);

    printf("Digite o PIB da cidade (em bilhões de reais):\n");
    scanf("%f", &carta1.PIB);
    carta1.PIB *= 1e9;  
    // converte o valor da variavel para bilhões
    // multiplica o valor para deixa-lo em bilhões

    printf("Digite a área da cidade (em km²):\n");
    scanf("%f", &carta1.area);

    printf("Digite a população da cidade:\n");
    scanf("%d", &carta1.populacao);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &carta1.pontos_turisticos);

    // Dados da segunda carta
    Carta carta2;
    printf("Digite o nome do Estado:\n");
    scanf("%s", carta2.estado);

    printf("Digite o código da carta:\n");
    scanf("%d", &carta2.codigo);

    printf("Digite o nome da cidade:\n");
    scanf("%s", carta2.cidade);

    printf("Digite o PIB da cidade (em bilhões de reais):\n");
    scanf("%f", &carta2.PIB);
    carta2.PIB *= 1e9;  // Convertendo bilhões para reais

    printf("Digite a área da cidade:\n");
    scanf("%f", &carta2.area);

    printf("Digite a população da cidade:\n");
    scanf("%d", &carta2.populacao);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &carta2.pontos_turisticos);

    // Exibindo as cartas
    exibirCarta(carta1);
    exibirCarta(carta2);

    return 0;
}