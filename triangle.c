#include <stdio.h>
#include <conio.h>

float triangle();
void main()
{
    printf("The Area of Triangle is %.2f sq unit", triangle());
}

float triangle()
{
    float base, height;
    printf("Find Area of Triangle \n");
    printf("Height of Triangle : ");
    scanf("%f", &height);
    printf("Base of Triangle : ");
    scanf("%f", &base);
    // area = (height * base) / 2
    return (height * base) / 2;
}
