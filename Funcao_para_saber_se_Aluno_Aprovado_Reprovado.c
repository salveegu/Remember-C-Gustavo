//Aluno Aprovado com Notas acimas de 7 e faltas abaixo de 15;
#include <stdio.h>

char calculo(float nota1, float nota2, int faltas)

{

    float media;
    char situacao;
    media = (nota1 + nota2) / 2;

    if (media >= 7 && faltas <= 15)
    {
        situacao = 'A';
    }

    else if (faltas > 15)
    {
        situacao = 'F';
    }

    else if (media < 7 && faltas < 16)
    {
        situacao = 'R';
    }
    return (situacao);
}

int main()

{
    float nota1, nota2;
    int faltas;

    printf("Entre com a nota 1: \n ");
    scanf("%f", &nota1);
    printf("Entre com a nota 1: \n ");
    scanf("%f", &nota2);
    printf("Entre com a nota a quantidade de faltas: \n ");
    scanf("%d", &faltas);

    printf("A situacao do aluno: [%c] \n ", calculo(nota1, nota2, faltas));
}