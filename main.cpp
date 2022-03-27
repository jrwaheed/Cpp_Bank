#include <iostream>
#include <string>
#include <vector>

#include "DAO.h"



int main(){

    
    int userAction;
    DAO dao;
    std::string tester = dao.getDataBase()[1].GetFirstName();

    std::cout<< "if this works: " << tester << std::endl;


    std::cout << "Welcomer to the bank. How can we help you today?" << std::endl;
    std::cout << "1. Deposit" << std::endl;
    std::cout << "2. Withdrawal" << std::endl;
    std::cout << "3. Balance Statement" << std::endl;

    std::cin >> userAction  ;

    switch (userAction)
    {
        case 1: 
        std::cout << "Deposit" << std::endl;
        break;

        case 3: 
        std::cout << "Deposit" << std::endl;
        break;

        default:
        break;
    }
}

std::vector<Account> DAO::getDataBase(){
    Account account1(400, 12, "Diane", "Wilson");
    Account account2(13124, 13, "Walter", "Hernandez");
    Account account3(17, 14, "Richard", "White");
    Account account4(4345566, 15, "Donald", "Mwere");

    std::vector<Account> database;

    database.push_back(account1);
    database.push_back(account2);
    database.push_back(account3);
    database.push_back(account4);

    return database;
}