#include<stdio.h>

int main()
{
    char choice;
    printf("Enter + for Addition \nEnter - for Subtraction \nEnter * for Multiplication \nEnter / for Division");

    int n1, n2, ans;
     printf("\nEnter your choice: ");
    scanf("%c", &choice);
    printf("\nEnter n1: ");
    scanf("%d", &n1);
    printf("Enter n2: ");
    scanf("%d", &n2);

    switch(choice)
    {
        case '+':
            ans=n1+n2;
            printf("%d is addition of both number", ans);
            break;

        case '-':
            ans=n1-n2;
            printf("%d is the subtraction of both number", ans);
            break;

        case '*':
            ans=n1*n2;
            printf("%d is the multiplication of both number", ans);
            break;

        case '/':
            ans=n1/n2;
            printf("%d is the division of both number", ans);
            break;

        default:
            printf("Enter valid sign");
    }
}
