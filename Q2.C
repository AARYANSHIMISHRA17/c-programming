//FOR FCLOSE FUNCTION
#include <stdio.h>
int main() 
{
    FILE *fp;
    int exec=0;
    fp=fopen("execute.txt","r");
    if (fp==NULL) 
    {
        exec=-1;
    } 
    else 
    {
        fscanf(fp,"%d",&exec);
        fclose(fp);
        exec++;
    }
    fp = fopen("execute.txt","w");
    fprintf(fp,"%d",exec);
    fclose(fp);
    printf("Execution no.: %d",exec);
}