//program to check leap year or not
#include<iostream>
using namespace std;
void CheckLeapYear(int y)
{
	if(y%4==0 && y%100!=0 || y%400==0)
	{
		cout<<"Year is Leap Year";
	}
	else
	{
		cout<<"Year is not a Leap Year";
	}
}
int main()
{
	int yr;
	cout<<"Enter Year to Check: ";
	cin>>yr;
	CheckLeapYear(yr);
	return 0;
}
