//USING FCLOSE FUNTION
#include <stdio.h>
int main() 
{
    FILE *fp1,*fp2;
    char ch;
    fp1=fopen("text1.txt","r");
    if (fp1 == NULL) 
    {
        printf("file not found");
    }
    fp2 = fopen("text2.txt","w");
    if (fp2 == NULL) 
    {
        printf("second file not created");
        fclose(fp1);
    }
    while((ch = fgetc(fp1)) != EOF) 
    {
        fputc(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);
}