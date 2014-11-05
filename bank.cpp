#include <iostream>
#include <stdexcept>

using namespace std;
class Bank{
	private:
		string name;
		int account_no;
		float balance;
	public:
		static string bank_address; // declare static variable
		Bank(string name,int account_no,float balance){
			this->name=name;
			this->account_no=account_no;
			this->balance=balance;
		}
		~Bank(){

		}
		// void setBalance(float balance){
		// 	this->balance=balance;
		// }
		void deposite(float amount){
			this->balance=amount+this->balance;
		}
		void withdraw(float amount){
			if(amount>balance) throw invalid_argument("Aukaat Say Bahar");
			balance=balance-amount;
		}
		string getName(){
			return name;
		}
		float getBalance(){
            return balance;
		}
		void changeBankAddress(string new_address){
			bank_address=new_address;
		}
		static string getBankAddress(){
			return bank_address;
		}
};

// datatype ClassName::varibleName="value"
string Bank::bank_address="Sant Nagar";  // static variable initialization is alsways outside class


int main(int argc, char const *argv[])
{	
	Bank sample("sample",111,2300);
	cout<<"Bank_address Using Static Function="<<Bank::getBankAddress()<<endl;


	cout<<"Bank_address Befaore Creating Any Object="<<Bank::bank_address<<endl;
	Bank ravi("ravi",420,1200);
	ravi.deposite(500);
	ravi.withdraw(200);
	cout<<"Name="<<ravi.getName()<<endl;
	cout<<"Balance="<<ravi.getBalance()<<endl;
	ravi.changeBankAddress("Burai");	
	cout<<"Bank_address After Calling ChangeAddress through Object="<<Bank::bank_address<<endl;
	
	Bank mohit("Mohit",400,120);
	cout<<"Name="<<mohit.getName()<<endl;
	cout<<"Bank_address Befaore Creating Any Object="<<Bank::bank_address<<endl;	


	return 0;
}

