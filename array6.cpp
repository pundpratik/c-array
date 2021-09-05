//Write a C program to compute sum of diagonal elements of a 2D array of size 3*3
#include<iostream>
using namespace std;
int main()
{
	int i,j,sum,a[3][3];
	cout<<"\n enter  9 element of A";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
		
	}
	for(i=0;i<3;i++)
	{
		sum=sum+a[i][i];
	}
	cout<<"\n sum="<<sum;
}
