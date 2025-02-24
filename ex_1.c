// Filipe Vinicius Vieira da Silva RA: 10444828

#include <stdio.h>

int main()
{

    // Variáveis a)
    int numero_venus = 67;
    char letra = 'J';
    int numero_letra_alfabeto = 10;

    // Variáveis b)
    int primeiro_numero = 44, segundo_numero = 32, terceiro_numero = 12;
    char upm[3] = "UPM";

    // Variáveis c)
    float c_primeiro_numero = 20.5, c_segundo_numero = 64.5;

    // Saídas
    printf("Vênus está a %d milhões de milhas do sol. A letra %c é a %da letra do alfabeto.\n", numero_venus, letra, numero_letra_alfabeto);
    printf("O primeiro número é %d, o segundo é %d, e o terceiro é %d. A string de segurança é %s.\n", primeiro_numero, segundo_numero, terceiro_numero, upm);
    printf("A soma 'num1 + %.1f' é igual a %.1f.", c_primeiro_numero, c_segundo_numero);

    return 0;
}