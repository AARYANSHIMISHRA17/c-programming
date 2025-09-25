#include <stdio.h>
 
int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxlen = 0, len = 0;
 
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
 
    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] != ' ' && str[i] != '\n') 
        {
            word[j++] = str[i];
        } else {
            word[j] = '\0'; 
            len = 0;
 
            while (word[len] != '\0') 
            {
                len++;
            }
            if (len > maxlen) 
            {
                maxlen = len;
                int k = 0;
                while (word[k] != '\0') {
                    longest[k] = word[k];
                    k++;
                }
              longest[k] = '\0';
            }
            j = 0; 
        }
    }
    printf("Longest word: %s\n",longest);
}