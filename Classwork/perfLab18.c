#include <stdio.h>
#include <ctype.h>


int main(void)
{
    int userInput;
    int num = 0;

    // Prompts user
    printf("Enter a number: ");            
    scanf("%d", &userInput);


    for (num = 0; num < 20; num++)
    {   
        if (num == 0)
        {
            printf("Skip 0 \n");
            num++;
            continue;
        }
        if (userInput >= 999)
        {
            break;
        }
        if (userInput % num == 0)
        {
        printf("%d %% %d = 0 \n", userInput, num);
        num ++;
        }
        
    }

    return 0;

}

