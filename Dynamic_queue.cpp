#include<iostream>
#include<conio.h>
using namespace std;
struct node
{
	int data;
	node* next;
}*front,*rear;

void insert(int val)
{
	node *add = new node;
	add -> data = val;
	add -> next = NULL;
	
	if(front==NULL)
	{
		rear = add;
		front = add;
	}
	else
	{
		rear->next = add;
		rear=add;
	}
}

void dequeue()
{
	if(front == NULL)
	{
		cout<<" False Message Ahead >> ";
	}
	else
	{
		node *temp = front;
		front = front->next;
		delete temp;
	}
}

void display()
{
	node *travel = front;
	if(front==NULL)
	{
		cout<<"\n You mad add something now!! \n";
		return;
	}
	cout<<"\n      --| EXIT |--\n";
	cout<<"\n Front ->";
	while(travel!=rear)
	{
		cout<<"  "<<travel->data<<"\n         ------\n         ";
		travel = travel->next;
	}
	cout<<"\n Rear -> "<<"  "<<rear->data<<"\n";
	cout<<"\n      --| Enter |--\n";
}

int main()
{
	int looper;
	int val;
	int go;
	
	queue:
	system("CLS");
	cout<<"\n Dynamic queue\n";
	cout<<" 1.Insert 2.Dequeue 3.Display\n\n Enter: ";
	cin>>looper;
	cout<<"\n----------------------------------\n";
	
	switch(looper)
	{
		case 1:
			cout<<" Insert\n ------\n";
			cout<<" Enter value to be inserted: ";
			cin>>val;
			insert(val);
			cout<<"\n "<<val<<" is inserted at rear";
			break;
			
		case 2:
			cout<<" Dequeue\n -------\n";
			dequeue();
			cout<<"\n Value at front is dequeued";
			break;
		
		case 3:
			cout<<" Display\n ------\n";
			display();
			break;
		
		default:
			cout<<" Nothing else allowed ;)";
	}
	cout<<"\n\n----------------------------------\n Continue: ";
	cin>>go;
	if(go)
	{
		goto queue;
	}
	getch();
	return 0;
}
