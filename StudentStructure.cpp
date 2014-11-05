#include <iostream>
#include <algorithm>
using namespace std;

/*
Structure is a collection of variables under a single name.
Variables can be of type int,float,char etc.
The main diffrence b/w structure and array is that array are collection of the same data type and
structure is a collection of variables under a single name.
*/


/*
Declaration
-----------

struct STRUCTURE_NAME{
	structure members;
};

*/


/*

Difference B/W Class and Structure
------------------------------------
1) Structure: Initially (in C) a structure was used to bundle different type of data types together to perform a particular functionality. 
	But C++ extended the structure to contain functions also. 
	The major difference is that all declarations inside a structure are by default public.

Class: Class is a successor of Structure. By default all the members inside the class are private.

2) structures in c++ doesn't provide data hiding where as a class provides data hiding

3) classes support polymorphism(late binding), whereas structures don't. 

4) Structures members can not be declared as protected , but class members can be.

5).Structures do not require constructors while classes require  
	a class always has at least one default constructor... even if u dont implemt it yourself.
*/



/*

struct STUDENT{  // Declare STUDENT struct type
	int regno; // Declare member types
	int sub[5];
	int total;
	float average;
	int grade;
	char result[4];
}ravi; // Define object of type STUDENT

*/


struct STUDENT{  // Declare STUDENT struct type
	int regno; // Declare member types
	int marks;
	char grade;
	string result;
};



char getGrade(int marks){
	char grade;
	if(marks<=100 and marks>80){
		grade='A';	
	}else if(marks<=80 and marks>60){
		grade='B';
	}else if(marks<=60 and marks>40){
		grade='C';
	}else{
		grade='D';
	}
	return grade;
}

string getResult(char grade){

	char pass_grades[3]={'A','B','C'};
	bool exists=false;
	//An iterator to the first element in the range that compares equal to val.
	// If no elements match, the function returns last.
	// bool exists=std::find(pass_grades,pass_grades+3, grade) != (pass_grades+3);

	for (int index = 0; index < 3; index++){
	 	if(pass_grades[index]==grade) exists = true;
	}

	return (exists==true) ? "PASS" : "FAIL";
}

int main(int argc, char const *argv[])
{
	STUDENT ravi;  //Object of STUDENT structure

	cout<<"Enter Reg No=";
	cin>>ravi.regno;
	cout<<"Enter Marks=";
	cin>>ravi.marks;

	ravi.grade=getGrade(ravi.marks);
	ravi.result=getResult(ravi.grade);

	cout<<"\n---------------------------------------\n";
	cout<<"REG No="<<ravi.regno<<endl;
	cout<<"Marks="<<ravi.marks<<endl;
	cout<<"Grade="<<ravi.grade<<endl;
	cout<<"Result="<<ravi.result<<endl;

	return 0;
}
