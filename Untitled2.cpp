#include<conio.h>
#include<stdio.h>
#include<math.h>
int main()
{
	float x[100],y[100],sumx=0,sumy=0,sumxx=0,sumxy=0,a,b,Y[100],A;
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
printf("y=aexp(bx)\n");

for(i=0;i<n;i++)
{
sumx=sumx+x[i];
sumy=sumy+log(y[i]);
sumxy=sumxy+x[i]*log(y[i]);
sumxx=sumxx+x[i]*x[i];
}
printf("sumx=%f\nsumy=%f\nsumxy=%f\nsumxx=%f\n",sumx,sumy,sumxy,sumxx);
b=(n*sumxy-sumx*sumy)/(n*sumxx-sumx*sumx);
A=(sumy-b*sumx)/n;
a=exp(A);
printf("a=%f\tb=%f\n",a,b);
}
