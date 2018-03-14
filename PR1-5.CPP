#include<iostream.h>
void main()
{

	int a[3][3]={1,2,3,4,5,6,7,8,9};
	int s1=0,s2=0;

	for(int i=0;i<3;i++)
	{
		s1+=a[i][i];
		s2+=a[i][2-i];
	}

	cout<<"Sum of pricipal diagonal:\t"<<s1<<"\n";
	cout<<"Sum of off diagonal:\t"<<s2;
}
