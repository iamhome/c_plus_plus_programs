#include <iostream>
using namespace std;
struct employee
{
         int n;
         int code[];
         string name[];
         string designation[];
         int salary[];
         void getdata();
         void display();
     };
     void employee :: getdata()
     {
     	cout<<"enter the number of employee";
     	cin>>n;
     	for(int i=1;i<=n;i++)
     	{
     	cout<<"enter the employee code";
     	cin>>code[i];
     	cout<<"enter the employee name";
     	cin>>name[i];
     	cout<<"enter the emloyee designation";
     	cin>>designation[i];
     	cout<<"enter the employee salary";
     	cin>>salary[i];
     }
     }
     void employee :: display()
     {
     	for(int i=1;i<=n;i++)
     	{
     		if(salary[i]>2000)
     			cout<<" the following employee has salary greater than 20000";
     			cout<<"code of employee="<<code[i];
     			cout<<"name of employee="<<name[i];
     			cout<<"designation of employee="<<designation[i];
     			cout<<"salary of employee="<<salary[i];
     		}
     }
     int main()
     {
     	employee obj;
     	obj.getdata();
     	obj.display();
     	return 0;
     } 
