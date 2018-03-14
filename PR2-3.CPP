#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class flight
{
	int fno;
	char dest[30];
	float dis;
	float fuel;

	void calfuel()
		{
			if(dis<=1000)
			       fuel=500;
			else if(dis<=2000&&dis>1000)
				fuel=1000;
			else
				fuel=2200;
		}
	public :
		void feedinfo()
		{
			cout<<"Flight no: ";
			cin>>fno;
			cout<<"Distance: ";
			cin>>dis;
			cout<<"Destination: ";
			gets(dest);
			calfuel();
		}
		void showinfo()
		{
			cout<<"Your flight no is "<<fno<<endl<<"Total distance being travelled: "<<dis<<endl;
			cout<<"Your destination is ";
			puts(dest);
			cout<<endl;
			cout<<"Total fuel consumed (in litres) is"<<fuel;

		}
};

void main()
{
	clrscr();
	flight fuel;
	cout<<"Please enter details ( flight no;distance;destination)"<<endl;
	fuel.feedinfo();
	cout<<"Passenger's Summary\n"<<endl;
	fuel.showinfo();
}