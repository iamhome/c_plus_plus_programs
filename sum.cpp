#include <iostream>
using namespace std;
int main()
{
	int num; int rem;
	int sum=0;
	cout<<"enter the number";
	cin>>num;
	while(num!=0){


	rem=num%10;
	
	sum=sum+rem;
	num=num/10;
	}
	cout<<"sum of digits ="<<sum;
	return 0;

}