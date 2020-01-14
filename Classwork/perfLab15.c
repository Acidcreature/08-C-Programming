#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int num = 0;  //sets the variable
    printf("Enter a number: ");            // Prompts user
    scanf("%d", &num);
    int i = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Are you sure # %d", i + 1);
    }
    if (num < 0) // If the number is less than 0, it is negative
    {
       printf("Your number was negative: \n"); 
       printf("You entered: %d", num);
       printf("\n\n");
    }
    else // If the number is >=
    {
        printf("The number was positive...at first. \n");
        printf("Answer: %d", (num - (num * 2)));
        printf("\n\n");
    }
    

    return 0;    


}