#include<iostream.h>
#include<conio.h>

void incre(int a, int b)
{
  a++;
  b++;

  cout<<a<<" "<<b<<endl;

}

void increm(int &a, int &b)
{
  a++;
  b++;

  cout<<a<<" "<<b<<endl;

}



void main()
{
	int a,b;
	cout<<"Enter value of a \t";
	cin>>a;
	cout<<"\nEnter value of b \t";
	cin>>b;

	cout<<"Calling incre() by value\n------------------\n";
	incre(a,b);
	cout<<"\nValue of a: "<<a<<"\nValue of b: "<<b<<endl;

	cout<<"Calling increm() by refrence\n------------------\n";
	increm(a,b);
	cout<<"\nValue of a: "<<a<<"\nValue of b: "<<b<<endl;



  getch();
}
