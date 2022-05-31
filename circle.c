#include <stdio.h>
#include <conio.h>

float circle();
void main()
{
    printf("The Area of Circle is %.2f sq unit", circle());
}

float circle()
{
    float pi = 3.14, radius;
    printf("Find the area of the circle\n");
    printf("Enter radius of the circle : ");
    scanf("%f", &radius);

    return pi * (radius * radius);
}