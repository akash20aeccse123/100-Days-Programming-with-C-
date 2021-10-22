//program to find factorial of a number
#include<iostream>
using namespace std;

int FactorialNum(int n)
{
	int fact=1;
	for(int i=n;i>=1;i--)
	{
		fact=fact*i;
	}
	return fact;
}

int main()
{
	int n;
	cout<<"Enter number : ";
	cin>>n;
	int ans=FactorialNum(n);
	cout<<"Factorial is = "<<ans<<endl;
	return 0;
}
