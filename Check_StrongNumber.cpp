//program to check strong number or not
#include<iostream>
using namespace std;

void CheckStrongNum(int n)
{
	int rem=0;
	int currentNum=n;
	
	int sum=0;
	while(n!=0)
	{
		int fact=1;
		rem=n%10;
		for(int i=rem;i>=1;i--)
		{
			fact=fact*i;
		}
		sum = sum+fact;
		n=n/10;
	}
	if(currentNum==sum)
	{
		cout<<"Strong Number";
	}
	else
	{
		cout<<"Not a Strong number";
	}
}
int main()
{
	int num;
	cout<<"Enter Number : ";
	cin>>num;
	CheckStrongNum(num);
	return 0;
}
