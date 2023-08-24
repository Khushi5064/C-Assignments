#include<stdio.h>
const PI=3.14;

int main()
{
    int radius, length, breadth, sum, heigth, base, ans;
    float area;

    printf("Enter radius: ");
    scanf("%d", &radius);

    printf("Enter Length: ");
    scanf("%d", &length);
    printf("Enter Breadth: ");
    scanf("%d", &breadth);

    printf("Enter Breadth: ");
    scanf("%d", &base);
    printf("Enter Heigth: ");
    scanf("%d", &heigth);

    sum=length*breadth;
    area=3.14*radius*radius;
    ans=(base*heigth)/2;

    //area of circle
    printf("\nArea of a circle is %.2f", area);
    //area of rectangle
    printf("\nArea of a rectangle is %d", sum);
    //area of triangle
    printf("\nArea of triangle is %d", ans);

    return 0;
}
