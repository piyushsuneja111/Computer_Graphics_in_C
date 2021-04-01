#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
int x,y,x1,y1,x2,y2,x3,y3,shx;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("Enter the value of x and y");
scanf("%d%d",&x,&y);
printf("Enter the value of x1 and y1");
scanf("%d%d",&x1,&y1);
printf("Enter the value of x2 and y2");
scanf("%d%d",&x2,&y2);
printf("Enter the value of x3 and y3");
scanf("%d%d",&x3,&y3);
printf("Enter the value of shearing factor");
scanf("%d",&shx);
line(x,y,x1,y1);
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x,y);
//x=x+shx*y;
//x1=x1+shx*y1;
//x2=x2+shx*y2;
//x3=x3+shx*y3;
y=y+shx*x;
y1=y1+shx*x1;
y2=y2+shx*x2;
y3=y3+shx*x3;
//cleardevice();
delay(500);
line(x,y,x1,y1);
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x,y);
getch();
closegraph();
return 0;
}