#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm,p;
initgraph(&gd,&gm,"C:\\turboc3\\BGI");
rectangle(150,100,200,250);
printf("Enter the point to perform the translation");
scanf("%d",&p);
getch();
rectangle(150+p,100+p,200+p,250+p);
getch();
closegraph();
return 0;
}