#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

class garment
{
	char gcode[20];
	char gtype[20];
	int gsize;
	char gfabric[20];
	float gprice;
	void assign();

	public :
	       garment()
	       {
			gsize = 0;
			gprice = 0.0;
			strcpy(gfabric,"Not Defined");
			strcpy(gtype,"Not Defined");
	       }
	       void input();
	       void display();
};

void garment::assign()
		{
		  if(!(strcmp(gfabric,"Cotton")))
		  {
		    if(strcmp(gtype,"Trouser")==0)
			gprice=1300;
		    else if(strcmp(gtype,"Shirt")==0)
			gprice=1100;

		  }
		  else
		  {
		   if(strcmp(gtype,"Trouser")==0)
			gprice=1300-(1300/10);
		    else if(strcmp(gtype,"Shirt")==0)
			gprice=1100-(1100/10);
		  }



		}
void garment::input()
		{
			cout<<"Size: ";
			cin>>gsize;
			cout<<"Code (mentioned on label with it): ";
			gets(gcode);
			cout<<"Type (shirt,etc): ";
			gets(gtype);
			cout<<"Fabric (Cotton , etc): ";
			gets(gfabric);
			assign();
		}
void garment::display()
		{
			cout<<"Your "<<gtype<<"'s Size is "<<gsize<<endl<<"Your "<<gtype<<"'s code is "<<gcode<<endl;
			cout<<"It is made up of ";
			puts(gfabric);
			cout<<endl;
			cout<<"You have to pay just Rs"<<gprice;

		}


void main()
{
	clrscr();
	garment g;
	cout<<"Welcome to Peter England\n Please enter details:"<<endl;
	g.input();
	cout<<"Buyer's Summary\n"<<endl;
	g.display();
}