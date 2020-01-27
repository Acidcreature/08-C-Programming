#include <stdio.h>
int main( void )
{
int number = 1;
int * int_ptr;
int_ptr = &number;
int ** dblPTR;
dblPTR = &int_ptr;
int num = 10;
printf("Num equals %d", num);
printf("Var ekwals :%d \nptr ekwals :%d \nptr_ptr ekwals :%d\n",number, *int_ptr, **dblPTR);
while (*int_ptr < 100)
{
    *int_ptr += 1;
}
printf("ptr changed this time.\n");
printf("ptr ekwals :%d \nvar ekwals :%d \nptr_ptr ekwals :%d\n",number, *int_ptr, **dblPTR);
while (*int_ptr < 1000)
{
    *int_ptr += 1;
}
printf("ptr_ptr changed this time.\n");
printf("ptr ekwals :%d \nvar ekwals :%d \nptr_ptr ekwals :%d\n",number, *int_ptr, **dblPTR);
return 0;
}


