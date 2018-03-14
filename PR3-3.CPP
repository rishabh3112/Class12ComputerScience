#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class num
{
  int n;
  public:
	num(int i)
	{
		cout<<"no"<<i<<" created\n";
		n=i;
	}

	~num()
	{
		cout<<"no"<<n<<" destroyed\n";
	}
};
void main()
{
  clrscr();
  num no1(1);
  num no2(2);
  num no3(3);
  getch();
}