#include<iostream.h>
void palin(char a[])
{
	for(int l=0; a[l] != '\0'; l++);
	for(int i=0; i<l; i++)
	{
		if(a[i] != a[l-1-i])
		{
			break;
		}
	}

	if(i==l)
		cout<<"Given string is palidromic";
	else
		cout<<"No man its not palindromic";
}

void main()
{
	char s[10]="proorp";
	palin(s);
}
