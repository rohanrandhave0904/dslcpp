#include<iostream>
using namespace std;

static int top=-1;
static char s1[20];
static char s2[20];
static char st[20];

int isstackfull()
{
	if(top==9)
	return 1;
	else
	return 0;
	
}

int isstackempty()
{
	if(top==-1)
	return 1;
	else
	return 0;
}

void push(char d)
{
	top=top+1;
	s1[top]=d;
    
}

char pop()
{
	char g;
	g=s1[top];
	top--;
	return g;
}

int main()
{
	int y;
	cout<<"\n1.ACCEPT ORDER.......\n2.REVERSED WORD.......\n3.CHEK PALLINDROME.........\n4.EXIT....\n\nENTER THE CHOICE::";
	cin>>y;
	if(y==1)
	{
		int e=0;
		for(int s=0;s<10;s++)
		{
			s1[s]=0;
			s2[s]=0;
		}
		top=-1;
		char t;
		cout<<"ENTER THE WORD WHICH IS TO BE REVERSED::";
		cin>>st;
		while(st[e]!='\0')
		{
			t=st[e];
			if(isstackfull())
			{
				cout<<"ENTER SMALL WORD.......";
				break;
			}
			else
			{
				push(t);
				e++;
			}
			
	    }
	    main();
    }
	else if(y==2)
	{
		char m;
		int g=0;
		int flag=0;
		while(!isstackempty())
		{
		    m=pop();
		    s2[g]=m;
		    flag=1;
		    g++;
		}
		if(flag==0)
		{
			cout<<"\nSORRY.....NO WORD IS ENTERED....";
		}
		else
		{
			cout<<"\n\nREVERSED STRING::"<<s2<<endl;
		}
		main();
	}
	else if(y==3)
	{
		if(st[0]==0)
		{
			cout<<"\n\nENTER THE WORD FIRST.........";
		}
		else
		{
			int h;
			int flag1=0;
			for(h=0;h<10;h++)
			{
				if(st[h]!=s2[h])
				{
					flag1=1;
				}
			}
			if(flag1==1)
			{
				cout<<"\n\nWORD IS NOT PALLINDROME.......";
			}
			else
			{
				cout<<"\n\nWORD IS PALLINDROME........";
			}
			
		}
		main();
		
	}
	else if(y==4)
	{
		return 0;
		main();
		
	}
	else
	{
		cout<<"\n\nENTER VALID CHOICE.....";
		main();
	}
	return 0;
}


