//
// Created by PopeLouis on 29/12/2022.
//

#ifndef GROUP4_ATM_ATM_H
#define GROUP4_ATM_ATM_H

#pragma once

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace atmcasestudy { class Screen; }
namespace atmcasestudy { class Keypad; }
namespace atmcasestudy { class CashDispenser; }
namespace atmcasestudy { class DepositSlot; }
namespace atmcasestudy { class BankDatabase; }
namespace atmcasestudy { class Transaction; }

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

    //Represents an automated teller machine

    class ATM
    {
    private:
        bool userAuthenticated = false; // whether user is authenticated
        int currentAccountNumber = 0; // current user's account number
        Screen *screen; // ATM's screen
        Keypad *keypad; // ATM's keypad
        CashDispenser *cashDispenser; // ATM's cash dispenser
        DepositSlot *depositSlot; // ATM's deposit slot
        BankDatabase *bankDatabase; // account information database

        // constants corresponding to main menu options
        static const int BALANCE_INQUIRY = 1;
        static const int WITHDRAWAL = 2;
        static const int DEPOSIT = 3;
        static const int EXIT = 4;

        // no-arguement ATM constructor initializes instance variables

    public:
        ATM();

        // start ATM
        virtual void run();

        //attempts to authenticate user against database
    private:
        void authenticateUser();




        // display the main menu and perform transactions
        void performTransactions();

        // display the main menu and return an input selection
        int displayMainMenu();

        // return object of specified Transaction subclass
        Transaction *createTransaction(int type);
    }; // end class ATM

}


#endif //GROUP4_ATM_ATM_H
