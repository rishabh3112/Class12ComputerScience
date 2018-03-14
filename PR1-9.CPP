#include<iostream.h>
void sumrc(int a[3][3])
{
    int s=0;
    for(int i=0; i<3; i++)
    {
	for(int j=0;j<3;j++)
	{
		s+=a[i][j];
	}
	cout<<s<<"\t";
	s=0;
    }
    cout<<"Column Sum: \n";
    for(i=0; i<3; i++)
    {
	for(int j=0;j<3;j++)
	{
		s+=a[j][i];
	}
	cout<<s<<"\t";
	s=0;
    }

}

void main()
{

	int a[3][3]={1,2,3,4,5,6,7,8,9};
	cout<<"Row sum :\n";
	sumrc(a);
}
