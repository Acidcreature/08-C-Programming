/*
#include <stdio.h>
#define ERROR_NULL_POINTER ((char*)-1)
#define ERROR_ABUNDANT_POINTER ((char*)-2) 
#define ERROR_NULL_DELIMITER ((char*)-3

void split_the_string( char *strng_ptr, char delimiter); //proto

int main(void)
{
    char strng[] = "Test This";
    printf( "The string before split is: %s", strng );
    split_the_string( strng );
    printf( "\nThe string after split is: %s\n", strng ); 
} // end main

// splitting
void split_the_string( char *strng_ptr, char delimiter );
{
    if (*strng_ptr == '\0')
    {
        return ERROR_NULL_DELIMITER;
    }
    else-if (*strng_ptr)
}
*/

/*
//Camms
#include <stdio.h>
#include <string.h>
void SplitString(char *myString, char *myDeliminator) {
    // https://stackoverflow.com/questions/21097253/how-does-the-strtok-function-in-c-work
    char *splitQuote = strtok(myString, myDeliminator);
    // while the token's value isn't NULL we print it
    while (splitQuote != NULL) {
        printf("%s\n", splitQuote);
        // strtok maintains a static pointer to the string so you don't have to pass it again
        splitQuote = strtok(NULL, myDeliminator);
    }
}
int main() {
    char myString[] = "Perfect is the enemy of good.";
    char myDeliminator[] = " ";
    SplitString(myString, myDeliminator);
    return 0;
}
*/

/*
#include <stdio.h>
#include <string.h>
#define ERROR_NULL_POINTER ((char*)-1)
#define ERROR_ABUNDANT_POINTER ((char*)-2)
#define ERROR_NULL_DELIMITER ((char*)-3)


​char * split_the_string(char * string_ptr, char delimiter)
{
    // Set return value pointer and count variable
    char * sec_ptr;
    int count=0;
​    // loop through a string
    for ( ; *string_ptr != '\0'; ++string_ptr )
    {
        //if the value equals the delimiter
        if (*string_ptr == delimiter)
        {
            sec_ptr = (string_ptr+1);
            *string_ptr = '\0';
            count++;
        }
    }
    //printf("%d\n", count);
    if(count >1){
        return ERROR_ABUNDANT_POINTER;
    }
    else if (delimiter == '\0')
    {
        return ERROR_NULL_DELIMITER;
    }
    else{
        return sec_ptr; 
    }
​}
//(sizeof(*string_ptr)/sizeof(string_ptr))
​int lab_string()
{
​    char my_str[] = "Hey/You";
    char * my_sec = split_the_string(my_str, '/');
    printf("The second string is %s", my_sec);
    return 0;
}
*/