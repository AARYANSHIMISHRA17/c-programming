#include <stdio.h>

int main() 
{
    FILE *fp;
    char filename[100];
    char ch;
    int charCount = 0;
    int wordCount = 0;

    printf("Enter the file name (with extension): ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: Could not open the file '%s'\n", filename);
        return 1;
    }

    int prevSpace = 1; 

    while ((ch = fgetc(fp)) != EOF) {
        charCount++;  

        
        if (ch == ' ' || ch == '\n' || ch == '\t')
         {
            prevSpace = 1;
        } else {
            
            if (prevSpace == 1) {
                wordCount++;
            }
            prevSpace = 0;
        }
    }

    printf("Total characters: %d\n", charCount);
    printf("Total words: %d\n", wordCount);

    fclose(fp);
    return 0;
}
