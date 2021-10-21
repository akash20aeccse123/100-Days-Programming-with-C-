//program to check prime number within a Given range
#include<iostream>
using namespace std;

int CheckPrime_In_GivenRange(int s, int e)
{
	for(int i=s; i<=e; i++)
	{
		int counter=0;
		
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				counter++;
			}
		}
		if(counter == 2)
		{
			cout<<i<<endl;
		}
	}
}
int main()
{
	int start,end;
	cout<<"Enter Starting value: ";
	cin>>start;
	cout<<"Enter Ending value: ";
	cin>>end;
	CheckPrime_In_GivenRange(start, end);
	return 0;
}
