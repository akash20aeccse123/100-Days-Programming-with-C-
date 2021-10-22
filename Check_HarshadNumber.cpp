//program to check a number is harshad number or not
#include<iostream>
using namespace std;

int CheckHarshadNumber(int n)
{
	int rem=0;
	int sum=0;
	int Cn=n;
	while(n!=0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	if(Cn%sum==0)
	{
		cout<<"Harshad Number";
	}
	else
	{
		cout<<"Not a Harshad Number";
	}
}

int main()
{
	int num;
	cout<<"Enter Number: ";
	cin>>num;
	CheckHarshadNumber(num);
	return 0;
}
