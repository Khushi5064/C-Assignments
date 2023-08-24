#include<stdio.h>

int main()
{
    int n1=0, n2=1, n3=n1+n2, num, i;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Fibonacci Series: %d %d %d", n1, n2, n3);

    for(i=1; i<=num; i++)
    {
        n1=n2;
        n2=n3;
        n3=n1+n2;
        printf(" %d", n3);
    }

    return 0;
}
