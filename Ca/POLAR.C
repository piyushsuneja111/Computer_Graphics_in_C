    #include <graphics.h>
    #include <stdlib.h>

    void Polar(int xc,int yc,int x,int y)
    {
	putpixel(x+xc,y+yc,4);
	putpixel(x+xc,-(y-yc),5);
	putpixel(-(x-xc),-(y-yc),6);
	putpixel(-(x-xc),y+yc,7);
	putpixel(y+xc,x+yc,8);
	putpixel(y+xc,-(x-yc),9);
	putpixel(-(y-xc),-(x-yc),10);
	putpixel(-(y-xc),x+yc,1);
    }
    void PolarCircle(int xc,int yc,int r)
    {
	int x,y,d;
	x=0;
	y=r;
	d=3-2*r;
       Polar(xc,yc,x,y);
	while(x<=y)
	{
	    if(d<=0)
	    {
		d=d+4*x+6;
	    }
	    else
	    {
		d=d+4*x-4*y+10;
		y=y-1;
	    }
	    x=x+1;
	    Polar(xc,yc,x,y);
	}
    }
    int main()
    {
	int gd = DETECT, gm;
	int xc,yc,r;
	initgraph(&gd, &gm, "c:\\turboc3\\BGI");
	printf("Enter the values of xc and yc ,that is center points of circle : ");
	scanf("%d%d",&xc,&yc);
	printf("Enter the radius of circle : ");
	scanf("%d",&r);
	PolarCircle(xc,yc,r);
        getch();  
        closegraph();  
        return 0;  
    }  