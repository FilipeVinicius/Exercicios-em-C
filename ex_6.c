// Filipe Vinicius Vieira da Silva RA: 10444828

#include <stdio.h>
#include <math.h>

int main()
{
    // Variáveis
    const float PI = 3.141592;
    int raio;

    // Entrada
    printf("Digite o raio do círculo: ");
    scanf("%d", &raio);

    // Área
    float area = 4 * PI * pow(raio, 2);

    // Saída
    printf("A área do circulo é: %.2f", area);

    return 0;
}