#include <stdio.h>

int main()
{
    /* iniciar variáveis para compor as informações das cartas */
    char estadoUm[5], postalUm[10], cidadeUm[50];
    char estadoDois[5], postalDois[10], cidadeDois[50];
    int populacaoUm, turisticosUm;
    int populacaoDois, turisticosDois;
    float areaUm, pibUm, densidadePopUm, ppcUm;
    float areaDois, pibDois, densidadePopDois,ppcDois;

    //dados descritivos - carta 1
    printf("Carta 1\n");
    printf("Código do Estado?\n");
    scanf("%s", estadoUm);
    printf("Código Postal? \n");
    scanf("%s", postalUm);
    printf("Nome da Cidade?\n");
    scanf(" %[^\n]", &cidadeUm); // para ler nomes com espaços

    //dados para comparação - carta 1
    printf("População?\n");
    scanf("%d", &populacaoUm);
    printf("Area do Estado?\n");
    scanf("%f", &areaUm);
    printf("Valor do PIB?\n");
    scanf("%f", &pibUm);
    printf("Numero de Pontos Turísticos?\n");
    scanf("%d", &turisticosUm);

    //dados descritivos - carta 2 */
    printf("Carta 2\n");
    printf("Código do Estado?\n");
    scanf("%s", estadoDois);
    printf("Código Postal?\n");
    scanf("%s", postalDois);
    printf("Nome da Cidade?\n");
    scanf(" %[^\n]", cidadeDois);

    // dados para comparação - carta 2
    printf("População?\n");
    scanf("%d", &populacaoDois);
    printf("Area do Estado?\n");
    scanf("%f", &areaDois);
    printf("Valor do PIB?\n");
    scanf("%f", &pibDois);
    printf("Numero de Pontos Turísticos?\n");
    scanf("%d", &turisticosDois);

/* cálculo da Densidade Populacional e PIB Per Capita */
    densidadePopUm = (float)populacaoUm / areaUm;
    densidadePopDois = (float)populacaoDois / areaDois;
    ppcUm = pibUm / (float)populacaoUm;
    ppcDois = pibDois / (float)populacaoDois;

/* transcrição dos dados */
    //Carta 1
    printf("Carta 1\n");
    printf("Cidade: %s (%s)\n", cidadeUm, estadoUm);
    printf("Código Postal: %s \n", postalUm);
    printf("População: %d habitantes \n", populacaoUm);
    printf("Area: %f km² \n", areaUm);
    printf("Produto Interno Bruto: %.2f bilhões de reais \n", pibUm);
    printf("Numero de Pontos Turísticos: %d \n", turisticosUm);
    printf("Densidade Populacional: %.2f.\n", densidadePopUm);
    printf("PIB per Capita: %.2f\n", ppcUm);

    //Carta 2
    printf("Carta 2\n");
    printf("Cidade: %s (%s)\n", cidadeDois, estadoDois);
    printf("Código Postal: %s \n", postalDois);
    printf("População: %d habitantes\n", populacaoDois);
    printf("Area: %f km²\n", areaDois);
    printf("Produto Interno Bruto: %f bilhões de reais\n", pibDois);
    printf("Numero de Pontos Turísticos: %d \n", turisticosDois);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopDois);
    printf("PIB per Capita: %.2f\n", ppcDois);
    
    return 0;
}
