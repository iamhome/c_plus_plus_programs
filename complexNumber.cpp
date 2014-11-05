#include <iostream>
using namespace std;

struct ComplexNumber{
	int real;
	int imaginary;
}number1,number2;

// int => primitive datatype
// ComplexNumber => derived data-type

ComplexNumber sum(ComplexNumber num1,ComplexNumber num2){
	ComplexNumber sum;
	sum.real= num1.real+num2.real;
	sum.imaginary= num1.imaginary+num2.imaginary;
	return sum;
}

int main(){
	cout<<"Enter number1 real part=";
	cin>>number1.real;
	cout<<"Enter number1 imaginary part=";
	cin>>number1.imaginary;
	cout<<"Enter number2 real part=";
	cin>>number2.real;
	cout<<"Enter number2 imaginary part=";
	cin>>number2.imaginary;


	cout<<"\n.....................................................\n";
	cout<<"First Number="<<number1.real<<"+"<<number1.imaginary<<"i"<<endl;
    cout<<"Second Number="<<number2.real<<"+"<<number2.imaginary<<"i"<<endl;
	
	ComplexNumber result=sum(number1,number2);
	cout<<"Sum="<<result.real<<"+"<<result.imaginary<<"i"<<endl;
	return 0;
}


