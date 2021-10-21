//program to check a number is odd or even
#include<iostream>
using namespace std;

void CheckOddEven(int num)
{
	if(num%2==0)
	{
		cout<<"Even Number";
	}
	else
	{
		cout<<"Odd number";
	}
}
int main()
{
	int n;
	cout<<"Enter Number to Check: ";
	cin>>n;
	CheckOddEven(n);
	return 0;
}
