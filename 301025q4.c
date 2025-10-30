#include <stdio.h>

int main() 
{
    FILE *fp;          
    char fileA[100];  
    char ch;              
    int space = 0;  


    printf("Enter the file name (with extension): ");
    scanf("%s", fileA);


    fp = fopen(fileA, "r");

    
    if (fp == NULL) 
    {
        printf("Error: Could not open the file '%s'\n", fileA);
        return 1;  
    }

    
    while ((ch = fgetc(fp)) != EOF) {
        if (ch == ' ') 
        {   
            space++; 
        }
    }

    
    printf("\nThe number of spaces in the file '%s' is: %d\n", fileA, space);

    
    fclose(fp);

    return 0;  
}
