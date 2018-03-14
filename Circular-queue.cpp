#include<iostream.h>
#include<conio.h>

int Insert(int arr[10], int val, int &front, int &rear)
{
    /*
        @Insert:
        ````````
        return:
            1. 1 if value inserted
            2. 0 if queue overflowed
    */
    if(rear==-1)
    {
        front = 0;
        rear = 0;
	arr[rear] = val;
	return 1;
    }
    else{
	if(rear==9&&front!=0)
	{
	    rear = 0;
	    arr[rear] = val;
	    return 1;
	}
	else if(rear==9&&front==0 || rear+1 == front)
	{
	    return 0;
	}
	else{
	    rear++;
	    arr[rear] = val;
	    return 1;
	}
    }
}

int Delete(int arr[10], int &front, int &rear)
{
    /*
        @Delete():
        ````````
        return:
	    1. 1 if value deleted
	    2. 0 if queue underflowed
    */
    if(front == -1)
    {
	return 0;
    }
    else
    {
	if(front==rear)
	{
	    front = -1;
	    rear = -1;
	    return 1;
	}
	else if(front==9){
	   front = 0;
	}
	else{
	    front++;
	}
	return 1;
    }

}
int Display(int arr[10], int &front, int &rear)
{
    /*
	@Display:
	````````
	return:
	    1. 1 if queue displayed
	    2. 0 if queue is empty
    */
    if(front==-1)
    {
	return 0;
    }
    else{
	int travel = front;
	cout<<"Front -> ";
	while(travel != rear)
	{
	    cout<<" "<<arr[travel]<<" |";
	    travel++;
	    if(travel==10)
                travel=0;
        }
        cout<<" "<<arr[rear]<<" <- Rear";
        return 1;
    }

}

void main()
{
    int arr[10],choice;
    int front=-1, rear=-1;
    int val;
    char loop_menu='y';

    while(loop_menu=='y')
    {
        clrscr();
	cout<<"\n\t\t Circular Queue \n\t";
        cout<<"1. Insert\n\t2. Delete\n\t3. Display\n\t";
        cout<<"Enter Choice: ";
        cin>>choice;
        clrscr();
        cout<<"\n\t";
        switch(choice)
        {
            case 1:
                    cout<<"Insert\n\n\t";
                    cout<<"Enter Number to be inserted: ";
                    cin>>val;
                    if(Insert(arr , val , front , rear))
                    {
			cout<<"\n Value Inserted!\n";
			getch();
                        break;
                    }
                    else
                    {
                        cout<<"\n Error 1001: Queue Overflowed , Please Delete something from Queue. \n";
                        getch();
                        break;
                    }
            
            case 2:
                    cout<<"Delete\n\n\t";
		    val = arr[front];
		    if(Delete(arr , front , rear))
		    {
			cout<<"\n "<<val<<" Value Deleted!\n";
			getch();
			break;
                    }
                    else
                    {
                        cout<<"\n Error 1002: Queue Underflowed , Please Insert something in Queue. \n";
                        getch();
                        break;
		    }

            case 3:
		    cout<<"Display\n\n\t";
		    if(Display(arr , front , rear))
		    {
			cout<<"\n";
                        getch();
                        break;
                    }
                    else
                    {
                        cout<<"\n Error 4444: Queue is empty , Please Insert something in Queue. \n";
                        getch();
                        break;
                    }

        }
        cout<<"Do you want to continue: ";
        cin>>loop_menu;
    }
    getch();
}