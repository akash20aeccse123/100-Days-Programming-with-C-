//program to check a number is positive or negative
#include<iostream>
using namespace std;

bool CheckPositiveNumber(int num)
{
	if(num>0)
	{
		return true;
	}
	else
	return false;
}

bool CheckIsPositive(bool ans)
{
	if(ans==true)
	{
		cout<<"Positive Number";
	}
	else
	{
		cout<<"Negative Number";
	}
}
int main()
{
	int n;
	cout<<"Enter Number To Check: ";
	cin>>n;
	bool ans = CheckPositiveNumber(n);
	CheckIsPositive(ans);
	
	return 0;
}
