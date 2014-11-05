#include <iostream>
using namespace std;
int main()
{
	int n;
	int i;
	int newcharge;
	float units[i];
	string name[i];
	float totalcharge;
	int charge=50;
	cout<<"enter the number of consumers";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	cout<<"enter the name of consumer";
	cin>>name[i];
	cout<<"enter the number of units consumed";
	cin>>units[i];
    }
    for(i=1;i<=n;i++)
    {
    	if(units[i]<100)
    	{
    		totalcharge=charge+units[i]*0.6;
    	cout<<"charge payable="<<totalcharge;
        }
    
    	else if(100<units[i]<300)
    	{
    		totalcharge=charge+units[i]*0.8;
    		cout<<"charge payable="<<totalcharge;
    	}
    	else
    	{
    	     totalcharge=charge+units[i]*0.9;
    	     cout<<"charge payable="<<totalcharge;
    	 } 
    	 if(totalcharge>300)
    	 {
    	 	newcharge=totalcharge+0.15*totalcharge;
    	 } 
    }	
        
    	
    
   return 0;
}