#include <stdio.h>

void menu() {
    printf("=== CALCULADORA EM C ===\n");
    printf("1. Adição\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("0. Sair\n");
}

int main() {
    int opcao;
    float num1, num2, resultado;

    do {
        menu();
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 0) break;

        printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);

        switch(opcao) {
            case 1:
                resultado = num1 + num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 4:
                if (num2 != 0)
                    resultado = num1 / num2;
                else {
                    printf("Erro: Divisão por zero!\n");
                    continue;
                }
                printf("Resultado: %.2f\n", resultado);
                break;
            default:
                printf("Opção inválida!\n");
        }

        printf("\n");

    } while (opcao != 0);

    printf("Encerrando...\n");
    return 0;
}
