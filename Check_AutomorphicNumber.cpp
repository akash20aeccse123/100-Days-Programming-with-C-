//program to check a number is automorphic or not
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int num;
	cout<<"Enter Number: ";
	cin>>num;
	int sq=pow(num,2);
	
	
	if(sq%10==num%10)
	{
		cout<<"Automorphic Number";
	}
	else
	{
		cout<<"Not a Automorphic Number";
	}
	return 0;
}
