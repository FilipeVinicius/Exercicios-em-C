#include <stdio.h>

int main()
{
    // Variável
    float temperatura_celsius;

    // Entrada
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &temperatura_celsius);

    // Fórmula para calcular de celsius para fahrenheit
    float formula_c_to_f = temperatura_celsius * 1.8 + 32;

    // Saída
    printf("A temperatura em graus Fahrenheit é: %.2f'", formula_c_to_f);
    return 0;
}
