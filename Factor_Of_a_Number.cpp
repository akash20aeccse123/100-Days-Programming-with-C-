//program to find factor of a number
#include<iostream>
using namespace std;

void printFactor(int num)
{
	for(int i=1;i<num;i++)
	{
		if(num%i==0)
		{
			cout<<i<<" ";
		}
	}
}
int main()
{
	int num;
	cout<<"Enter Number: ";
	cin>>num;
	printFactor(num);
	return 0;
}
