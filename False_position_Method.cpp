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
do
{
count++;
x2=x0-(((x1-x0)*f(x0))/(f(x1)-f(x0)));
if((f(x0)*f(x2))>0)
{
	x0=x2;
	}	
	else
	{
		x1=x2;
	}	
}
while((fabs(f(x2)))>=e);
cout<<"The Root of Given Equaton is:"<<x2;

}

