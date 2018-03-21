#include<iostream>
#include<conio.h>
using namespace std;
struct node
{
	int data;
	node* next;
}*top;

void push(int val)
{
	node *add = new node;
	add -> data = val;
	add -> next = NULL;
	
	if(top==NULL)
	{
		top = add;
	}
	else
	{
		node *temp = top;
		top = add;
		top -> next = temp;
		temp = NULL;
		delete temp; 
	}
}

void pop()
{
	if(top == NULL)
	{
		cout<<" False Message Ahead ??";
	}
	else
	{
		node *temp = top;
		top = top -> next;
		delete temp;
	}
}

void display()
{
	node *travel = top;
	cout<<"\n Top ->";
	while(travel!=NULL)
	{
		cout<<"  "<<travel->data<<"\n       ------\n       ";
		travel = travel->next;
	}
}

int main()
{
	int looper;
	int val;
	int go;
	
	stack:
	system("CLS");
	cout<<"\n Dynamic Stack\n";
	cout<<" 1.Push 2.Pop 3.Display\n\n Enter: ";
	cin>>looper;
	cout<<"\n---------------------------------\n";
	
	switch(looper)
	{
		case 1:
			cout<<" Push\n\n";
			cout<<" Enter value to be pushed: ";
			cin>>val;
			push(val);
			cout<<"\n "<<val<<" is pushed at top";
			break;
			
		case 2:
			cout<<" Pop\n\n";
			pop();
			cout<<"\n Value at top is popped";
			break;
		
		case 3:
			cout<<" Display\n";
			display();
			break;
		
		default:
			cout<<" Nothing else allowed ;)";
	}
	cout<<"\n---------------------------------\n Continue: ";
	cin>>go;
	if(go)
	{
		goto stack;
	}
	getch();
	return 0;
}
