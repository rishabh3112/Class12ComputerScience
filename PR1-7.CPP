#include<iostream.h>
int odd(int a[3][3])
{
    int s=0;
    for(int i=0; i<3; i++)
	for(int j=0;j<3;j++)
	{
		if(a[i][j]%2 != 0)
			s+=a[i][j];
	}
    return s;
}

void main()
{

	int a[3][3]={1,2,3,4,5,6,7,8,9};
	cout<<"Sum of all the odd elements :\t"<<odd(a);
}
