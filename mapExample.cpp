#include <iostream>
#include <map>
#include <string>
using namespace std;
typedef map<string, char>::const_iterator MapIterator;

//std::map <key_type, data_type, [comparison_function]>


int main(int argc, char const *argv[])
{
	map <string, char> grade_list;
	
	grade_list["John"] = 'B';
	grade_list["Rohan"] = 'C';
	grade_list["Ravi"] = 'A';
	cout<<"The class is size "<<grade_list.size()<<endl;

	grade_list.erase("John");
	cout<<"The class is size "<<grade_list.size()<<endl;

	cout<<"Is map Empty"<<grade_list.empty()<<endl;

	//do delete all values 
	//grade_list.clear();


	for (MapIterator iter = grade_list.begin(); iter != grade_list.end(); iter++){
		cout << "Key:" << iter->first << endl << "Values:"<< iter->second << endl;
	}

	cout<<"Is Ravi Exists="<<(grade_list.find("Ravi") != grade_list.end())<<endl;
	cout<<"Is Mohit Exists="<<(grade_list.find("Mohit") != grade_list.end())<<endl;

	return 0;
}