#include <stdio.h>

int main(void)
{
    
    int userInput = 0;                // Will store user input
    printf("Enter a character: ");    // Prompts user
    userInput = getchar();            // Stores user input
    printf("Your character was: ");   // Prefaces output
    putchar(userInput);               // Prints output
    printf("\n\n");
    printf("Your character was: ");   // Prefaces output
    putchar(userInput +1);            // Prints output +1
    printf("\n\n");

    printf("The size of the user input: %lu", sizeof(userInput));
    printf("\n\n");

    return 0;
}