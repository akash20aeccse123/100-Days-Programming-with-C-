//program to find hcf of two numbers
#include<iostream>
using namespace std;

void Check_Hcf(int a,int b)
{
	int temp1=a;
	int temp2=b;
	int temp;
	while(temp2!=0)
	{
		temp=temp1%temp2;
		temp1=temp2;
		temp2=temp;
	}
	int hcf=temp1;
	cout<<"hcf="<<hcf<<endl;
	int lcm=a*b/hcf;
	cout<<"lcm="<<lcm<<endl;
}
int main()
{
	int a,b;
	cin>>a>>b;
	Check_Hcf(a,b);
	return 0;
}
