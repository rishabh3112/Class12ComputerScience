#include<iostream.h>
#include<conio.h>
#include<stdio.h>

struct num
{
	int n;
};

int sqr(num a)
{
	return a.n*a.n;
}

void main()
{
   clrscr();
   num no;
   cout<<"Enter the value of num:\t";
   cin>>no.n;
   cout<<"Square of entered num is "<<sqr(no);
   getch();
}