#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[]){
	
	fstream file;
	string fileLine;

	const char* fileName="simpleFile.txt";

	/*-------------------------- Wite to file ------------------------------------------*/

	file.open(fileName,fstream::in | fstream::out | fstream::trunc);  /* creates a new file  of given name */

	/*
	
	fstream::in => Open for input operations i.e File open for reading
	fstream::out => Open for output operations i.e File open for writing
	fstream::app => open file in append mode
	fstream::trunc => delete content of existing file

	*/ 


	file<<"Some Text to be written inthe file"<<endl;
	file<<"Some Text to be written Line 2"<<endl;
	
	file.close();

	/*-----------------------------------------------------------------------------------*/



	file.open(fileName);

	while(getline(file,fileLine)){
		cout<<fileLine<<endl;
	}

	file.close();

	
	return 0;
}