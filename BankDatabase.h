//
// Created by PopeLouis on 30/12/2022.
//

#ifndef GROUP4_ATM_BANKDATABASE_H
#define GROUP4_ATM_BANKDATABASE_H

#pragma once

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace atmcasestudy { class Account; }

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

    // Represents the bank account information database
    class BankDatabase
    {

    private:
//JAVA TO C++ CONVERTER WARNING: Java to C++ Converter has converted this array to a pointer. You will need to call 'delete[]' where appropriate:
//ORIGINAL LINE: private Account[] accounts;
        Account **accounts; // array of Accounts

        // no-arguement BankDatabase constructor initializes accounts
    public:
        BankDatabase();

        // retrieve Account object containing specific account number
    private:
        Account *getAccount(int accountNumber);

        // determine whether user specified account number and PIN match
        // those of an account in the database
    public:
        virtual bool authenticateUser(int userAccountNumber, int userPIN);

        // return available balance of Account withspecified account number
        virtual double getAvailableBalance(int userAccountNumber);

        // return total balance of Account with specified account number
        virtual double getTotalBalance(int userAccountNumber);

        // credit an amount to Account with specified account number
        virtual void credit(int userAccountNumber, double amount);

        //debit an amount from Account with specified account number
        virtual void debit(int userAccountNumber, double amount);
    }; // end class BankDatabase

}


#endif //GROUP4_ATM_BANKDATABASE_H
