#include<iostream>
using namespace std;

class Account {
    public:
    string AccountNumber;
    double balance;

    void deposit(){
double deposited;
balance=deposited+balance;
    }
    void withdraw(){
        double withdrawl;
        balance=balance-withdrawl;
    }
};

class savingsAccount : public Account{
public:
double interestRate;

void setInterstRate(){
    cout<<"enter current interest rate";
    cin>>interestRate;    
}

double interest=balance*interestRate/100; 
double balance=balance + interest;
};
class checkingAccount : public Account{
public:
double CheckBalance(){
    return balance;
}

};