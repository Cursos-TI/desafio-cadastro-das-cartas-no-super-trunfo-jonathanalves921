#include <stdio.h>
#include <string.h>
// função para dar um nome dinâmico à uma variável
typedef struct {
    int pontos_turisticos;
    int codigo;
    unsigned long int populacao;
    float area;
    float PIB;
    char estado[50];
    char cidade[50];
} Carta;

// Função para exibir os dados de uma carta juntamente com a densidade populacional e o PIB per capita
void exibirCarta(Carta carta) {
    float densidade_populacional = carta.populacao / carta.area;
    float pib_per_capita = carta.PIB / carta.populacao;

    printf("Estado: %s\n", carta.estado);
    printf("Código: %d\n", carta.codigo);
    printf("Cidade: %s\n", carta.cidade);
    printf("População: %lu\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.PIB / 1e9);  // Convertendo reais para bilhões 
    printf("Pontos Turísticos: %d\n", carta.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita);
    printf("\n");
}

// Função para calcular o Super Poder de uma carta
float calcularSuperPoder(Carta carta) {
    float densidade_populacional = carta.populacao / carta.area;
    float pib_per_capita = carta.PIB / carta.populacao;
    float super_poder = carta.populacao + carta.area + carta.PIB + carta.pontos_turisticos + pib_per_capita + (1 / densidade_populacional);
    return super_poder;
}

// Função para comparar dois valores float e imprimir o resultado
void compararAtributos(char* atributo, float valor1, float valor2) {
    int resultado = valor1 > valor2 ? 1 : 0;
    printf("%s: Carta %d venceu (%d)\n", atributo, resultado ? 1 : 2, resultado);
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
    carta1.PIB *= 1e9;  // Convertendo bilhões para reais

    printf("Digite a área da cidade (em km²):\n");
    scanf("%f", &carta1.area);

    printf("Digite a população da cidade:\n");
    scanf("%lu", &carta1.populacao);

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

    printf("Digite a área da cidade (em km²):\n");
    scanf("%f", &carta2.area);

    printf("Digite a população da cidade:\n");
    scanf("%lu", &carta2.populacao);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &carta2.pontos_turisticos);

    // Exibindo as cartas
    exibirCarta(carta1);
    exibirCarta(carta2);

    // Calculando o Super Poder de cada carta
    float super_poder1 = calcularSuperPoder(carta1);
    float super_poder2 = calcularSuperPoder(carta2);

    // Comparando as cartas atributo por atributo
    printf("Comparação de Cartas:\n");
    
    compararAtributos("População", (float)carta1.populacao, (float)carta2.populacao);
    compararAtributos("Área", carta1.area, carta2.area);
    compararAtributos("PIB", carta1.PIB, carta2.PIB);
    compararAtributos("Pontos Turísticos", (float)carta1.pontos_turisticos, (float)carta2.pontos_turisticos);
    
    // Comparação especial para densidade populacional (menor valor vence)
    int resultado_densidade = (carta1.populacao / carta1.area) < (carta2.populacao / carta2.area) ? 1 : 0;
    printf("Densidade Populacional: Carta %d venceu (%d)\n", resultado_densidade ? 1 : 2, resultado_densidade);

    compararAtributos("PIB per Capita", carta1.PIB / carta1.populacao, carta2.PIB / carta2.populacao);
    compararAtributos("Super Poder", super_poder1, super_poder2);

    return 0;
}