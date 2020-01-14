#include <stdio.h>
#include <stdlib.h>


int main(void)
{

    u_int32_t num1 = 0;
    u_int32_t num2 = 0;
    u_int32_t num3 = 0;

    printf("Enter a number: \n");
    fscanf(stdin,"%d",&num1);

    printf("Enter a number: \n");
    fscanf(stdin,"%d",&num2);

    if (num1 == num2)
    {
        printf("ERRRRRRRRRRRRRRRRRRRRRRRRORRRRRRRRRRRRRR");
        printf("\n\n");
    }
    else if (num1 > num2)
    {
        num3 = num1;
        num1 = 0;
    }
    else if (num2 > num1)
    {
        num3 = num2;
        num2 = 0;
    }
    if ((num1 + num2 + num3) > 2 )
    {
        printf("You have num1 %d, num2 %d, num3 %d ", num1, num2, num3);
    }

    
    
}