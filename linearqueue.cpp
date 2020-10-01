@ Alen George

\\ Code

#include<iostream>
#include<process.h>



using namespace std;
# define ma 10

int que[ma],fron=-1,rear=-1;
int item;

int insertion(int item)
{
    if(rear==(ma-1))
    {
        cout<<"\n\t \t Queue is full ";
        return 0;
    }
    else
    {
        rear=rear+1;
        que[rear]=item;
        cout<<"\n\t \t Inserting item ";
    }
    if(fron==-1)
    {
        fron=0;
    }
}

int deletion()
{
    int data;
    if(fron==-1)
    {
        cout<<"\n\t \t Queue is empty ";
        return 0;
    }
    else
    {
        data=que[fron];
        if(fron==rear)
        {
            fron=rear=-1;
        }
        else
        {
            fron=fron+1;
            return data;
            cout<<"\n\t \t Deleting item ";
        }
    }
}

void display()
{
    int i;
    cout<<"\n\t \t The Queue contains : ";
    for(i=fron;i<=rear;i++)
    {
        cout<<'\t'<<que[i]<<'\t';
    }
    cout<<"\n";

}
int main()
{

int choice;
char ch='y';
do
{
cout<<"\t \t Menu  : ";
cout<<"\n\t \t 1. Insertion ";
cout<<"\n\t \t 2. Deletion ";
cout<<"\n\t \t 3. Display ";
cout<<"\n\t \t 4. Exit";
cout<<"\n\n\t \t Enter the choice :";
cin>>choice;
if(choice==1)
{
    cout<<"\n \t \t Enter the item :";
    cin>>item;
    insertion(item);
}
else if(choice==2)
{
    deletion();
}
else if(choice==3)
{
    display();
}
else if(choice==4)
{
    exit(0);
}
else
{
    cout<<"\n\t \t Wrong Choice ";
    return 0;
}
cout<<"\n\t \t Do you want continue :";
cin>>ch;
}while(ch=='y'||ch=='Y');
}
