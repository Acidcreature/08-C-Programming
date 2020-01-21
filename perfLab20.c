#include<stdio.h>
/*
int main(void)
{
    int replace_character(char * string, const char findThisChar, const char replaceItWithThis);




    return 0;
}
*/


void replace_character(char *myString, char findChar, char replaceChar) {
    for (int i = 0; myString[i] != '\0'; ++i) {
        if (myString[i] == findChar) {
            myString[i] = replaceChar;
        }
    }
    printf("%s", myString);
}
int main() {
    char myQuote[] = "Parfact is the anamy of good.";
    replace_character(myQuote, 'a', 'e');
    return 0;
}

/*

Name: Reuben Perry
Date 15 Jan 20
Project: Char Replacement

​

​
#include<stdio.h>
​
//Declare function prior to use
int swapparu(char *string,const char swap_this,const char with_this);
​
int main(void)
{
    //Declare and initialize variables prior to swapping
    char a = 'a';
    char b = 'b';
    char user_input[128];
​
    //Prompt user for input
    printf("Enter a string of which will swap 'a' with 'b' :");
    fscanf(stdin,"%s",user_input);
    printf("You entered %s\n",user_input);
​
    //Run the swap function
    swapparu(user_input,a,b);
    printf("Your new string is %s\n",user_input);
​
    return 0;
}
​
//Define the swap function
int swapparu(char *string,const char swap_this,const char with_this)
{
    //Pointers can work as an int and char which is why syntax looks different. Pointer starts at 0.
    for (; *string; string++)
    {
        if (*string == swap_this)
        {
            //This is where the magic happens
            *string = with_this;
        }
        
    }
}
*/
