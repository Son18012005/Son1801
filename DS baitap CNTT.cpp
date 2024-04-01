#include <iostream>
#include <string>
class Dollars {
	private:
		int amount;
		public:
			Dollars(int amt) : amount(amt) {}
			int getAmount() const { return amount; } 
};
class BankAccount {
    private:
	    std::string owner;
		Dollars balance;
public:
    BankAccount(std::string ownerName) : owner(ownerName), balance(0) {}
	
	void deposit(Dollars amount) {
	    balance = Dollars(balance.getAmount() + amount.getAmount());
	}
	
	void withdraw(Dollars amount) {
	    if (amount.getAmount() <= balance.getAmount()) {
			balance = Dollars(balance.getAmount() - amount.getAmount());
		} else {
		    std::cout << "Insufficient funds!" << std::endl;
		}
	}
	
	void displayBalance()  const {
	    std::cout << "Account owner: " << owner << std::endl;
		std::cout << "Balance: $" << balance.getAmount() << std::endl;
	}
};
int main() {
    BankAccount account("John Doe");
	account.displayBalance(); // Initial balance is 0
	
	account.deposit(Dollars(100));
	account.displayBalance(); // After deposit, balance is 100
	
	account.withdraw(Dollars(50));
	account.displayBalance(); // After uithdrawal, balance is 50
	
	account.withdraw(Dollars(75)); // This wil give "Insufficient funds!" message
	
	return 0;
}											
