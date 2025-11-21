#include <stdio.h>
#include <stdlib.h>

int adicao(int num1, int num2){
    return num1 + num2;
}
int subtracao(int num1, int num2){
    return num1 - num2;
}
int multiplicacao(int num1, int num2){
    return num1 * num2;
}
float divisao(int num1, int num2){
    if(num2 == 0){
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    return (float)num1 / num2;
}
void inicio(){
    int opicao, num1, num2;
    char continuar;

    printf("==============================\n");
    printf("       Simple Calculator      \n");
    printf("==============================\n");
    printf("Select an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Opicion: ");
    scanf("%d", &opicao);
   if(opicao == 1){
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("result: %d + %d = %d\n", num1, num2, adicao(num1, num2));
   }
    else if(opicao == 2){
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
     printf("result: %d - %d = %d\n", num1, num2, subtracao(num1, num2));
    }
    else if(opicao == 3){
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
     printf("result: %d * %d = %d\n", num1, num2, multiplicacao(num1, num2));
    }
    else if(opicao == 4){
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
     float result = divisao(num1, num2);
     if(num2 != 0){
          printf("result: %d / %d = %.2f\n", num1, num2, result);
     }
    }
    else if(opicao == 5){
     printf("Exiting the calculator. Goodbye!\n");
     exit(0);
    }
    else{
     printf("Invalid option! Please try again.\n");
    }

    printf("Do you want to perform another operation? (y/n):\n");
    scanf(" %c", &continuar);

    if(continuar == 'y' || continuar == 'Y'){
        inicio();
    }
    else{
        printf("Exiting the calculator. Goodbye!\n");
        exit(0);
    }
}



int main(){

    inicio();

    return 0;
}