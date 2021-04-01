#include<stdio.h>
#include<conio.h>
#include<graphics.h>
//rectangle
void rotate(double l,double t,double r,double b)
{
double theta,r1,r2,r3,r4;
double x1,y1,x2,y2;
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
x1=((l*r1)+(t*r3));
printf("%lf",x1);
y1=((l*r2)+(t*r4));
x2=((r*r1)+(b*r3));
y2=((r*r2)+(b*r4));
setcolor(4);
rectangle(x1,y1,x2,y2);
}

int  main()
{
int left,top,right,bottom;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("%d",getmaxx()/2-50);
printf(" %d",getmaxy()/2-50);
printf(" %d",getmaxx()/2+50);
printf(" %d",getmaxy()/2+50);
left=getmaxx()/2-50;
top=getmaxy()/2-50;
right=getmaxx()/2+50;
bottom=getmaxy(	)/2+50;
rectangle(left,top,right,bottom); //outtextxy
outtextxy(left,right-80,"bottom");
outtextxy(right,left,"right");
outtextxy(top+50,bottom-70,"left");
outtextxy(bottom,top,"top");
rotate(left,top,right,bottom);
return 0;
}