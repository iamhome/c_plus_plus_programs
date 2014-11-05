#include <iostream>
using namespace std;
int main()
{
	int x;
	int y;
	int result=1;
	cout<< "enter the value of (base)";
	cin>>x;
	cout<<"enter the value of y(exponent) ";
	cin>>y;
	for(i=1;i<=y;i++)
	{
	
		result=result*x;
	}
	cout<<"answer to the expression is"<<result;
	return 0;
}