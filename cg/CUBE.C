#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int  main()
{
int gd=DETECT,gm;
int left,right,bottom,top;
initgraph(&gd,&gm,"C:\\turboc3\\BGI");
left=getmaxx()/2-100;
right=getmaxx()/2+100;
top=getmaxy()/2-100;
bottom=getmaxy()/2+100;
printf("left: %d, right: %d, bottom: %d , top %d",left,right,bottom,top);
rectangle(left,top,right,bottom);
line(left,top,left+30, top+30);
line(left,bottom,left+30,bottom+30);
line(right,top,right+30,top+30);
line(right,bottom,right+30,bottom+30);
rectangle(left+30,top+30,right+30,bottom+30);
x1=x+tx;
y1=y+ty;
z1=z+tz
return 0;
}