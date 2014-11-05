#include <iostream>
#include <stdexcept>

using namespace std;
class Bank{
	private:
		string name;
		int account_no;
		float balance;
	public:

		void setName(string name){
			this->name=name;
		};
		void setAccountNumber(int account_no){
			this->account_no=account_no;
		}
		void setBalance(float balance){
			this->balance=balance;
		}

		~Bank(){

		}
		
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

};

int main(int argc, char const *argv[]){
	Bank ravi;
	ravi.setName("ravi");
	ravi.setAccountNumber(420);
	ravi.setBalance(1200);
	ravi.deposite(500);
	ravi.withdraw(200);
	cout<<"Name="<<ravi.getName()<<endl;
	cout<<"Balance="<<ravi.getBalance()<<endl;
	ravi.~Bank();
	return 0;
}

