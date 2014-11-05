#include <iostream>
#include <stdexcept>
using namespace std;

class date{
	private:
		int day;
		int month;
		int year;
		bool isValid(int day,int month){
			bool valid=true;
			if ((day>31 || day<1) || (month>12 || month<1)) valid= false;
			return valid;			
		}
	public:
		void getdata();
		void display();
		date(int day,int month,int year){
			if(!isValid(day,month)) throw invalid_argument("Invalid Fields"); 			
			this->day=day;
			this->month=month;
			this->year=year;
		}
};

void date :: display(){
	cout<<day<<"/"<<month<<"/"<<year<<endl;
}

int main()
{
	int day,month,year;
	cout<<"Enter Day=";
	cin>>day;
	cout<<"Enter Month=";
	cin>>month;
	cout<<"Enter year=";
	cin>>year;

	date date(day,month,year);
	date.display();
	return 0;
} 



