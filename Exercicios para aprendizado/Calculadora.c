#include <stdio.h>
#import <locale.h>
#include<stdlib.h> 

int main() {
    setlocale(LC_ALL, "Portuguese");

    char operacao;
    float num1, num2, resultado;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Escolha uma operacao (+, -, *, /): ");
    scanf(" %c", &operacao);  // Espaço antes de %c para capturar o caractere corretamente

   
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: Divisao por zero!\n");
            }
            break;
        default:
            // Executa se o usuário digitar um operador inválido
            printf("Operação inválida!\n");
    }

    return 0;
}

   
