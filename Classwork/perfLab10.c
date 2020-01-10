#include <stdio.h>
#include <stdlib.h>
/*
https://www.geeksforgeeks.org/left-shift-right-shift-operators-c-cpp/
https://www.includehelp.com/c/how-to-check-a-particular-bit-is-set-or-not-using-c-program.aspx
https://www.geeksforgeeks.org/binary-representation-of-a-given-number/
*/
int main(void)
{
    // unsigned character
    u_int32_t user_input;
    
    printf("Enter a number to shift \nMost left bit must be on :");
    fscanf(stdin,"%d",&user_input);
    
    fprintf(stdout,"\nShifting to the right\nNumber << 3 = %d\n",user_input<<3);
    fprintf(stdout,"\nShifting to the right\nNumber >> 5 = %d\n",user_input>>5);
  
    return 0;
}
/*

 * Mr. Meighan for the logic
 * SSgt Pham for some shortcuts
 
#include <stdio.h>
​
int main() {
    // user input of an unsigned 32bit integer
    uint32_t userInput = 0;
    printf("Please provide an integer:\n");
    fscanf(stdin, "%d", &userInput);
​
    // for (declare, initialize and shift left by 31; true if not 0; shift 1 to the right) {
    //     print (if condition true) ? return true : return false;
    // }
    for (uint32_t bitChecker = 1 << 31; bitChecker; bitChecker >>= 1) {
        fprintf(stdout, "%d", (userInput & bitChecker) ? 1 : 0);
    }
​
    printf("\n");
    return 0;
}
*/