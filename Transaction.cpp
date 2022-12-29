//
// Created by PopeLouis on 30/12/2022.
//

#include "Transaction.h"
#include "Transaction.h"
#include "Screen.h"
#include "BankDatabase.h"

namespace atmcasestudy
{

    Transaction::Transaction(int userAccountNumber, Screen *atmScreen, BankDatabase *atmBankDatabase)
    {
        accountNumber = userAccountNumber;
        screen = atmScreen;
        bankDatabase = atmBankDatabase;
    } // end Transaction constructor

    int Transaction::getAccountNumber()
    {
        return accountNumber;
    } //end get accountNumber

    Screen *Transaction::getScreen()
    {
        return screen;
    } // end method getScreen

    BankDatabase *Transaction::getBankDatabase()
    {
        return bankDatabase;
    } //end method getBankDatabase
}
