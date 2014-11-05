#include <iostream>
using namespace std;
int main()
{
	int value;
	int i;
	int prime;
	cout<<"enter the number";
	cin>>value;
	for(i=2;i<value;i++)
	{
		if(value%i==0)
			cout<<"not prime";
		else
			cout<< "prime";
	}
		return 0;
}