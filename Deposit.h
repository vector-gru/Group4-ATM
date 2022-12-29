//
// Created by PopeLouis on 30/12/2022.
//

#ifndef GROUP4_ATM_DEPOSIT_H
#define GROUP4_ATM_DEPOSIT_H

#pragma once

#include "Transaction.h"
#include <string>

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
namespace atmcasestudy { class Keypad; }
namespace atmcasestudy { class DepositSlot; }
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
    // Represents a deposit ATM transaction
    class Deposit : public Transaction
    {
    private:
        double amount = 0; // amount to deposit
        Keypad *keypad; // reference to keypad
        DepositSlot *depositSlot; // reference to deposit slot
        static const int CANCELED = 0; // constant for cancel option

        //Deposit constructor
    public:
        Deposit(int userAccountNumber, Screen *atmScreen, BankDatabase *atmBankDatabase, Keypad *atmKeypad, DepositSlot *atmDepositSlot);

        virtual void execute() override;

        //prompt user to enter a deposit amount in cents
    private:
        double promptForDepositAmount();

    }; //end class Deposit

}


#endif //GROUP4_ATM_DEPOSIT_H
