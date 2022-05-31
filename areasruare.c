#include <stdio.h>
#include <conio.h>

float areaSquare();
void main()
{

    // clrscr();
    printf("The area of the square is %.2f sq uint", areaSquare());
}

float areaSquare()
{
    float width, height;
    printf("Find Area of the Square \n");
    printf("Enter height of the Square : ");
    scanf("%f", &height);
    printf("Enter width of the Square : ");
    scanf("%f", &width);
    // Formula : area = height * width
    return (height * width);
}