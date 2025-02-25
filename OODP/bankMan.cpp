#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    string accountHolderName;
    double balance;

public:
    // Constructor
    BankAccount(string accNumber, string accHolderName, double initialBalance) {
        accountNumber = accNumber;
        accountHolderName = accHolderName;
        balance = initialBalance;
    }

    // Deposit function
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    // Withdraw function
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance. Cannot withdraw: " << amount << endl;
        }
    }

    // Display function
    void display() const {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    // Create a BankAccount object
    BankAccount account("123456", "John Doe", 1000.0);

    // Display account details
    account.display();
    cout << endl;

    // Deposit money
    account.deposit(500.0);
    account.display();
    cout << endl;

    // Withdraw money
    account.withdraw(300.0);
    account.display();
    cout << endl;

    // Attempt to withdraw more than the balance
    account.withdraw(1500.0);
    account.display();

    return 0;
}
