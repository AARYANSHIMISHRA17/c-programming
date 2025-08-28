int main()
{
    int first;
    printf("Enter the First Number: ");
    scanf("%d",&first);

    int second;
    printf("Enter the second number; ");
    scanf("%d",&second);
    if (first % 2 != 0){
        printf("%d", first);
    }
    else if (second % 2 !=0){
        printf("%d", second);
    }
    else {
        printf("error");
    }
}
