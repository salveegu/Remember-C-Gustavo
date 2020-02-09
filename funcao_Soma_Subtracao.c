#include <stdio.h>

float somar(float x, float y)

{
    float soma = x + y;
    return (soma);
}
float subtracao(float x, float y)

{
    float subtrair = x - y;
    return (subtrair);
}

int main()

{
    float x, y;
    int opcao;

    printf("Entre com dois valores: \n");
    scanf("%f %f", &x, &y);
    printf(" digite 1-[SOMA]  ou 2-[SUBTRACAO] \n");
    scanf("%d", &opcao);

    if (opcao == 1)
    {
        //somar();
        printf("Resultado Soma [%.2f]", somar(x, y));
    }
    else if (opcao == 2)
    {
        //subtracao();
        printf("Resultado Subtracao [%.2f]", subtracao(x, y));
    }
}