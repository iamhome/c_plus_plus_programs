#include <iostream>
using namespace std;
class matrix
{
public:
	void  addition();

	 
	
	void getdata();
	void display();

	int i;
	int m;
	int n;
	int o;
	int p;
	int j;
	int a[i][j];
	int b[j][j];
	int c[i][j];
matrix::void getdata()
{
  cout<<"enter number of rows in matrix a";
  cin>>n;
  cout<<"enter number of column in matrix a";
  cin>>m;
  cout<<"enter number of rows in matrix b";
  cin>>o;
  cout<<"enter number of columns in matrix b";
  cin>>p;
}
matrix::void addition()
{
  if(n=o||m=p)
  {
  	cout<<"\n\n\enter the elements of matrice a";
  	for(i=0;i<n;i++)
  	{
  		for(j=0;j<m;j++)
  		{
  			cin>>a[i][j];
  		}
  		cout<<"\n";
  	}
  	cout<<"\n\n\enter the elements of matrice b";
  	for(i=0;i<o;i++)
  	{
  		for(j=0;j<p;j++)
  		{
  			cin>>b[i][j];
  		}
  		cout<<"\n";
  	}
  	cout<<"the resultant="<<endl;
  	for(i=0;i<o;i++)
  	{
  	 		for(j=0;j<p;j++)
  	 		{
  	 			c[i][j]=a[i][j]+b[i][j];

  		}
        
  	}

  }
}
    matrix::void display()
    {
    	cout<<"sum="<<c[i][j]<<endl;
    }
};
int main()
{
	matrix obj;
	obj.getdata();
	obj.addition();
	obj.display();
	return 0;
}












