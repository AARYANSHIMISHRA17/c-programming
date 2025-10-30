#include<stdio.h>
int main()
{
    FILE *fp;
    char filename[100];
    char ch;
    fp=fopen("A.txt","r");
    if(fp==NULL)
    {
        printf("error");
        return 1;
    
    }
    printf("\n contents of the file %s are:\n",fp);

    
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    printf("\n");

    
    fclose(fp);

    return 0; 
}
   