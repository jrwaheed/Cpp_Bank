#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Account.cpp"



class Account{
    private:
        int balance;
        int accountNumber;
        std::string firstName;
        std::string lastName;

    public:

        Account(int balance, int accountNumber, std::string firstName, std::string lastName){
            balance = balance;
            accountNumber = accountNumber;
            firstName = firstName;
            lastName = lastName;
        };

        bool Deposit(int amount);
        bool Withdraw(int amount);
        int GetBalance() {return balance;}
        std::string GetFirstName(){
            return firstName;
        }
        
    

       

};

