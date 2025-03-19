#include <stdio.h>

int main() {
//Variáveis para armazenamento das duas cartas:
    char estados[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    int escolhaEstado1, escolhaEstado2; 
    int cidadeNum1, cidadeNum2;
    char codigo1[4], codigo2[4];
    int populaçao1, populaçao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;

//Entrada de dados da primeira carta:
    printf("Escolha um estado para a primeira cidade (1-8): ");
    scanf("%d", &escolhaEstado1);
    printf("Escolha um número para a primeira cidade (1-4): ");
    scanf("%d", &cidadeNum1);

//Gerando o código da carta de forma automática e cadastrando primeira carta:
    sprintf(codigo1, "%c%02d", estados[escolhaEstado1 - 1], cidadeNum1);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populaçao1);

    printf("Digite a área da cidade (km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos1);

//Entrada de dados da segunda carta:
    printf("Escolha um estado para a segunda cidade (1-8): ");
    scanf("%d", &escolhaEstado2);
    printf("Escolha um número para a segunda cidade (1-4): ");
    scanf("%d", &cidadeNum2);

//Gerando o código da carta de forma automática e cadastradando segunda carta:
    sprintf(codigo2, "%c%02d", estados[escolhaEstado2 - 1], cidadeNum2);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populaçao2);

    printf("Digite a área da cidade (km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);

//Exibindo os dados coletados:
    printf("\nCarta 1: \n");
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populaçao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("\nCarta 2:\n");
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populaçao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}
