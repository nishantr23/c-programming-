#include<stdio.h>
int main()
{
    float a, b, c;
    printf("Enter angle at a:");
    scanf("%f",&a);
    printf("Enter angle at b:");
    scanf("%f",&b);
    printf("Enter angle at c:");
    scanf("%f",&c);
    if (a==b&&b==c)
        printf("the triangle is equilateral.");
    else if (a==90&&b!=a&&c!=a&&c!=b)
        printf("the triangle is isosceles.");
    else if (a!=b&&b!=c&&c!=a)
        printf("the triangle is scalene.");
    else
        printf("enter correct values.");
}
