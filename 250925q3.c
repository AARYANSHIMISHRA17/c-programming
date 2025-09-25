#include <stdio.h>

int main()
 {
    char str[200];
    int i;

    printf("Enter a sentence to be read : ");
    fgets(str, sizeof(str), stdin);  

    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            str[i] = str[i] - ('a' - 'A');
        }

        else if (str[i] >= 'A' && str[i] <= 'Z') 
        {
            str[i] = str[i] + ('a' - 'A');
        }
    }
    printf("Changed sentence is : %s", str);


}