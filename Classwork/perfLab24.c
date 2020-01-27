/*
#include <stdio.h>

#define STR1 "s"
#define STR2 "1"
#define STR3 STR1 ## STR2
#define STR4 str(STR1)
*/

/*
// define and include the things  # Hackett
#include <stdio.h>
#define STRINGIZE(x) #x
#define STRINGY(x) STRINGIZE(x)
#define COMBINE(x,y) x##y
#define AANDY(x,y) COMBINE(x,y)
#define str1 Bo
#define str2 re
#define MAX_SIZE 64
// Instantiate main
int main(void)
{
    // Declare and set variables
    char words[MAX_SIZE] = {STRINGY(AANDY(str1, str2))};
    puts(STRINGY(AANDY(str1, str2)));
    printf("Here is the array. %s \n", words);
	return 0;
}
*/
#include <stdio.h>
#define STR1    "string1"
#define STR2    "string2"
#define STR3    STR1 STR2
#define BUFFER  64
int main(void)
{
    char new_array[BUFFER] = {STR3};
    printf("Your array is :%s\n",new_array);
    return 0;
}

