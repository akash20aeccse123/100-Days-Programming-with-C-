//program to find quardant in which cordinate lie.
#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"Enter two quardant: ";
	cin>>a>>b;
	if(a>0 && b>0)
	{
		cout<<"1st quadrant";
	}
	if(a<0 && b>0)
	{
		cout<<"2nd quadrant";
	}
	if(a<0 && b<0)
	{
		cout<<"3rd quadrant";
	}
	if(b<0 && a>0)
	{
		cout<<"4th quadrant";
	}
	if(a==0)
	{
		cout<<"lies y axis";
	}
	if(b==0)
	{
		cout<<"lies x axis";
	}
	if(a==0 && b==0)
	{
		cout<<"lie on the origin";
	}
	
	return 0;
}
