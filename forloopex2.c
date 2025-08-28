#include<stdio.h>
int main()
{
    int first;
    printf("Enter the First Number: ");
    scanf("%d",&first);

    int second;
    printf("Enter the second number; ");
    scanf("%d",&second);

    int i;
    for (i=first;i<=second;i++)
    {
        if(i%2!=0){
            printf("\n%d",i);
        }
    }
    return 0;
}