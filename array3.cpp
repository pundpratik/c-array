//WAP to find greatest number in an array.
#include<iostream>
using namespace std;
int main()
{
	int a[5],max;
	cout<<"\n enter 5 element";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<5;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	cout<<"\n greatest number="<<max;
}
