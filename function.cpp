#include <iostream>
using namespace std;

/*

Function Declaration
----------------------
return_type function_name(arguments/parameters);

*/

/* 
Function declaration tells compiler about number of parameters function takes, 
data-types of parameters and return type of function.
By using this information, compiler cross checks function parameters and their data-type with 
function definition and function call. 
*/

int sum(int first_number,int second_number);

/*
After processing this declaration, the compiler would allow the programmer to 
refer to the entity sum in the rest of the program. 
Definition for a function must be provided somewhere.
*/


/*

Function Definition
-------------------
return_type function_name(arguments/parameters){
	function dody;
}

*/

/*

Function Definition is nothing but actual Function.
It contain Executable statements/code which gets executed on the function call.
First Line is called as Function Header that 
should be identical to function declaration with the exception of semicolon

*/

int sum(int first_number,int second_number){
	return first_number+second_number;
}




int main(int argc, char const *argv[])
{
	int first_number=30;
	int second_number=40;
	cout<<"Sum="<<sum(30,40)<<endl;
	return 0;
}