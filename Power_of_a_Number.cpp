//program to find power of a number
#include<iostream>
#include<cmath>
using namespace std;

int CheckPow(int n)
{
	int pw=pow(n,2);
	return pw;
}
int main()
{
	int num;
	cout<<"Enter Number: ";
	cin>>num;
	int ans=CheckPow(num);
	cout<<"Power = "<<ans<<endl;
	return 0;
}
