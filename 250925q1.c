#include <stdio.h>

int main() 
{
    char str[1000];
    int i = 0, words = 0;
    int inWord = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') 
    {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') 
        {
            if (!inWord) 
            {
                words++;
                inWord = 1;  // We're now inside a word
            }
        } 
        else 
        {
            inWord = 0;  // We're in a space, so not inside a word
        }
        i++;
    }

    printf("Total number of words in the string is : %d\n", words);

    return 0;
}
