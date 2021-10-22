//program to find fibonacci series upto nth term
#include<iostream>
using namespace std;

void FibonacciSeries(int n)
{
	int first=0,second=1,temp;
	for(int i=0;i<n;i++)
	{
		if(i<=1)
		{
			temp=i;
		}
		else
		{
			temp=first+second;
			first=second;
			second=temp;
		}
		cout<<temp<<" ";
		
	
	}
}

int main()
{
	int num;
	cout<<"Enter Nth Number: ";
	cin>>num;
	FibonacciSeries(num);
	return 0;
}
