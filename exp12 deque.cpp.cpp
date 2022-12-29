#include<iostream>
using namespace std;
class deque
{
	int que[10];
	int f,r;
	public :
	deque()
	{
		f=-1;
		r=-1;
	}
	void insert_front(int p);
	void insert_rear(int p);
	int delete_front();
	int delete_rear();
	void show();
	
};

int main()
{	
	static deque d1;
	cout<<"\n1.Insert front\n2.Delete front\n3.Insert rear\n4.Delete rear\n5.Show\n6.Exit\nEnter your choice :";
	int k;
	cin>>k;
	if(k==1)
	{	int j;
		cout<<"\nEnter element :";
		cin>>j;
		d1.insert_front(j);
		main();
	}
	else if(k==2)
	{
		int h;
		h=d1.delete_front();
		cout<<"\ndeleted element :"<<h;
		main();
	}
	else if(k==3)
	{	int f;
		cout<<"\nEnter element :";
		cin>>f;
		d1.insert_rear(f);
		main();
	}
	else if(k==4)
	{
		int h;
		h=d1.delete_rear();
		cout<<"\ndeleted element :"<<h;
		main();
	}
	else if(k==5)
	{
		d1.show();
		main();
	}
	else if(k==6)
	{
		return 0;
	}
	else
	cout<<"Enter valid choice !";
	
}

void deque :: insert_front(int p)
{
	if(f==r+1)
	cout<<"Sorry,Queue is full!";
	else if(f==-1)
	{
		f=9;
		
		que[f]=p;
	}
	else
	{
		f--;
		que[f]=p;
	}
	
}

void deque :: insert_rear(int p)
{
	if(f==r+1)
	{
		cout<<"Queue is full !";
		
	}
	else if(r==-1)
	{
		r=0;
		que[r]=p;
		
	}
	else
	{
		r++;
		que[r]=p;
	}
}

int deque :: delete_front()
{
	if((f==-1) || f==10)
	cout<<"Sorry , Queue is empty !";
	else
	{
		int g;
		g=que[f];
		que[f]=0;
		f++;
		return g;
	}
}
int deque :: delete_rear()
{
	if((r==-1))
	cout<<"Sorry , Queue is empty !";
	else
	{
		int g;
		g=que[r];
		que[r]=0;
		r--;
		return g;
	}
}

void deque :: show()
{	cout<<"Remaining values are :";
	for (int i=0;i<10;i++)
	{
		cout<<que[i]<<"\t";
	}
}
