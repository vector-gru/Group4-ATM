//
// Created by PopeLouis on 30/12/2022.
//

#ifndef GROUP4_ATM_WITHDRAWAL_H
#define GROUP4_ATM_WITHDRAWAL_H

#pragma once

#include "Transaction.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace atmcasestudy { class Keypad; }
namespace atmcasestudy { class CashDispenser; }
namespace atmcasestudy { class BankDatabase; }
namespace atmcasestudy { class Screen; }

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
    // Represent a withdrawal ATM transaction
    class Withdrawal : public Transaction
    {
    private:
        int amount = 0; // amount to withdraw
        Keypad *keypad; // reference to keypad
        CashDispenser *cashDispenser; // reference to cash dispenser

        // constant correstponding to menu option to cancel
        static const int CANCELED = 6;

        //Withdraw constructor
    public:
        Withdrawal(int userAccountNumber, Screen *atmScreen, BankDatabase *atmBankDatabase, Keypad *atmKeypad, CashDispenser *atmCashDispenser);

        virtual void execute() override;

        //display a menu of withdrawal amounts and the option to cancle;
        // return the chose amount or 0 if the user chooses to cancel

    private:
        int displayMenuOfAmounts();
    }; //end class Withdrawal

}


#endif //GROUP4_ATM_WITHDRAWAL_H
