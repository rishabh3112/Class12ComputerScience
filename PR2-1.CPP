#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class resort
{
	int rno;
	int charges;
	int day;
	char name[30];

	float compute()
		{
			int a=charges*day;
			if(a>11000)
				a=1.02*charges*day;
			return a;
		}
	public :
		void getinfo()
		{
			cout<<"Room NO:\t";
			cin>>rno;
			cout<<"\nCharges:\t";
			cin>>charges;
			cout<<"\nNumber of Days of stay:\t";
			cin>>day;
			cout<<"\nName:\t";
			gets(name);
		}
		void displayinfo()
		{
			cout<<"Room NO:\t";
			cout<<rno;
			cout<<"\nCharges:\t";
			cout<<charges;
			cout<<"\nNumber of Days of stay:\t";
			cout<<day;
			cout<<"\nName:\t";
			puts(name);
			cout<<"\n------------------------\n"<<"Total amount:\t";
			cout<<compute();

		}
};

void main()
{
	clrscr();
	resort a;
	cout<<"Welome to resort a \n-------------------\n";
	cout<<"Please enter details:"<<endl;
	a.getinfo();
	cout<<"\nBill\n----\n"<<endl;
	a.displayinfo();
	getch();
}