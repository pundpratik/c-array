/*Write a program to search particular value in an array and return the index number where it is
located.*/
#include<iostream>
using namespace std;
int main()
{
	int a[5],i,search=0,f=0;
	cout<<"\n enter 5 element of array";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
		
	}
	cout<<"\n which element you want to find";
	cin>>search;
	for(i=0;i<5;i++)
	{
		if(search==a[i])
		{
			f=1;
			break;
		}
		
	}
	if(f==1)
	{
		cout<<"\n element is found "<<a[i]<<"  on "<<i<<" index";
	}
	else
	{
		cout<<"\n element is not in array";
	}
	
}
