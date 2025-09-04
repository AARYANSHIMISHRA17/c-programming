#include<stdio.h>
int main()
{
    int num1, num2,res;
    printf("give me two numbers");
    scanf("%d",&num1);
    scanf("%d",&num2);
    for(int i=num1;i<=num2;i++)
    {
         if(i%2==0)
         {
            res=i*i;
            printf("%d,",res);
         }
         else
         {
          res=i*i*i;
          printf("%d,",res);
         }
    }
return 0;
}