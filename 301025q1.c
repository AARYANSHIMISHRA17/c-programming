#include <stdio.h>

int main() 
{
    FILE *file;
    char file1[100];
    char s;

    printf("Enter the filename: ");
    scanf("%s", file1);

    
    file = fopen(file1, "r");

    if (file == NULL) {
        printf("Error:\n");
        return 1;
    }

    
    fseek(file, 0, SEEK_END);
    s = ftell(file); 

    if (s == 0)
        printf("The file is empty.\n");
    else
        printf("The file contains some text (size: %ld bytes).\n", s);

    fclose(file);
    return 0;
}
