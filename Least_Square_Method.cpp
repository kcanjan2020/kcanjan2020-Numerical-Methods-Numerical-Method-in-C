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
		sumy=sumy+y[i];
		sumxx=sumxx+x[i]*x[i];
		sumxy=sumxy+x[i]*y[i];
	}
	b=(n*sumxy-sumx*sumy)/(n*sumxx-sumx*sumx);
	a=(sumy-b*sumx)/n;
	printf("\n The Value of a is:%f",a);
		printf("\n The Value of b is:%f",b);
			printf("\n The Equation is:y=%f+%fx",a,b);
			return 0;
			getch();
	
}
