#include <stdio.h>

int main() {
    int opcao;
    char estado;
    char codigo[100];
    char cidade[100];
    int populacao;
    float area;
    float pib;
    int pontos_tur;

    while (opcao!=3) {

    
        printf ("Selecione a opção:\n1. Cadastrar carta;\n2. Exibir cartas cadastradas;\n3. Encerrar.\n");
        scanf ("%d", &opcao);
        if (opcao==1) {
            printf ("Digite o estado:\n");
            getchar();
            scanf ("%c", &estado);
            printf ("Digite o código da carta:\n");
            scanf ("%s", codigo);
            printf ("Digite a cidade:\n");
            scanf ("%s", cidade);
            printf ("Digite a quantidade da população:\n");
            scanf ("%d", &populacao);
            printf ("Digite a quantidade da área da cidade:\n");
            scanf ("%f", &area);
            printf ("Digite o PIB da cidade:\n");
            scanf ("%f", &pib);
            printf ("Digite a quantidade de pontos turísticos da cidade:\n");
            scanf ("%d", &pontos_tur);
        }

        else if (opcao==2) {
            printf ("%c\n", estado);
            printf ("%s\n", codigo);
            printf ("%s\n", cidade);
            printf ("%d\n", populacao);
            printf ("%f\n", area);
            printf ("%f\n", pib);
            printf ("%d\n", pontos_tur);

        }
    }
        return 0;
}
