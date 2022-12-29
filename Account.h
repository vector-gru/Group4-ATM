//
// Created by PopeLouis on 27/12/2022.
//

#ifndef GROUP4_ATM_ACCOUNT_H
#define GROUP4_ATM_ACCOUNT_H


#pragma once

/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
namespace atmcasestudy
{

    ///
    /// <summary>
    /// @author PopeLouis
    /// </summary>

    // Represent a bank account

    class Account
    {
    private:
        int accountNumber = 0; // account number
        int pin = 0; // PIN for authentication
        double availableBalance = 0; // funds available for withdrawal
        double totalBalance = 0; // funds available + pending deposits

        // Account constructor initializes attribues
    public:
        Account(int theAccountNumber, int thePIN, double theAvailableBalance, double theTotalBalance);

        // determines whether a user-specified PIN matches PIN in Account

        virtual bool validatePIN(int userPIN);

        // returns available balance
        virtual double getAvailableBalance();

        // return the total balance
        virtual double getTotalBalance();

        // credits an amount to the account
        virtual void credit(double amount);

        //debits an amount from the account
        virtual void debit(double amount);

        //return account number
        virtual int getAccountNumber();
    }; // end class Account

}



#endif //GROUP4_ATM_ACCOUNT_H
