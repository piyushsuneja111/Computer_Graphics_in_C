#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void drawline(int x0,int y0,int x1,int y1)
{
	int dx,dy,p,x,y;
	dx=x1-x0;
	dy=y1-y0;
	x=x0;
	y=y0;
	p=2*dy-dx;

	while(x<x1)
	{
		if(p>=0)
		{
			putpixel(x,y,RED);
			y=y+1;
		       p=p+2*dy-2*dx;
		}
		else
		{       putpixel(x,y,RED);
			p=p+2*dy;
		       //	x=x+1;


		}
		x=x+1;
	 }

}
int main()
{
	int gd=DETECT,gm,x0,y0,x1,y1;
	initgraph(&gd,&gm,"c:\\turboc3\\BGI");
	printf("\n enter coordinates of x1 and y1");
	scanf("%d%d",&x0,&y0);
	printf("\n enter coordinates of x1 and y1");
	scanf("%d%d",&x1,&y1);
	drawline(x0,y0,x1,y1);
return 0;
}
