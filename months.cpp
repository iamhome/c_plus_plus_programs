#include <iostream>
#include <map>
using namespace std;
typedef map<string, char>::const_iterator MapIterator;

//std::map <key_type, data_type, [comparison_function]>


int main(int argc, char const *argv[])
{
	map <int,string> months;
	string monthsName[12]={"January","February","March","April","May","June","July","Auguat","September","October","Novenber","December"};
	int monthNumber;

	for (int index = 0; index < 12; index++){
		months[index+1]=monthsName[index];
	}

   cout<<"Enter Month Number=";
   cin>>monthNumber;
   cout<<"Month Name="<<months[monthNumber]<<endl;
	return 0;
}