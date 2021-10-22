//program to check abundant number
#include<iostream>
using namespace std;

int CheckAbundantNum(int n)
{
	int rem=0;
	int sum=0;
	
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	return sum;
}
int main()
{
	int num;
	cout<<"Enter Number to Check: ";
	cin>>num;
	int ans = CheckAbundantNum(num);
	if(ans>num)
	{
		cout<<"Abundant Number";
	}
	else
	{
		cout<<"Not an Abundant Number";
	}
}
