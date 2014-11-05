#include <iostream>
#include <algorithm>
using namespace std;
/*

Class :
-----
A class is to combine the data( properties ) and operation ( behavioure ) of a structure in single unit. 

*/

/*

Object :
------
An object is an instance of a class.


Obj o1 ("Hi\n");
Obj *o2 = new Obj("Hi\n");


The first allocates an object with automatic storage duration, which means it will be destructed automatically upon exit from the scope in which it is defined.

The second allocated an object with dynamic storage duration, which means it will not be destructed until you explicitly use delete to do so.


*/

/*

this pointer
------------
 ‘this’ pointer is a constant pointer that holds the memory address of the current object.

 ‘this’ pointer is not available in static member functions as static member functions can be called without any object (with class name).

*/

/*

 :: => scope resolution opetrator

is used in class member function definition

can aso be used to differentiate b/w members of base class with identical names.


new => used for dynamic memory alocation in c++

delete => used to destroy the variable created using new operator


int *np = new int;
delete(np);


*/

/*

Scope :
-----
By default, all members of a class declared with the class keyword 
have private access for all its members.

*/

class Student{
	private:
		int regno;
		int marks;
		char grade;
		string result;

	public:
		//Parametrized Constructor definition
		Student(int regno,int marks){
			this->regno=regno;
			this->marks=marks;
		}

		// Distructor
		~Student(){
		}

		char getGrade(){
			char grade;
			if(this->marks<=100 and this->marks>80){
				grade='A';	
			}else if(this->marks<=80 and this->marks>60){
				grade='B';
			}else if(this->marks<=60 and this->marks>40){
				grade='C';
			}else{
				grade='D';
			}
			return grade;
		}

		string getResult(){
			char pass_grades[3]={'A','B','C'};
			this->grade=getGrade();
			bool exists=std::find(pass_grades,pass_grades+3, this->grade) != (pass_grades+3);
			return (exists==true) ? "PASS" : "FAIL";
		}	
};

int main(int argc, char const *argv[])
{
	Student ravi(12,78);

	// Student ravi = Student(12,78);
	
	cout<<"Grade="<<ravi.getGrade()<<endl;
	cout<<"Result="<<ravi.getResult()<<endl;
	return 0;
}