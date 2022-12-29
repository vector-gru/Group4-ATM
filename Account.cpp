//
// Created by PopeLouis on 27/12/2022.
//

#include "Account.h"


namespace atmcasestudy
{

    Account::Account(int theAccountNumber, int thePIN, double theAvailableBalance, double theTotalBalance)
    {

        accountNumber = theAccountNumber;
        pin = thePIN;
        availableBalance = theAvailableBalance;
        totalBalance = theTotalBalance;
    } // end constructor

    bool Account::validatePIN(int userPIN)
    {
        if (userPIN == pin)
        {
            return true;
        }
        else
        {
            return false;
        }
    } // end method validatePIN

    double Account::getAvailableBalance()
    {
        return availableBalance;
    } // end method getAvailableBalance

    double Account::getTotalBalance()
    {
        return totalBalance;
    } // end method getTotlalBalance

    void Account::credit(double amount)
    {
        totalBalance += amount; // add to total balance
    } // end method credit

    void Account::debit(double amount)
    {
        availableBalance -= amount; // subtract from available balance
        totalBalance -= amount; // subtract from the total balance
    } // end method debit

    int Account::getAccountNumber()
    {
        return accountNumber;
    } // end method getAccountNumber
}

