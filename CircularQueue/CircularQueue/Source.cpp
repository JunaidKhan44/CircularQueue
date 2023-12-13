#include<iostream>
using namespace std;
int f=0;
int c=0;
int d=0;
class student;
student * t;
class student
{
private:
	int id;
	int age;
public :
void Enqueue(int size)
{
	if (c==d && f==1)
	{
		cout<<"Queue Full"<<endl;
	}
	else
	{
		cout<<"Enter Id "<<endl;
		cin>>t[c].id;
		cout<<"Enter Age"<<endl;
		cin>>t[c].age;
		c++;
		if (c==size)
		{
			c=0;
			f=1;
		}
	}	
}
void Dequeue(int size)
	{
		if (c==d&&f==0)
		{
			cout<<"Queue Empty"<<endl;
		}
		else
		{
			cout<<t[d].id<<" Is DeQueue"<<endl;
			d++;
			if (d==size)
			{
				f=0;
				d=0;
			}
		}

	}
void Display(int size)
{
	if (c==d&&f==0)
	{
		cout<<"Queue Empty"<<endl;
	}
	else if (f==0)
	{
		for (int i = d; i < c; i++)
		{
			cout<<"Id is "<<t[i].id<<endl;
			cout<<"Age is "<<t[i].age<<endl;
		}
	}
	else
	{
		for (int f = d; f < size; f++)
		{
			cout<<"Id is "<<t[f].id<<endl;
			cout<<"Age is "<<t[f].age<<endl;
		}

		for (int r = 0; r < c; r++)
		{
			cout<<"Id is "<<t[r].id<<endl;
			cout<<"Age is "<<t[r].age<<endl;
		}
	}


}
};
void main()
{
	int op;
	int s;
	cout<<"Enter Size"<<endl;
	cin>> s;
	t=new student[s];
	
	do
	{
		cout<<"1 for Enqueue\n2 for Dequeue\n3 Display\n4 for Exit"<<endl;
		cin>>op;
		switch (op)
		{
		case 1:
			t->Enqueue(s);
			break;
		case 2:
			t->Dequeue(s);
			break;
		case 3:
			t->Display(s);
			break;
		case 4:
			cout<<"The End"<<endl;
			break;
		default:
			break;
		}

	} while (op!=4);


}