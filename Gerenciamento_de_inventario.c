#include <stdio.h>

int main(){

    /*Declaração das variáveis produto*/
    char Produto_A[30] = "Produto A";
    char Produto_B[30] = "Produto B";

    /*Declaração do estoque*/
    unsigned int Estoque_A = 1000;
    unsigned int Estoque_B = 2000;

    /*Declaração do valor produto*/
    float Valor_A = 10.50;
    float Valor_B = 15.80;

    /*Declaraçãoo do estoque mínimo*/
    unsigned int Estoque_min_A = 500;
    unsigned int Estoque_min_B = 2500;

    double valor_total_A;
    double Valor_total_B;

    int Resultado_A, Resultado_B;

    /*informações do produto*/
    printf(" Produto %s tem estoque %u e o valor unitário é %2f\n", Produto_A, Estoque_A, Valor_A);
    printf(" Produto %s tem estoque %u e o valor unitário é %2f\n", Produto_B, Estoque_B, Valor_B);

    /*Comparação de valor mínimo do estoque*/
    Resultado_A = Estoque_A > Estoque_min_A;
    Resultado_B = Estoque_B > Estoque_min_B;

    printf ("O produto %s tem estoque mínimo de %d\n", Produto_A, Resultado_A);
    printf(" O produto %s tem estoque mínimo de %d\n", Produto_B, Resultado_B);


    return 0;
}