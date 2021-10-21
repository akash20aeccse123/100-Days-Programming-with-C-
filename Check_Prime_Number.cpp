//program to check a number is Prime or Not
#include<iostream>
using namespace std;
int isPrime(int n)
{
	int counter=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			counter++;
		}
	}
	return counter;
}
int CheckPrime(int ans)
{
	if(ans==2)
	{
		cout<<"Prime Number";
	}
	else
	{
		cout<<"Not a Prime";
	}
}
int main()
{
	int num;
	cout<<"Enter Number to check: ";
	cin>>num;
	int ans = isPrime(num);
	CheckPrime(ans);
	return 0;
}
