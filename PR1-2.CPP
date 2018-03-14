#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	clrscr();
	randomize();

	for(int i=0; i<10; i++)
	{
		cout<<random(51)+50<<endl;

	}

	getch();

}