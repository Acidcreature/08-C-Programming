#include <stdlib.h>
#include <stdio.h>

int main( int argc, char **argv){
    int a, b, c;
    
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the first number: ");
    scanf("%d", &b);
    printf("Enter the first number: ");
    scanf("%d", &c);

    double average = (a + b + c) / 3.0;

    printf("The average of %d, %d, and %d is %f\n", a, b, c, average);

    return 0;

}