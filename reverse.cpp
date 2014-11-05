#include <iostream>
using namespace std;
int main()
{
	int n;
	
	int reverse=0;
	int rem;
	cout<<"enter the number";
	cin>>n;
	while(n!=0)
	{
		rem=n%10;
		reverse=(reverse*10)+rem;
		n=n/10;
	}
		cout<<"reverse of num="<<reverse;

	
	return 0;
}