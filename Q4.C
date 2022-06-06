#include<stdio.h>
#include<conio.h>
#include<graphics.h>





void drawCircle(int num);
void main()
{
int noc;
clrscr();

printf("Enter The Number of circle : ");
scanf("%d",&noc);
   drawCircle(noc);
getch();
closegraph();
}

void drawCircle(int num)
{
int gd = DETECT ,gm;
int i,x,y,r;
x = 200 ,y = 150 ,r = 20;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
for(i=1;i<=num;i++){

circle(x,y,r);

x +=50;
}
}
