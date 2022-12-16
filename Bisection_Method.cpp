#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;
#include<math.h>

float f(float x)
{
	return(x*x*x-4*x-9);
}
int main()
{
float x0,x1,x2,e;
int count=0;
cout<<"Enter the Two Initial Guessing x0 and x1: \n";
cin>>x0>>x1;
cout<<"Enter Tolerence Error \n";
cin>>e;

if((f(x0)*f(x1))>0)
{
	cout<"Initial Guessig is wrong";
}
else
{
cout<<"Iteration\t a\t b\t f(a)\t\t f(b)\t C=(a+b)/2 \t f(a)";	
do
{
x2=(x0+x1)/2;
if((f(x0)*f(x2))>0)
{
	x0=x2;
	}	
	else
	{
		x1=x2;
	}
	count++;
		cout<<"\n"<<count<<"\t"<<"\t"<<x0<<"\t"<<x1<<"\t"<<f(x0)<<"\t"<<f(x1)<<"\t"<<x2<<"\t"<<f(x2)<<"\n";
			
}
while((fabs(f(x2)))>=e);
cout<<"The Root of Given Equaton is:"<<x2;
cout<<x2<<"\nNumber of Iteration:"<<count;

}
return(0);
}

