#include<stdio.h>
#define _GNU_SOURCE
int main(void)
{
    FILE  *fp;
    char  *line = NULL;
    size_t len = 0;
    size_t read;
    //Initialize fp
    fp = fopen("power.txt","r");  // file to open
    FILE * writeFile_ptr = fopen("prnew2.txt", "w"); // opens a file to be written to
    if (fp == NULL)
    {
        puts("ERROR opening file!");
        return -1;
    }
    while ((read = getline(&line,&len,fp)) != -1)
    {
        printf("LENGTH OF LINE %lu:\n",read);
        fputs(line, writeFile_ptr); //write to new file
        printf("%s\n",line);

    }
    fclose(fp);
    return 0;  
}