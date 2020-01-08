#include <stdio.h>

int main(void)
{
    
    int userInput = 0;                // Will store user input
    printf("Enter a character: ");    // Prompts user
    userInput = getc(stdin);            // Stores user input
    printf("Your character was: ");   // Prefaces output
    putc(userInput, stdout);               // Prints output
    printf("\n\n");
    printf("Your character was: ");   // Prefaces output
    putc(userInput -1, stdout);            // Prints output -1
    printf("\n\n");

    printf("The size of the user input: %lu", sizeof(userInput));
    printf("\n\n");

    return 0;
}