#include <stdio.h>
#include <string.h> // Para usar strlen

int main() {
    char Estado[3];       // Estado (2 letras + \0)
    char Codigo[5];       // Código da carta (4 dígitos + \0)
    char Nome[60];        // Nome da cidade
    float Populacao;      // População
    float Area;           // Área em metros quadrados
    float PIB;            // PIB
    int Numero;           // Número de pontos turísticos

    // Lê o estado (2 letras)
    printf("Digite o estado (2 letras): \n");
    scanf("%2s", Estado);

    // Lê o código da carta (4 dígitos)
    printf("Digite o código da carta (4 dígitos): \n");
    scanf("%4s", Codigo);

    // Limpa o buffer de entrada antes de usar fgets
    // Usando um espaço antes do % para ignorar espaços e \n
    printf("Qual o nome da cidade? \n");
    scanf(" %59[^\n]", Nome); // Lê o nome da cidade incluindo espaços

    // Lê a população
    printf("Digite a população: \n");
    scanf("%f", &Populacao);

    // Lê a área em metros quadrados
    printf("Digite a área em metros quadrados: \n");
    scanf("%f", &Area);

    // Lê o PIB
    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    // Lê o número de pontos turísticos
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Numero);

    // Exibe os dados coletados
    printf("\nDados da cidade:\n");
    printf("Estado: %s\n", Estado);
    printf("Código da carta: %s\n", Codigo);
    printf("Nome da cidade: %s\n", Nome);
    printf("População: %.2f\n", Populacao);
    printf("Área em metros quadrados: %.2f\n", Area);
    printf("PIB: %.2f\n", PIB);
    printf("Número de pontos turísticos: %d\n", Numero);

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
