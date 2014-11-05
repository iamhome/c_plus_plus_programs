#include <iostream>
using namespace std;
class transpose
{
     private:
	int i;
	int j;
	int c;
    public:
     int a[2][2];
     int b[2][2];
     void getdata();
     void display();
    transpose :: void getdata()
 {
 	cout<<"enter the elements of matrice";
 	for(i=0;i<2;i++)
 	{
 		for(j=0;j<2;j++)
 		{
 			cin>>a[i][j];
 		}
 		cout<<"";
 	}
 	for(i=0;i<2;i++){

 	  		for(j=0;j<2;j++)
 	  		{
             c[i][j]=a[j][i];
 	  		}
 	}
 }
 transpose:: void display()
 {
   cout<<"transpose of matrix="<<c[i][j];
 }


};
int main()
{
	transpose obj;
	obj.getdata();
	obj.display();
	return 0;
}