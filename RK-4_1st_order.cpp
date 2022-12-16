/*
************************************************************************
dy/dx=y+sinx Whrere y(1)=2  |  y(1.5)=? |take h=0.25
Author: Anjan KC
Date: feb 14, 2022
************************************************************************                            
*/
#include<conio.h>
#include<stdio.h>
#include<math.h>
float f(float x,float y)
{
	return(y+sin(x));
}
int main()
{
	float x,y,h,xn,m1,m2,m3,m4,m;
	printf("Enter the value of x, y ,h and xn ");
	scanf("%f%f%f%f",&x,&y,&h,&xn);
	while(x<xn)
	{
		m1=f(x,y);
		m2=f((x+h/2),(y+(m1*h)/2));
		m3=f((x+h/2),(y+(m2*h)/2));
		m4=f((x+h),(y+(m3*h)));
		m=(m1+2*m2+2*m3+m4)/6;
		y=y+m*h;
		x=x+h;
	}
	printf("Value of x=%f\tValue of y=%f\t Value of m=%f",x,y,m);
	return 0;
}
