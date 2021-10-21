//program to Check ArmStrong Number or not
#include<iostream>
using namespace std;

void CheckArmStrongNum(int n)
{
	int currentNum=n;
	int rem=0;
	int sq=0;
	int sum=0;
	
	while(n!=0)
	{
		rem=n%10;
		sq=(rem*rem*rem);
		sum=sum+sq;
		n=n/10;
	}
	if(currentNum==sum)
	{
		cout<<"ArmStrong Number";
	}
	else
	{
		cout<<"Not a ArmStrong Number";
	}
}

int main()
{
	int num;
	cout<<"Enter number: ";
	cin>>num;
	CheckArmStrongNum(num);
	return 0;
}
