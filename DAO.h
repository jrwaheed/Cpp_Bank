#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Account.h"


class DAO{
    private:
       

    public:

        DAO(){
        }

        std::vector<Account> getDataBase();
};