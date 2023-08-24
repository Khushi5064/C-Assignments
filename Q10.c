#include<stdio.h>

int main()
{
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'a':
            printf("Enter character is a vowel");
        break;
        case 'e':
            printf("Enter character is a vowel");
        break;
        case 'i':
            printf("Enter character is a vowel");
        break;
        case 'o':
            printf("Enter character is a vowel");
        break;
        case 'u':
            printf("Enter character is a vowel");
        break;
        default:
            printf("Enter character is a consonent");
        break;
    }
    return 0;
}
