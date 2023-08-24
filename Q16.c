#include<stdio.h>

int main()
{
    int num, rem, rev=0, org;

    printf("Enter any number: ");
    scanf("%d", &num);

    org=num;

    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("%d", rev);

    if(org==rev)
    {
        printf("\nNumber matched!");
    }
    else
    {
        printf("\nNumber not matched!!");
    }
    return 0;
}

