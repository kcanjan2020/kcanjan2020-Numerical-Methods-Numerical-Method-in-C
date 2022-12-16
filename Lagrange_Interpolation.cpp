/*
************************************************************************
Evaluate f(9) Using lagrange's formula:
x:5  |7  |11  |13  | 17
y:150|392|1452|2366|5202   => Ans f(9)=810
Author: Anjan KC
Date: feb 14, 2022
************************************************************************                            
*/
#include<stdio.h>
#include<conio.h>

 int main()
{
	 float x[100], y[100], xp, yp=0, p;
	 int i,j,n;

	 /* Input Sect'ion */
	 printf("Enter number of data: ");
	 scanf("%d", &n);
	 printf("Enter data:\n");
	 for(i=1;i<=n;i++)
	 {
		  printf("x[%d] = ", i);
		  scanf("%f", &x[i]);
		  printf("y[%d] = ", i);
		  scanf("%f", &y[i]);
	 }
	 printf("Enter interpolation point Xp: ");
	 scanf("%f", &xp);
	 /* Implementing Lagrange Interpolation */
	 for(i=1;i<=n;i++)
	 {
		  p=1;
		  for(j=1;j<=n;j++)
		  {
			   if(i!=j)
			   {
			    	p = p* (xp - x[j])/(x[i] - x[j]);
			   }
		  }
		  yp = yp + p * y[i];
	 }
	 printf("Interpolated value at %.3f is %.3f.", xp, yp);
	 getch();
}
