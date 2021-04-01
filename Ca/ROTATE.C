#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
void rotate(double x,double y)
{
double theta,r1,r2,r3,r4;
double x1,y1;
printf("\n enter the value of theta");
scanf("%lf",&theta);
theta=(theta*3.14)/180;
r1=cos(theta);
r2=-sin(theta);
r3=sin(theta);
r4=cos(theta);
//anticlockwise
//x1=((x*r1)+(y*r2));
//y1=((x*r3)+(y*r4));
x1=((x*r1)+(y*r3));
y1=((x*r2)+(y*r4));
setcolor(4);
line(x,y,x1,y1);
}
int main()
{
int x,y,x1,y1;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("Enter the coordinates of first segment of line x and y");
scanf("%d%d",&x,&y);
printf("Enter the coordinates of second segment of line x1 and y1");
scanf("%d%d",&x1,&y1);
line(x,y,x1,y1);
rotate(x,y);
line(x,y,x1,y1);
getch();
closegraph();
return 0;
}
