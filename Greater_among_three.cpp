//program to check greater number among three numbers
#include<iostream>
using namespace std;
int CheckGreaterElement(int a, int b, int c)
{
	if(a>b && a>c)
	{
		return a;
	}
	else if(b>a && b>c)
	{
		return b;
	}
	else
	return c;
}
int main()
{
	int a,b,c;
	cout<<"Enter three numbers: ";
	cin>>a>>b>>c;
	int ans = CheckGreaterElement(a,b,c);
	cout<<"Greater Number is = "<<ans<<endl;
	return 0;
}
