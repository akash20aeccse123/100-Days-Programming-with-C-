//program to find armstrong number in given range
#include<iostream>
using namespace std;

int main()
{
	int s,e;
	cout<<"Enter start value: ";
	cin>>s;
	cout<<"Enter end value: ";
	cin>>e;
	
	for(int i=s;i<=e;i++)
	{
		int rem=0;
		int sum=0;
		int cube=0;
		int n=i;
		int currentN=i;
		while(n!=0)
		{
			rem=n%10;
			cube=(rem*rem*rem);
			sum=sum+cube;
			n=n/10;
		}
		if(currentN==sum)
		{
			cout<<i<<" ";
		}
	}
	return 0;
}

