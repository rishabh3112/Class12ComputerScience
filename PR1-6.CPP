#include<iostream.h>
void transpose(int a[3][3])
{
	int b[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			b[i][j] = a[j][i];
		}
	}

	for(i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			a[i][j] = b[i][j];
		}
	}

}

void main()
{

	int a[3][3]={1,2,3,4,5,6,7,8,9};
	transpose(a);
	for(int i=0; i<3; i++)
	{
	    for(int j=0; j<3; j++)
		cout<<"\t"<<a[i][j];
		cout<<"\n";
	}
}
