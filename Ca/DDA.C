#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void DDA(float x0,float y0,float x1,float y1)
{
float xinc,yinc,X,Y;
int dx=(int)(x1-x0);
int dy=(int)(y1-y0);
int i,step;
step=abs(dx)>abs(dy)?abs(dx):abs(dy);
xinc=dx/(float)step;
yinc=dy/(float)step;
X=x0;
Y=y0;
for(i=0;i<=step;i++)
{
putpixel(X,Y,4);
X+=xinc;
Y+=yinc;
delay(500);
}
}
int main()
{
int gd=DETECT,gm;
float x,y,x1,y1;
clrscr();
printf("Enter the coordinates of line");
scanf("%f%f%f%f",&x,&y,&x1,&y1);
clrscr();
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
putpixel(x,y,15);
putpixel(x1,y1,15);
DDA(x,y,x1,y1);
getch();
closegraph();
return 0;
}