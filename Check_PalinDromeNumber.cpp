//program to check a number is palindrome or not
#include<iostream>
using namespace std;

void CheckPalindromeNum(int n)
{
	int currentNum = n;
	int rem=0;
	int rev=0;
	
	while(n!=0)
	{
		rem=n%10;
		rev=(10*rev)+rem;
		n=n/10;
	}
	if(currentNum==rev)
	{
		cout<<"Palindrome Number";
	}
	else
	{
		cout<<"Not a Palindrome Number";
	}
}

int main()
{
	int num;
	cout<<"Enter Number to cehck: ";
	cin>>num;
	CheckPalindromeNum(num);
	return 0;
}
