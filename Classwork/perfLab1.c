/*
Tim Pratt
6 Jan 20
Perf Lab 1
*/

#include <stdio.h>
int main(void)
{
    //Declare and Initialize all variables
    int cars = 5;
    float rubberDucks = 10.7;
    double snowflakes = 100.827;
    char word = '$';

    //Print the stated variable, then print the sizeof() that variable.
    printf("Your integer is %d \n", cars);
    printf("Size of integer is %ld \n", sizeof(cars));
    //Print the stated variable, then print the sizeof() that variable.
    printf("Your float is %f \n", rubberDucks);
    printf("Size of float is %ld \n", sizeof(rubberDucks));
    //Print the stated variable, then print the sizeof() that variable.
    printf("Your float is %lf \n", snowflakes);
    printf("Size of double is %ld \n", sizeof(snowflakes));
    //Print the stated variable, then print the sizeof() that variable.
    printf("Your char is %c \n", word);
    printf("Size of char is %ld \n", sizeof(word));

    return 0;


}