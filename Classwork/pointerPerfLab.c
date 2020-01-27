// Instantiate main
int main(void)
{
	// declare the variables
	int userInput;
	int *input_ptr;
	int tempValue;

    //prompt the user
	printf("Enter a value: "); 
    // set userInput to be user input
	scanf("%d", &userInput); 
    // set input_ptr to be the address for userInput
	input_ptr = &userInput; 
    // set tempValue to be the value at the address of the pointer *input_ptr
	tempValue = *input_ptr; 
    // print the contents
	printf("\nuserInput: %d\n*input_ptr: %d\ntempValue: %d\n",userInput, *input_ptr, tempValue); 
    //print the size of
	printf("\nSIZE OF: \nuserInput: %d\ninput_ptr %d \n*input_ptr: %d\ntempValue: %d\n",sizeof(userInput), sizeof(input_ptr), sizeof(*input_ptr), sizeof(tempValue)); 
    //print the memory location
	printf("\nMemory location is:\nuserInput: %p\ninput_ptr: %p \n*input_ptr: %p\ntempValue: %p\n",&userInput,&input_ptr, &*input_ptr, &tempValue); 
	// prompt the user
    printf("\nNow changing *input_ptr to 33:\n"); 
    // reassign the contents of the pointer
	*input_ptr = 33; 
    // print the contents
	printf("\nuserInput: %d\n*input_ptr: %d\ntempValue: %d\n",userInput, *input_ptr, tempValue); 
     //print the size of
	printf("\nSIZE OF: \nuserInput: %d\ninput_ptr %d \n*input_ptr: %d\ntempValue: %d\n",sizeof(userInput), sizeof(input_ptr), sizeof(*input_ptr), sizeof(tempValue));
    //print the memory location
	printf("\nMemory location is:\nuserInput: %p\ninput_ptr: %p \n*input_ptr: %p\ntempValue: %p\n",&userInput,&input_ptr, &*input_ptr, &tempValue); 
	return 0;
}
