#include <stdio.h>
int main()
{
    int a, b, i;
    float cost = 0, bill = 0;
    printf("Enter no.of tickets to be booked:\n");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        printf("Select seated:\n1. Premium seat - 200\n2. Standard seat - 150\n3. Economy seat - 100\n4. Exit\n");
        scanf("%d", &b);
        switch (b)
        {
            case 1:
                cost += 200;
                break;
            case 2:
                cost += 150;
                break;
            case 3:
                cost += 100;
                break;
            case 4:
                a = i - 1;
                i = a;
                break;
            
        }
    }
    printf("\nTotal tickets booked: %d\n", a);
    if (a >= 5)
    {
        bill = cost - (cost * 0.05);
        printf("Bill after discount: %f\n", bill);
    }
    else
    {
        printf("Total bill: %f\n", cost);
    }
}
// aaranshi,avni,niharika//
