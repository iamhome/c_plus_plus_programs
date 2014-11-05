#include <iostream>
using namespace std;
int main()
{
	int a[2][2];
	int b[2][2];
	int c[2][2];
	int i;
	int j;
	cout<<"enter the elements of first matrix";
	for(i=0;i<2;i++)
       {
		for(j=0;j<2;j++)
		{
			cin>>a[i][j];
		}
		cout<<"";
	}
	cout<<"enter the elements of second matrix";
	for(i=0;i<2;i++)
	   {
	   	for(j=0;j<2;j++)
	   	{
	   		cin>>b[i][j];
	   	}
	   	cout<<"";
	   }
	cout<<"sum of the matrices=";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		
		cout<<"resultant="<<c[i][j];
	}
	}   

	
	return 0;
}