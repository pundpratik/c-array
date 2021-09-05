//WAP to sort array in ascending order.
#include<iostream>
using namespace std;
int main()
{
	int i,a[5],temp=0;
	cout<<"\n enter array element";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
		
	}
	for(i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
	
		cout<<"\n "<<a[i];
	}
}
