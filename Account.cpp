//
// Created by PopeLouis on 27/12/2022.
//

#include "Account.h"

//  Represent a bank account
class Account {
    /** generated source for class Account */
    int accountNumber;

    //  account number
    int pin;

    //  PIN for authentication
    float availableBalance;

    //  funds available for withdrawal
    float totalBalance;

    //  funds available + pending deposits
    //  Account constructor initializes attribues
public Account(int theAccountNumber, int thePIN, float theAvailableBalance, float theTotalBalance) {
        /** generated source for method __init__ */
        accountNumber = theAccountNumber;
        pin = thePIN;
        availableBalance = theAvailableBalance;
        totalBalance = theTotalBalance;
    }

    //  end constructor
    //  determines whether a user-specified PIN matches PIN in Account
public boolean validatePIN(int userPIN) {
        /** generated source for method validatePIN */
        if (userPIN == pin) {
            return true;
        } else {
            return false;
        }
    }

    //  end method validatePIN
    //  returns available balance
public float getAvailableBalance() {
        /** generated source for method getAvailableBalance */
        return availableBalance;
    }

    //  end method getAvailableBalance
    //  return the total balance
public float getTotalBalance() {
        /** generated source for method getTotalBalance */
        return totalBalance;
    }

    //  end method getTotlalBalance
    //  credits an amount to the account
public void credit(float amount) {
        /** generated source for method credit */
        totalBalance += amount;
        //  add to total balance
    }

    //  end method credit
    // debits an amount from the account
public void debit(float amount) {
        /** generated source for method debit */
        availableBalance -= amount;
        //  subtract from available balance
        totalBalance -= amount;
        //  subtract from the total balance
    }

    //  end method debit
    // return account number
public int getAccountNumber() {
        /** generated source for method getAccountNumber */
        return accountNumber;
    }

    //  end method getAccountNumber
};
