#include<iostream.h>
#include<conio.h>

class num
{
	int n;
	public:
		num()
		{
			n=0;
		}
		num(num &no)
		{
		   n = no.n;
		}

		~num()
		{
			cout<<"\nNumber destroyed !!";
		}
		void getnum()
		{
		cin>>n;
		}
		void putnum()
		{
			cout<<n;
		}
};

void main()
{
	num number;
	cout<<"Enter value of number's n\t";
	number.getnum();

	num copy_number(number);
	cout<<"Value of n of copy_number\t";
	copy_number.putnum();

	getch();

}