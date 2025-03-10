#include <stdio.h>

// Definição da estrutura para a carta
typedef struct {
    char estado[3];
    char codigo[10];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int num_pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
} Carta;

// Função para calcular a densidade populacional e o PIB per capita
void calcular_indicadores(Carta *carta) {
    carta->densidade_populacional = carta->populacao / carta->area;
    carta->pib_per_capita = carta->pib / carta->populacao;
}

// Função para exibir os dados de uma carta
void exibir_carta(Carta carta) {
    printf("Estado: %s\n", carta.estado);
    printf("Código da Carta: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nome_cidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.num_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta.densidade_populacional);
    printf("PIB per capita: %.2f\n", carta.pib_per_capita);
}

// Função para comparar as cartas com base na população
void comparar_cartas(Carta carta1, Carta carta2) {
    printf("Comparação de cartas (Atributo: População):\n\n");

    printf("Carta 1 - %s (%s): %d habitantes\n", carta1.nome_cidade, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %d habitantes\n", carta2.nome_cidade, carta2.estado, carta2.populacao);

    if (carta1.populacao > carta2.populacao) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.nome_cidade);
    } else if (carta1.populacao < carta2.populacao) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.nome_cidade);
    } else {
        printf("\nResultado: Empate!\n");
    }
}

int main() {
    // Definição das duas cartas
    Carta carta1 = {"SP", "C001", "São Paulo", 12300000, 1521.11, 700000000000.00, 20};
    Carta carta2 = {"RJ", "C002", "Rio de Janeiro", 6000000, 1200.27, 400000000000.00, 15};

    // Cálculo dos indicadores para cada carta
    calcular_indicadores(&carta1);
    calcular_indicadores(&carta2);

    // Exibição dos dados das cartas
    printf("Dados da Carta 1:\n");
    exibir_carta(carta1);
    printf("\nDados da Carta 2:\n");
    exibir_carta(carta2);
    printf("\n");

    // Comparação das cartas com base na população
    comparar_cartas(carta1, carta2);

    return 0;
}
