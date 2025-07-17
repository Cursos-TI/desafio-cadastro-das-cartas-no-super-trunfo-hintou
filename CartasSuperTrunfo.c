#include <stdio.h>
#include <string.h>

void adicionarCartas(){
    // Variáveis =======================

    char estado;
    char cod[100];
    char cidade[100];
    int populacao;
    float areaKm;
    float pib;
    int numeroPontosTuristicos;

    float densidadePopulacional;
    float pibCapita;

    char estado2;
    char cod2[100];
    char cidade2[100];
    int populacao2;
    float areaKm2;
    float pib2;
    int numeroPontosTuristicos2;

    float densidadePopulacional2;
    float pibCapita2;

    //Cadastro de Cartas ============================
    //getchar() utilizado para não causar bugs na digitação

    printf("Cadastro da Primeira Carta =========== \n"); //Primeira Carta

    printf("Digite o Estado (A - H): ");
    scanf(" %c", &estado);
    getchar();

    printf("Digite o Codigo (exemplo: S09): ");
    scanf("%s", cod);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(cidade, 100, stdin);
    cidade[strcspn(cidade, "\n")] = 0;

    printf("Digite a populacao: ");
    scanf("%d", &populacao);
    getchar();

    printf("Digite a Area em Km²: ");
    scanf("%f", &areaKm);
    getchar();

    printf("Digite o PIB: ");
    scanf("%f", &pib);
    getchar();

    
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &numeroPontosTuristicos);
    getchar();

    
    printf("\nCadastro da Segunda Carta =========== \n"); //Segunda Carta

    printf("Digite o Estado (A - H): ");
    scanf(" %c", &estado2);
    getchar();

    printf("Digite o Codigo (exemplo: S09): ");
    scanf("%s", cod2);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(cidade2, 100, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    getchar();

    printf("Digite a Area em Km²: ");
    scanf("%f", &areaKm2);
    getchar();

    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    getchar();

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &numeroPontosTuristicos2);
    getchar();

    densidadePopulacional = populacao / areaKm;
    densidadePopulacional2 = populacao2 / areaKm2;

    pibCapita = (float)pib / populacao;
    pibCapita2 = (float)pib2 / populacao2;

    //Exibir Dados ==================

    printf("\n======================\n\nCarta 01:\nEstado: %c\nCodigo: %s\nNome da Cidade: %s\nPopulacao: %d\nArea: %.2f Km²\nPIB: %.2f Bilhoes de reais\nNumeros de Pontos Turisticos: %d\nDensidade Populacional: %.2f hab/Km²\nPIB per Capita: %.2f Reais", estado, cod, cidade, populacao, areaKm, pib, numeroPontosTuristicos, densidadePopulacional, pibCapita);
    printf("\n======================\n\nCarta 02:\nEstado: %c\nCodigo: %s\nNome da Cidade: %s\nPopulacao: %d\nArea: %.2f Km²\nPIB: %.2f Bilhoes de reais\nNumeros de Pontos Turisticos: %d\nDensidade Populacional: %.2f hab/Km²\nPIB per Capita: %.2f Reais", estado2, cod2, cidade2, populacao2, areaKm2, pib2, numeroPontosTuristicos2, densidadePopulacional2, pibCapita2);

}


int main(){
    adicionarCartas();
    return 0;
}
