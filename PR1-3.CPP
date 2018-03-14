#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

float si(int p, int r, int t=1)
{
	return (p*r*t)/100;
}

void main()
{

	int p, r;
	cout<<"Enter the values of p: \t";
	cin>>p;
	cout<<"Enter the values of r: \t";
	cin>>r;
	cout<<"time is taken as 1 year";

	cout<<"\nSimple interest: "<<si(p,r);

	getch();
}