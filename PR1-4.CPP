#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

struct e
{
	int no,age,pay;
	char name[10];

};


void main()
{
   e emp[3];
   int a;

   for(int i=0; i<3; i++)
   {
	cout<<"\nemployee no: ";
	cin>>emp[i].no;
	cout<<"\nemployee age: ";
	cin>>emp[i].age;
	cout<<"\nemployee salary : ";
	cin>>emp[i].pay;
	cout<<"\nName of employee";
	gets(emp[i].name);

   }

   cout<<"\nEnter id of employee";
   cin>>a;

   for(i=0; i<3; i++)
   {
	if(emp[i].no == a)
	{
	  cout<<"\nemployee no: "<<emp[i].no;
	  cout<<"\nemployee salary: "<<emp[i].pay;
	  cout<<"\nemployee age: "<<emp[i].age;
	  cout<<"\nemployee name: ";
	  puts(emp[i].name);

	}
   }


}