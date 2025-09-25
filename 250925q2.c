#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int alphabets = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    for (int i = 0; str[i] != '\0'; i++) {
        
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            alphabets++;
        }
    
        else if (str[i] >= '0' && str[i] <= '9') 
        {
            digits++;
        }

        else if (str[i] != '\n') 
        {
            special++;
        }

    
    }

    printf("Total alphabets in the sentence are: %d\n", alphabets);
    printf("Total digits in the sentence are: %d\n", digits);
    printf("Total special characters in the sentence are: %d\n", special);


}