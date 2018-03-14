#include<iostream.h>
#include<conio.h>

class num
{
  private:
	int num;
  public:
	void getnum()
	{
		cout<<"Enter value of number:\t";
		cin>>num;
	}
	void outnum()
	{
		cout<<"Value of num:\t"<<num<<endl;
	}

};

void main()
{
  num n[5];
  for(int i=0;i<5;i++)
  {
    n[i].getnum();
  }

  for(i=0;i<5;i++)
  {
    n[i].outnum();

  }
 getch();
}