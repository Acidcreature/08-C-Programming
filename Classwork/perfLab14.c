#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    char userInput;
    printf("Select an operator: + - * / \n");
    fscanf(stdin,"%c",&userInput);
    double num1 = 0;
    double num2 = 0;
    double answer;
    printf("Enter the first operand: \n");
    fscanf(stdin,"%le",&num1);
    printf("Enter the second operand: \n");
    fscanf(stdin,"%le",&num2);

    switch(userInput)
    {
    case '+':
        answer = num1 + num2;
        printf("You enetered %.2f %c %.2f ", num1, userInput, num2);
        printf("\n");
        printf("The answer is: %.2f", answer);
        break;

    case '-':
        answer = num1 - num2;
        printf("You enetered %.2f %c %.2f ", num1, userInput, num2);
        printf("\n");
        printf("The answer is: %.2f", answer);
        break;

    case '*':
        answer = num1 * num2;
        printf("You enetered %.2f %c %.2f ", num1, userInput, num2);
        printf("\n");
        printf("The answer is: %.2f", answer);
        break;

    case '/':
        answer = (float)num1 / (float)num2;
        printf("You enetered %.2f %c %.2f ", num1, userInput, num2);
        printf("\n");
        printf("The answer is: %.2f", (float)answer);
        printf("\n");
        break;

    default:
        printf("You done goofed");
        break;
    }
    return 0;
}
