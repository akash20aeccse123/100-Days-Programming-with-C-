//Implement pow(x, n), which calculates x raised to the power n (i.e., xn).
#include<iostream>
#include<cmath>
using namespace std;

double CheckPow(double x, int n)
{
	long long double a=(long long double)n;
	long long  pw=pow(x,a);
	return pw;
}
int main()
{
	double x;
	cin>>x;
	int n;
	cin>>n;
	double ans=CheckPow( x, n);
	cout<<ans<<endl;
	return 0;
}
