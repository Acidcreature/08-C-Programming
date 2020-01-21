#include <stdio.h>
#include <ctype.h>

/*
https://stackoverflow.com/questions/7898215/how-to-clear-input-buffer-in-c
*/

int main(void)
{
    int nums[26] = {0};
    char userInput;
    int n;
    int c;
    
    
    

    
    do
    {
        // prompt user
        userInput = getchar();
        // shows character being changed to upper
        printf("User Input was: %c \n", toupper(userInput));
        // buffer clear FNM
        while ((c = getchar()) != '\n' && c != EOF){}
        // actually changed to upper
        userInput = toupper(userInput);
        // increments the associated element in the array
        nums[(int)userInput - 65] = nums[(int)userInput - 65] + 1;
          
    }
    //while A-Z and ot '\n'
    while((int)userInput >= 65 && (int)userInput <= 90 || (int)userInput != 10);
    // print each element in the array
    for (n = 0; n < 26; n += 1)
    {
        // What is printed for the array
        printf("%c: %d \n",(char) n+65, nums[n]);
    }

    return 0;
}