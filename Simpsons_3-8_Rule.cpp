#include<stdio.h>  
#include<conio.h>  
#include<math.h>  
/*
Evauate 1/1+x^2 using Simpsons 3/8 Rules
Formula for Simpsons 3/8 Rule:I=3h/8[(y0+yn)
                                +3(y1+y2+y4+y5....+yn-1+yn-2)
                                +2(y3+y6+y9+.....yn-3]
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
 sum = f(a) + f(b);  
 for(i=1; i<=n-1;i++)  
 {   
  k=a+i*h;
    
  if(i%3==0)  
  {  
   sum1=sum1+2*f(k);  
  }  
  else  
  {  
   sum2=sum2+3*f(k);  
  }  
 }  
 integral=(sum+sum1+sum2)*h*3/8;  
 printf("\nThe integration is: %.5f", integral);  
 getch();  
 return 0;  
}  
