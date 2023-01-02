#include<iostream>
#include<string.h>
using namespace std;

class stack
{
	public:
		int top;
		char s[50];
		stack()
		{
			top=-1;
		}
		void push(char val);
		int isfull();
		int isempty();
		char pop();
};

class str
{
	char inputstr[50],revstr[50];
	stack strobj;
	public:
		void readstr();
		void revsstr();
		void convertstr();
		void checkpallindrome();
		
};
int stack::isempty()
{
	if(top==-1)
	return 1;
	else
	return 0;
}
int stack::isfull()
{
	if(top==9)
	return 1;
	else
	return 0;
}
void stack::push(char val)
{
	if(!isfull())
	{
		top++;
		s[top]=val;
	}
	else
	{
		cout<<"STACK IS FULL.......";
	}
}
char stack::pop()
{
	char val='\0';
	if(!isempty())
	{
		val=s[top];
		top--;
		
	}
	else
	{
		cout<<"STACK IS EMPTY...";
	}
	return val;
}

void str::readstr()
{
	cout<<"ENTER THE STRING::";
	gets(inputstr);
	cout<<"YOU HAVE ENTERED::"<<inputstr<<endl;
}
void str::revsstr()
{
	int i;
	char ch;
	for(i=0;inputstr[i]!='\0';i++)
	{
		strobj.push(inputstr[i]);
		
	}
	i=0;
	cout<<"AFTER REVERSE YOUR STRING WILL BE::";
	while(!strobj.isempty())
	{
		ch=strobj.pop();
		cout<<ch;
		revstr[i]=ch;
		i++;
	}
	cout<<endl;
}
void str::convertstr()
{
	int i,j=0;
	char tempstr[50];
	for(i=0;inputstr[i]!='\0';i++)
	{
		if(inputstr[i]>=97 && inputstr[i]<=122)
		{
			tempstr[j]=inputstr[i];
			j++;
		}
		else if(inputstr[i]>=65 && inputstr[i]<=90)
		{
			tempstr[j]=inputstr[i]+32;
			j++;
			
		}
	}
	tempstr[j]='\0';
	strcpy(inputstr,tempstr);
	cout<<"YOUR CONVERTED STRING::"<<inputstr<<endl;
}
void str::checkpallindrome()
{
	cout<<"\n\n\n";
	cout<<"\nCHECK FOR PALLINDROME....\n";
	readstr();
	cout<<"\n\n";
	convertstr();
	for(int i=0;i<49;i++)
	revstr[i]=0;
	revsstr();
	if(strcmp(inputstr,revstr)==0)
	cout<<"ENTER STRING IS PALLINDROME......";
	else
	cout<<"ENTER STRING IS NOT PALLINDROME...";
}
int main()
{
	str obj;
	//obj.readstr();
	//obj.convertstr();
	//obj.revsstr();
	obj.checkpallindrome();
	return 0;
}
