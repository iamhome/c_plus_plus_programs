#include <iostream>
using namespace std;
int main()
{
	int i=1;
	int fact=1;
	int n;
	cout<<"enter the number whose factorial is to be find"<<endl;
	cin>>n;
	for(i=i;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<"factorial of given number is="<<fact;
	return 0;
}
