#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    char buff[15] = {0};  //sets the variable
    printf("Enter string: ");            // Prompts user
    fgets(buff, sizeof(buff), stdin);    // Stores user string
    //printf("Your string was: ");         // Prefaces output
    //fputs(buff, stdout);
    // If first character is ASCII, print. otherwise KERNEL PANIC
    if (buff[0] >= 32 && buff[0] < 126)
    {
       printf("Your string was: "); 
       fputs(buff, stdout);
    }
    else
    {
        printf("Danger Will Robinson, Danger!");
    }

    return 0;    


}