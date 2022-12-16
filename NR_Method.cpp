/* 
**************************************************************** ******* 
Author: Anjan KC
Date: feb 14, 2022
**************************************************************** ******* 
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

// Defining equation to be solved.
//#define    f(x)    3*x - cos(x) -1
float f(float x)
{
	return(3*x - cos(x) -1);

}
// Defining derivative of f1(x).
//#define   f1(x)   3 + sin(x)
float f1(float x)
{
return(3 + sin(x));

}
int main()
{
	 float x0, x1,e;
	 int count=0;
	 
     /* Inputs */
	 printf("\nEnter initial guess:\n");
	 scanf("%f", &x0);
	 printf("Enter tolerable error:\n");
	 scanf("%f", &e);
	 /* Implementing Newton Raphson Method */
	 
	    if( f1== 0)
		  {
			   printf("Mathematical Error.");
			   exit(0);
		  }	
	
		  else
		  {
		  	printf("\n Iteration\tx0\tf(x0)\tf(x1)\tx1\n");
		  	  do
				{
		count=count+1;
		  x1 = x0 -(f(x0)/f1(x0));
		  x0 = x1;
    	  printf("%d\t\t%f\t%f\t%f\t%f\n",count,x0,f(x0),f1(x0),x1);
	      
		  
	 }while(fabs(f(x1))>e);
	
	 printf("\nRoot is: %f", x1);
	 getch();
}
}
