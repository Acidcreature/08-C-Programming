/*
open file in ro
read it char by char
print each char
close file
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	FILE * myFile_ptr = fopen("power.txt", "r"); // Opens a read-only file
	char readFromFile = 0; // Store char-by-char input from myFile_ptr
    int c;
	if (myFile_ptr != NULL) 	// Verify fopen() succeeded
	{
		while (readFromFile != EOF) // Continue reading until the end of file
		{
			readFromFile = getc(myFile_ptr); 	// Read one character
			putc(readFromFile, stdout); 		// Print that character
		}
		fclose(myFile_ptr); // Always fclose anything you fopen
	}
	else 			// Otherwise, fopen() failed
	{
		puts("Error opening file!"); 	// Tell the user and...
        fflush(stdin);
		return -1;			// Return an error value
	}
    fflush(stdin);
    printf("\n");
	return 0;
}