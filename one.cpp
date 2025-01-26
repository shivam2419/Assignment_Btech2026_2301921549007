// 1. Create a class "BankAccount" with attributes account number and balance. Implement methods to deposit and withdraw funds, and a display method to show the account details.
#include <iostream>
using namespace std;
class BankAccount {
    int ac, balance;
    public :
    BankAccount(int account_no) {
        this->ac = account_no;
        this->balance = 0;
    }
    void deposit(int amount) {
        this->balance += amount;
        cout << "Amount deposited " << amount << endl;
    }
    void withdrawl(int amount) {
        if(this->balance < amount) cout << "Insufficient balance" << endl;
        else{
            this->balance -= amount;
            cout << "Amount withdrawl " << amount << endl;    
        } 
    }
    void display(){
        cout << "Account Number : "<< ac << endl;
        cout << "Balance : " << balance << endl;
    }
};
int main() {
    // Write C++ code here
    BankAccount B(1234);
    cout << "-----------" << endl;
    B.display();
    cout << "-----------" << endl;
    B.deposit(1000);
    cout << "-----------" << endl;
    B.display();
    cout << "-----------" << endl;
    B.withdrawl(1000);
    cout << "-----------" << endl;
    B.display();
    cout << "-----------" << endl;
    return 0;
};
