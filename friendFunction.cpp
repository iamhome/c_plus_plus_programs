/*

One of the important concept of OOP is data hiding, i.e., 
a nonmember function cannot access an object's private or protected data. 
But, sometimes this restriction may force programmer to write long and complex codes. 

If a function is defined as a friend function then, 
the private and protected data of class can be accessed from that function. 
The complier knows a given function is a "friend" function by its keyword friend.

*/

/*
DECLARATION
------------

The declaration of friend function should be made inside the body of class 
(can be anywhere inside class either in private or public section) starting with keyword friend.

class class_name
{
    ......  ....   ........
    friend return_type function_name(class_name object);
    ......  ....   ........
}


DEFINE
------
Now, you can define friend function of that name and that function can access the 
private and protected data of that class. 

*/
#include <iostream>
using namespace std;

class Second;

class First{
    private:
        int first_variable;
    public:
        First(int value){
 			first_variable=value;       	
        }
        int getValue(){
        	return first_variable;
        }
    	friend void swap(First varible1,Second varible2);    //friend function
};


class Second{
	private:
        int second_variable;
    public:
        Second(int value){
 			second_variable=value;       	
        }
        int getValue(){
        	return second_variable;
        }
    	friend void swap(First varible1,Second varible2);    //friend function
};


void swap(First varible1,Second varible2){         //friend function definition
    int temp;
   temp=varible1.first_variable;
   varible1.first_variable=varible2.second_variable;
   varible2.second_variable=temp;
   cout<<"Final values of class 1 after swapping (first_variable) = "<<varible1.first_variable<<endl;
   cout<<"Final values of class 2 after swapping(second_variable) = "<<varible2.second_variable<<endl;
}


int main(int argc, char const *argv[])
{
	First varible1(3);
	Second varible2(2);
	swap(varible1,varible2);	
	return 0;
}
