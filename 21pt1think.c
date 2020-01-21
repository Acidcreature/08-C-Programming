#include <stdio.h>

//prototype
unsigned int mystery(unsigned int a, unsigned int b);

int main(void)
{
    printf("%s", "Enter two positive integers: ");
    unsigned int x; //first int
    unsigned int y; //second int
    scanf("%u%u", &x, &y);  // two numbers obtained by user input

    //recursive multiplication. x added to x y times
    printf("The result is %u\n", mystery(x, y));
}

// Parameter b must be a positive integer
// to prevent infinite recursion
unsigned int mystery(unsigned int a, unsigned int b);
{
    // base case
    if (1 == b) {
        return a;
    }
    else { // recursive step
        return a + mystery(a, b - 1);
    }
}