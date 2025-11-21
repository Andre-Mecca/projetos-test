#include <stdio.h>
#include <stdlib.h>

// Funções matemáticas
int adicao(int num1, int num2) {
    return num1 + num2;
}
int subtracao(int num1, int num2) {
    return num1 - num2;
}
int multiplicacao(int num1, int num2) {
    return num1 * num2;
}
float divisao(int num1, int num2) {
    if (num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    return (float)num1 / num2;
}

// Função principal da calculadora
void inicio() {
    int opcao, num1, num2;
    char continuar;

    do {
        printf("===============================\n");
        printf("       Simple Calculator       \n");
        printf("===============================\n");
        printf("Select an operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Option: ");
        
        if (scanf("%d", &opcao) != 1) {
            printf("Invalid input! Please enter a number between 1 and 5.\n");
            while (getchar() != '\n'); // limpa buffer
            continue;
        }

        if (opcao == 5) {
            printf("Thank you for using the calculator! See you next time.\n");
            break;
        }

        if (opcao < 1 || opcao > 5) {
            printf("Invalid option! Please try again.\n");
            continue;
        }

        // Solicitar números
        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);

        // Executar operação
        switch (opcao) {
            case 1:
                printf("Result: %d + %d = %d\n", num1, num2, adicao(num1, num2));
                break;
            case 2:
                printf("Result: %d - %d = %d\n", num1, num2, subtracao(num1, num2));
                break;
            case 3:
                printf("Result: %d * %d = %d\n", num1, num2, multiplicacao(num1, num2));
                break;
            case 4:
                if (num2 != 0) {
                    printf("Result: %d / %d = %.2f\n", num1, num2, divisao(num1, num2));
                }
                break;
        }

        // Perguntar se deseja continuar
        printf("Do you want to perform another operation? (y/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 'y' || continuar == 'Y');

    printf("Thank you for using the calculator! See you next time.\n");
}

int main() {
    inicio();
    return 0;
}
