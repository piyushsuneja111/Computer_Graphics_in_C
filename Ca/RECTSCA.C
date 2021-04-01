#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm,p,sx;
int x,y,x1,y1,x2,y2,x3,y3;
initgraph(&gd,&gm,"C:\\turboc3\\BGI");
printf("Enter the value of x and y");
scanf("%d%d",&x,&y);
printf("Enter the value of x1 and y1");
scanf("%d%d",&x1,&y1);
printf("Enter the value of x2 and y2");
scanf("%d%d",&x2,&y2);
printf("Enter the value of x3 and y3");
scanf("%d%d",&x3,&y3);line(100,150,250,150);
line(x,y,x1,y1);
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x,y);
printf("Enter scaling factor");
scanf("%d",&sx);
x=x*sx;
x1=x1*sx;
x2=x2*sx;
x3=x3*sx;
cleardevice();
line(x,y,x1,y1);
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x,y);
getch();
closegraph();
return 0;
}