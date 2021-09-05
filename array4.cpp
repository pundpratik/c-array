//WAP to find smallest number in an array.
#include<iostream>
using namespace std;
int main()
{
	int a[5],i,min;
	cout<<"\n enter 5 elements";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<5;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	cout<<"\n smallest number="<<min;
}
