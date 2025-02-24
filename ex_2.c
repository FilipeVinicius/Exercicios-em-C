#include <stdio.h>

int main()
{
    // Variáveis
    char nome[30];
    char curso[50];
    int ra;

    // Entrada do usuário
    printf("Nome do aluno: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0;

    printf("Curso do aluno: ");
    fgets(curso, sizeof(curso), stdin);
    curso[strcspn(curso, "\n")] = 0;

    printf("RA do aluno: ");
    scanf("%d", &ra);

    // Saídas
    printf("Aluno: %s - %d. Curso: %s", nome, ra, curso);

    return 0;
}
