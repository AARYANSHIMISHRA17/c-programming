#include<stdio.h>
int main()
{
    int n,n1,n2,n3;
    printf("give a number");
    scanf("%d",&n);
   
    n1=0;
    n2=1;
    printf("%d,%d,",n1,n2);
    for(int i=2;i<10;i++)
    {
        n3=n1+n2;
        printf("%d",n3);
        n1=n2;
        n2=n3;
        if(n1==0||n2==1)
        {
            printf("number found \n");
        }
        else 
        {
            printf("number not found \n");
        }
    }
}
