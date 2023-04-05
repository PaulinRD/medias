#include <stdio.h>

int main() {
    float nota1, nota2, media;

    // lê as notas do aluno
    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    // calcula a média ponderada
    media = (nota1 * 4 + nota2 * 6) / 10;

    // exibe a média e o conceito final
    if (media >= 0 && media <= 4.9) {
        printf("Media: %.2f - Conceito final: D\n", media);
    } else if (media >= 5 && media <= 6.9) {
        printf("Media: %.2f - Conceito final: C\n", media);
    } else if (media >= 7 && media <= 8.9) {
        printf("Media: %.2f - Conceito final: B\n", media);
    } else if (media >= 9 && media <= 10) {
        printf("Media: %.2f - Conceito final: A\n", media);
    } else {
        printf("Media invalida\n");
    }

    return 0;
}
