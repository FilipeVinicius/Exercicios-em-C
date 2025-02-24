// Filipe Vinicius Vieira da Silva RA: 10444828

#include <stdio.h>
#include <math.h>

int main()
{

    // Variáveis
    int num1, num2;

    // Entradas
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    // Soma
    int soma = num1 + num2;
    printf("Soma: %d\n", soma);

    // média
    float media = (num1 + num2) / 2;
    printf("Média: %.2f\n", media);

    // segundo menos o primeiro
    int subtracao = num2 - num1;
    printf("Segundo numero menos o primeiro: %d\n", subtracao);

    // soma do quadrado dos dois numeros
    int quadrado_primeiro = num1 * num1, quadrado_segundo = num2 * num2;
    int soma_quadrado = quadrado_primeiro + quadrado_segundo;
    printf("Soma dos quadrados: %d\n", soma_quadrado);

    // Quadrado da soma dos dois números
    int soma_quadrado_dois_numeros = pow(soma, 2);
    printf("Quadrado da soma dos dois números: %d", soma_quadrado_dois_numeros);

    return 0;
}