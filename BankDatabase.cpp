//
// Created by PopeLouis on 30/12/2022.
//


#include "BankDatabase.h"
#include "Account.h"

namespace atmcasestudy
{

    BankDatabase::BankDatabase()
    {
        accounts = new Account*[2] (); // just 2 accounts for testing
        accounts[0] = new Account(12345, 54321, 1000.0, 1200.0);
        accounts[1] = new Account(98765, 56789, 200.0, 200.0);
    } // end no-arguement BankDatabase constructor

    Account *BankDatabase::getAccount(int accountNumber)
    {

        // loop through accounts searching for matching account number
//        for (const auto &currentAccount : accounts)
         for (int i=0; i<2; i++)
        {

            // return current account if match found
            if(accounts[i]->getAccountNumber() == accountNumber) {
                return accounts[i];
            }

//            if (currentAccount->getAccountNumber() == accountNumber)
//            {
//                return currentAccount;
//            }
        } // end for

        return nullptr; // if no matching account was foundm return null
    } // end method getAccount

    bool BankDatabase::authenticateUser(int userAccountNumber, int userPIN)
    {
        // attempt to retrieve the account with the account number
        Account *userAccount = getAccount(userAccountNumber);

        //if account exists, return result of Account method validatePIN
        if (userAccount != nullptr)
        {
            return userAccount->validatePIN(userPIN);
        }
        else
        {
            return false; // account number not found, so return false
        }

    } //end method authenticateUser

    double BankDatabase::getAvailableBalance(int userAccountNumber)
    {
        return getAccount(userAccountNumber)->getAvailableBalance();
    } // end method getAvailableBalance

    double BankDatabase::getTotalBalance(int userAccountNumber)
    {
        return getAccount(userAccountNumber)->getTotalBalance();
    } // end getTotalBalance

    void BankDatabase::credit(int userAccountNumber, double amount)
    {
        getAccount(userAccountNumber)->credit(amount);
    } // end method credit

    void BankDatabase::debit(int userAccountNumber, double amount)
    {
        getAccount(userAccountNumber)->debit(amount);
    } // end method debit
}
