/* 
**************************************************************** ******* 
Exponential Curve Fitting Method :y=ae^bx
                        -->Taking log on both side
                        log(y)=log(a)+log(e^bx)
                        log(y)=log(a)+bxlog(e)
                        loy(y)=log(a)+bx
                       Y= A+bx --> Y=log(y) | A=log(a)
                       x:0   |1   |2    |3
                       y:1.05|2.10|3.85|8.30  =>Ans:y=1.043e^0.681x
Author: Anjan Kumar KC
Date: feb 14, 2022
**************************************************************** *******                           
*/
#include<conio.h>
#include<stdio.h>
#include<math.h>
int main()
{
	float x[100],y[100],sumx=0,sumy=0,sumxx=0,sumxy=0,a,b;
	int i,n;
	printf("Name : Anjan K.C.\n");
	printf("Roll :06 \n");
	printf("Enter the Number of Data point:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n X[%d]=",i);
		scanf("%f",&x[i]);
		printf("\nY[%d]=",i);
		scanf("%f",&y[i]);
		
	}
	for(i=0;i<n;i++)
	{
		sumx=sumx+x[i];
		sumy=sumy+log(y[i]);
		sumxx=sumxx+x[i]*x[i];
		sumxy=sumxy+x[i]*log(y[i]);
	}
	float A;
	b=(n*sumxy-sumx*sumy)/(n*sumxx-sumx*sumx);
	A=(sumy-b*sumx)/n;
	// A=log(a)
	//--> a=exp(A)
	  a=exp(A);
	printf("\n The Value of a is:%f",a);
		printf("\n The Value of b is:%f",b);
			printf("\n The Equation is:y=%0.3f+e^%0.3fx",a,b);
			return 0;
			getch();
	
}
