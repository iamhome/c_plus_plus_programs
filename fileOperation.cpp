/*

ofstream ( output file stream ) : Stream class to write on files    / take input from keyboard and write in file /
ifstream ( input file stream ): Stream class to read from files
fstream: Stream class to both read and write from/to files.

*/

#include <iostream>
#include <fstream>
using namespace std;


class File{
	private:
		const char* file_name;
		ofstream file;
	public:
		//Because the constructor for an ifstream takes a const char*, not a string
		File(const char* file_name){
			this->file_name=file_name;
			// remove(file_name);
		}
		void write(string text){
			file.open(file_name,ios_base::app);
			file << text<<endl;
			file.close();
		}

		void read(){
			ifstream inputFile;
			string fileLine; //Saves the line in FileLine.
			inputFile.open(file_name);

			while(getline(inputFile,fileLine)){ // To get you all the lines.
		        cout<<fileLine<<endl; // Prints our fileLine.
       		}
       		inputFile.close();
		}

};


int main(int argc, char const *argv[])
{
	
	File myFile("Sample.txt");
	myFile.write("Some Text Line 1");
	myFile.write("Some Text Line 2");
	myFile.write("Some Text Line 3");
	myFile.read();
	return 0;
}