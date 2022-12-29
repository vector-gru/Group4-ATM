//
// Created by PopeLouis on 30/12/2022.
//

#include "Deposit.h"
#include "Deposit.h"
#include "Keypad.h"
#include "DepositSlot.h"
#include "BankDatabase.h"
#include "Screen.h"

namespace atmcasestudy
{

    Deposit::Deposit(int userAccountNumber, Screen *atmScreen, BankDatabase *atmBankDatabase, Keypad *atmKeypad, DepositSlot *atmDepositSlot) : Transaction(userAccountNumber, atmScreen, atmBankDatabase)
    {
        //initialize superclass variables

        // initialize reference to keypad and deposit slot
        keypad = atmKeypad;
        depositSlot = atmDepositSlot;
    } // end Deposit constructor

    void Deposit::execute()
    {
        BankDatabase *bankDatabase = getBankDatabase(); //get reference
        Screen *screen = getScreen(); // get reference

        amount = promptForDepositAmount(); // get deposit amount from user

        // check whether user entered a deposit amount or canceled
        if (amount != CANCELED)
        {
            //request deposit envelope containing specified amount
            screen->displayDollarAmount(amount);
            screen->displayMessageLine(L".");

            //received deposite envelope
            bool envelopeReceived = depositSlot->isEnvelopeReceived();

            //check whether deposit envelope was received
            if (envelopeReceived)
            {
                screen->displayMessageLine(std::wstring(L"\nYour envelope has been received. \nNOTE: The") + std::wstring(L"The money just deposited will not be available until we verify") + std::wstring(L"the amount of any enclosed cash and your checks clear "));

                //credit account to reflect the deposit
                bankDatabase->credit(getAccountNumber(), amount);
            } //end if
            else
            {
                screen->displayMessageLine(std::wstring(L"\nYou did not insert an envelope, so the ") + std::wstring(L"ATM has canceled your transaction"));
            } //end else
        } //end if
        else // user canceled instead of entering amount
        {
            screen->displayMessageLine(L"\nCanceling transaction...");
        } // end else
    } // end method execute

    double Deposit::promptForDepositAmount()
    {
        Screen *screen = getScreen(); // get reference to screen

        // display the prompt
        screen->displayMessage(std::wstring(L"\nPlease enter a deposit amount") + std::wstring(L"in CENTS (or 0 to cancel"));

        int input = keypad->getInput(); // receive input of deposit amount

        // check whether the user canceled or entered a valid amount
        if (input == CANCELED)
        {
            return CANCELED;
        }
        else
        {
            return static_cast<double>(input) / 100; // return dollar amount
        } //end else
    } //end method promptForDepositAmount
}
