// Include the main
#include <stdio.h>
// instantiat main
int main( void )
{ 
   // declare and set the things
   int students;
   char first[32];
   char middle[32];
   char last[32];
   int cont = 1;
   // open the file with pointer usenames
   FILE * usenames = fopen("userNames.txt", "w");  
   // do it safely
   if (usenames == NULL ) {
      puts("File could not be opened");
   }
   // if its safe do the block of code
   else { 
      puts("Enter the number of users you will be creating:");
      scanf("%d", &cont);
      // if they do do more code
      while (cont > 0){
         int c;
         while((c = getchar()) != '\n' && c != EOF){}
         // Prompt the user and get the input for the stuff
         puts("Enter the first, middle and last name (if multiple middle or last names just list one).");
         printf(":");
         scanf("%s %s %s", &first, &middle, &last);
         // get the first letter of the first and middle
         char f = first[0];
         char m = middle[0];
         // output what it is
         printf("%c%c%s\n", f, m, last);
         // send to file
         fprintf(usenames, "%s %s %s username is: %c%c%s\n", first, middle, last, f, m, last);
         cont --;
      }
    // Close the file
    fclose(usenames);
   } 
   return 0;
}