//program to check perfect number or not
#include<iostream>
using namespace std;

int isPerfectNum(int n)
{
    int currentN=n;
    int sum=0;
    for (int i = 1; i < n; i++)
    	
    {
    	if (n%i==0)
    	{
    		sum=sum+i;
    	}
    }
    return sum; //here we return the sum value
}
void CheckPerfect(int CurrNt, int NewNum)
{
	if (CurrNt==NewNum)
	{
		cout<<"Perfect Number";
	}
	else
	{
		cout<<"Not a Perfect Number";
	}
}
int main()
{
	int num;
	cout<<"Enter Number to check: ";
	cin>>num;
	int ans=isPerfectNum(num);
	CheckPerfect(num,ans);
	return 0;
}
