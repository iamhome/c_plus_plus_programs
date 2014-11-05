#include <iostream>
#include <ctime>
struct Date{
	int month;
	int day;
	int year;
};

class BankAccount{
	private:
		Date getCurrentDate(){
			Date date;

		}
	protected:
		long number;
    	double balance;
        Date dateOfCreation;

	public:
		BankAccount();
		BankAccount(double balance);
		~BankAccount();
    	void deposit(double amount);
   		void withdraw(double amount);
    	void balanceEnquiry();
	
};

BankAccount::BankAccount(){
	Date date=getCurrentDate();
	date.month=
	this->dateOfCreation=date;
}

BankAccount::BankAccount(double balance){
	this();
}