#include <stdio.h>
#include <conio.h>

int bill();
void main()
{

    printf("your bill is %d", bill());
}

int bill()
{
    int ac, room, unit;
    printf("Bill generate program");
    printf("Enter No of Ac : ");
    scanf("%d", &ac);
    printf("Enter cost of unit : ");
    scanf("%d", &unit);

    printf("Enter No of room: ");
    scanf("%d", &room);

    printf("your bill is : ");
    return (ac * unit) * room;
}