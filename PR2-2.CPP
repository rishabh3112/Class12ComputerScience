#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

class candidate
{
	long rno;
	float score;
	char name[30];
	char remarks[40];

	void assignremarks()
		{
			if(score>=50)
			      strcpy(remarks,"Selected");
			else if(score<50)
			       strcpy(remarks,"Not selected");
		}
	public :
		void enter()
		{
			cout<<"Roll no: ";
			cin>>rno;
			cout<<"Score: ";
			cin>>score;
			cout<<"Name: ";
			gets(name);
			assignremarks();
		}
		void display()
		{
			cout<<"Your roll no is "<<rno<<endl<<"Your score is "<<score<<endl;
			cout<<"Your name is ";
			puts(name);
			cout<<endl;
			cout<<"Remarks  by teacher "<<remarks;

		}
};

void main()
{
	clrscr();
	candidate grade;
	cout<<"Welcome to UPSE:\n---------------\n";
	cout<<"Please enter details:"<<endl;
	grade.enter();
	cout<<"\nReport card:"<<endl;
	grade.display();
}