#include <stdio.h>
int main()
{
    // Integer variable
    int varialbe;
    printf("Enter sum numbr stuff :");
    fscanf(stdin,"%d",&varialbe);
    // Pointer to integer
    int *ptr_int;
    ptr_int = &varialbe;
    // Pointer to integer pointer
    int **ptr_ptr;
    ptr_ptr = &ptr_int;
    /* Change the value of num directly */
    printf("Enter nuw stuff to chanje var :");
    fscanf(stdin,"%d",&varialbe);
    printf("Var changed directly.\n");
    printf("Var ekwals :%d \nptr ekwals :%d \nptr_ptr ekwals :%d\n",varialbe,*ptr_int,**ptr_ptr);
    /* Assigns 100 using pointer to integer */
    while (*ptr_int < 100)
    {
        *ptr_int += 1;
    }    
    //Display results
    printf("ptr changed this time.\n");
    printf("ptr ekwals :%d \nvar ekwals :%d \nptr_ptr ekwals :%d\n",varialbe,*ptr_int,**ptr_ptr);
    /* Assigns 1000 using pointer to integer pointer */
    while (**ptr_ptr < 1000)
    {
        **ptr_ptr += 1;
    }
    //Display results
    printf("ptr_ptr changed this time.\n");
    printf("ptr ekwals :%d \nvar ekwals :%d \nptr_ptr ekwals :%d\n",varialbe,*ptr_int,**ptr_ptr);
    return 0;
}