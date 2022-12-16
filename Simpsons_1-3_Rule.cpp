#include<stdio.h>  
#include<conio.h>  
#include<math.h>  
/*
Evauate 1/1+x^2 using Simpsons 1/3 Rules
Formula for Simpsons 1/3 Rule:I=h/3[(y0+yn)
                                +4(y1+y3+y5....+yn-1)
                                +2(y2+y4+y6+.....yn-2]
*/
//#define f(x) 1/(1+x*x) 
//OR
float f(float x)
{
	return(1/(1+pow(x,2)));
 } 
int main()  
{  
 float a,b,h,sum=0,sum1=0,sum2=0,integral,k;  
 int i, n;  
  
 printf("Enter The value of lower limit of integration:[a]= ");  
 scanf("%f",&a);  
 printf("\nEnter The value of upper limit of integration:[b]= ");  
 scanf("%f",&b);  
 printf("\n Enter sub intervals:[n]= ");  
 scanf("%d",&n);  
 h= (b-a)/n;  
 sum = f(a) + f(b); // Calculate y0 and yn--> sum=y0+yn 
 for(i=1; i<=n-1;i++)  
 {   
  k=a+i*h;
    
  if(i%2==0)  
  {  
   sum1=sum1+2*f(k);  
  }  
  else  
  {  
   sum2=sum2+4*f(k);  
  }  
 }  
 integral=(sum+sum1+sum2)*h/3;  
 printf("\nThe integration is: %.5f", integral);  
 getch();  
 return 0;  
}  
