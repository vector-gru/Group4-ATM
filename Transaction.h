//
// Created by PopeLouis on 30/12/2022.
//

#ifndef GROUP4_ATM_TRANSACTION_H
#define GROUP4_ATM_TRANSACTION_H

#pragma once

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace atmcasestudy { class Screen; }
namespace atmcasestudy { class BankDatabase; }

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

    //Abstract superclass Transaction represents an ATM transaction

    class Transaction
    {
    private:
        int accountNumber = 0; // indicates account involved
        Screen *screen; // ATM's screen
        BankDatabase *bankDatabase; // account info database

        // Transaction constructor invoked by subclasses using super()
    public:
        Transaction(int userAccountNumber, Screen *atmScreen, BankDatabase *atmBankDatabase);

        // return account number
        virtual int getAccountNumber();

        // return reference to screen
        virtual Screen *getScreen();

        // return reference to bank database
        virtual BankDatabase *getBankDatabase();

        //perform the transaction (Overridden by each subclass)
        virtual void execute() = 0;


    }; // end class Transaction

}


#endif //GROUP4_ATM_TRANSACTION_H
