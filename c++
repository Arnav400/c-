#include <iostream>

using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount() : balance(0.0) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. Current balance: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. Current balance: $" << balance << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient funds." << endl;
        }
    }

    void displayBalance() {
        cout << "Current balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account;
    int choice;
    double amount;

    do {
        cout << "\nBank Management System" << endl;
        cout << "1. Deposit money" << endl;
        cout << "2. Withdraw money" << endl;
        cout << "3. Display balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: $";
                cin >> amount;
                account.deposit(amount);
                break;
            case 2:
                cout << "Enter amount to withdraw: $";
                cin >> amount;
                account.withdraw(amount);
                break;
            case 3:
                account.displayBalance();
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    } while (choice != 4);

    return 0;
}
