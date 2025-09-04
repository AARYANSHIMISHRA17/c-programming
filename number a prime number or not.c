#include <stdio.h>
int main()
{
    int n,i;
    int sum;
    printf("enter no");
    scanf("%d",&n);
    for (i=2;i<=10;i++)
    {
        if (n%i != 0)
        {
            sum=sum+1;
        }
    }
    if (sum>2)
    {
        printf("%d is not a prime number",n);
    }
    else
    {
        printf("%d is  a prime number",n);
    }
}