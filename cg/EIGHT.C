#include<iostream.h>
#include<graphics.h>
#include<stdio.h>
void drawBSplineCurve(double poly)
{
    int n, d;
    cout << "Enter degree of curve: ";
    cin >> d;
    n = poly.size();
    vector<double> uVec;
    int i;
    for(i=0;i<n+d;i++)
    {
	uVec.push_back(((double)i)/(n+d-1));
    }
    double x, y, basis, u;
    for(u=0;u<=1;u+=0.0001)
    {
	x = 0;
	y = 0;
	for(i=0;i<poly.size();i++)
	{
	    basis = blend(uVec, u, i, d);
	    x += basis*poly[i].x;
	    y += basis*poly[i].y;
	}
	putpixel(roundOff(x), roundOff(y), YELLOW);
    }
}

double blend(double &uVec, double u, int k, int d)
{
    if(d==1)
    {
	if(uVec[k]<=u && u<uVec[k+1])
	    return 1;
	return 0;
    }
    double b;
    b = ((u-uVec[k])/(uVec[k+d-1]-uVec[k])*blend(uVec, u, k, d-1)) + ((uVec[k+d]-u)/(uVec[k+d]-uVec[k+1])*blend(uVec, u, k+1, d-1));
    return b;
}
void main()
{
 drawBSplineCurve(double a);
}