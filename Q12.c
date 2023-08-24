//even odd number with 10 numbers from user

//pending


#include<stdio.h>

int main()
{
    int num,i;

    printf("Enter 10 numbers: ");
    scanf("%d", &num);

    for(i=num   ; i<=10; i++)
    {
        if(i%2==0)
        {
            printf("Number enter is even");
        }
    }
    return 0;
}
