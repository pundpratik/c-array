//WAP to multiply a 3*3 matrix.
#include<iostream>
using namespace std;
int main()
{
	int a[3][3],b[3][3],c[3][3];
	int i,j,k;
	cout<<"\n enter 9 element of matrix A";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		
			cin>>a[i][j];
		}
	}
	cout<<"\n enter 9 element of matrix B";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		
			cin>>b[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			//sum=0;
			c[i][j]=0;
			for(k=0;k<3;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
				//=sum;
		}
	}

	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			cout<<"\n multiplied matrix ="<<c[i][j];
		}
	}
	return 0;
}
