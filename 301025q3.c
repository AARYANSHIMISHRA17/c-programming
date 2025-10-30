#include <stdio.h>

int main() 
{
    FILE *fp;          
    char filename[100];  
    char ch;              

    

    
    fp = fopen(filename, "r");

    
    if (fp == NULL) {
        printf("Error: Could not open the file '%s'\n", filename);
        return 1; 
    }

    printf("\nconent of the file is:\n");

    
    while ((ch = fgetc(fp)) != EOF)
     {
        putchar(ch);  
    }

    printf("\n");

    
    fclose(fp);

    return 0;
}
