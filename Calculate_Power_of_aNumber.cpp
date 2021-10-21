//calculate the power of a number
#include<iostream>
#include<cmath>
using namespace std;

int CalculateNum(int n,int x)
{
	int powrr=pow(n,x);
	return powrr;
}
int main()
{
	int num;
	cout<<"Enter Number: ";
	cin>>num;
	int pw;
	cout<<"Enter Power: ";
	cin>>pw;
	int ans = CalculateNum(num,pw);
	cout<<"Power is = "<<ans<<endl;
	return 0;
}
