/*
#include <stdio.h>

int main (void)
{
    // makes 2 vars. Count intstantiated to 10, and int x
    int   count = 10, x;
    // creates a pointer
    int   *int_pointer;
    // pointer is equal to address of count
    int_pointer = &count;
    // x value is the value at the pointers address
    x = *int_pointer;

    printf ("count = %i, x = %i\n", count, x);

    return 0;
}
*/

/*
// Using the & and * pointer operators.
#include <stdio.h>

int main( void )
{
   int a; // a is an integer
   int *aPtr; // aPtr is a pointer to an integer

   a = 7;
   aPtr = &a; // set aPtr to the address of a

   printf( "The address of a is %p"
           "\nThe value of aPtr is %p", &a, aPtr );

   printf( "\n\nThe value of a is %d"   
           "\nThe value of *aPtr is %d", a, *aPtr );

   printf( "\n\nShowing that * and & are complements of "
           "each other\n&*aPtr = %p"   
           "\n*&aPtr = %p\n", &*aPtr, *&aPtr );
} // end main
*/

/*
// Cube a variable using pass-by-value.
#include <stdio.h>

int cubeByValue( int n ); // prototype

int main( void )
{
   int number = 5; // initialize number

   printf( "The original value of number is %d", number );
   
   // pass number by value to cubeByValue
   number = cubeByValue( number );

   printf( "\nThe new value of number is %d\n", number );
} // end main

// calculate and return cube of integer argument                 
int cubeByValue( int n )                                            
{                                                                   
   return n * n * n; // cube local variable n and return result
} // end function cubeByValue   
*/


/*
// Cube a variable using pass-by-reference with a pointer argument.

#include <stdio.h>

void cubeByReference( int *nPtr ); // function prototype

int main( void )
{
   int number = 5; // initialize number

   printf( "The original value of number is %d", number );
 
   // pass address of number to cubeByReference
   cubeByReference( &number );

   printf( "\nThe new value of number is %d\n", number );
} // end main

// calculate cube of *nPtr; actually modifies number in main
void cubeByReference( int *nPtr )                              
{                                                              
   *nPtr = *nPtr * *nPtr * *nPtr; // cube *nPtr            
} // end function cubeByReference
*/