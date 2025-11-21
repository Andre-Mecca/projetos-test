#include <stdio.h>
#include <stdlib.h>

// Função para exibir o menu
void showMenu() {
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
}

int main() {
    int option;
    double num1, num2, result;
    char again;

    while (1) {
        showMenu();

        // Validação da opção
        if (scanf("%d", &option) != 1) {
            printf("Invalid input! Please enter a number between 1 and 5.\n");
            while (getchar() != '\n'); // limpa buffer
            continue;
        }

        if (option == 5) {
            printf("Thank you for using the calculator! See you next time.\n");
            break;
        }

        if (option < 1 || option > 5) {
            printf("Invalid option! Please try again.\n");
            continue;
        }

        // Solicitar números (aceita inteiros e decimais)
        printf("Enter the first number: ");
        scanf("%lf", &num1);
        printf("Enter the second number: ");
        scanf("%lf", &num2);

        // Executar operação
        switch (option) {
            case 1:
                result = num1 + num2;
                printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 4:
                if (num2 == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                } else {
                    result = num1 / num2;
                    printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
                }
                break;
        }

        // Perguntar se deseja continuar
        while (1) {
            printf("Do you want to perform another operation? (y/n): ");
            scanf(" %c", &again);

            if (again == 'y' || again == 'Y' || again == 's' || again == 'S') {
                // opcional: limpar tela
                // system("clear"); // Linux/Mac
                // system("cls");   // Windows
                break; // volta ao menu
            } else if (again == 'n' || again == 'N') {
                printf("Thank you for using the calculator! See you next time.\n");
                return 0; // encerra execução
            } else {
                printf("Invalid response. Please type 'y' for yes or 'n' for no.\n");
            }
        }
    }

    return 0;
}
