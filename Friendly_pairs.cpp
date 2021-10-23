//check friendly pair
#include<iostream>
using namespace std;

int FirstNumber(int a)
{
	int sum1=0;
	for(int i=1;i<a;i++)
	{
		if(a%i==0)
		{
			sum1 = sum1+i;
		}
	}
	return sum1;
}
int SecondNumber(int b)
{
	 int sum2=0;
     for(int i=1;i<b;i++)
     {
     	if(b%i==0)
     	{
     		sum2=sum2+i;
		}
	 }
	 return sum2;
}
void CheckFriendLy(int n1, int n2, int ans1,int ans2)
{
	if(n1==ans2&&n2==ans1)
	{
		cout<<"Friendly Pair";
	}
	else
	{
		cout<<"Not Friendly Pair";
	}
}
int main()
{
	int n1,n2;
	cout<<"Enter two numbers: ";
	cin>>n1>>n2;
	int ans1=FirstNumber(n1);
	int ans2=SecondNumber(n2);
	CheckFriendLy(n1,n2,ans1,ans2);
	return 0;
}
