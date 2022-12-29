//
// Created by PopeLouis on 29/12/2022.
//

#include "ATM.h"

#include "Screen.h"
#include "Keypad.h"
#include "CashDispenser.h"
#include "DepositSlot.h"
#include "BankDatabase.h"
#include "Transaction.h"
#include "BalanceInquiry.h"
#include "Withdrawal.h"
#include "Deposit.h"

namespace atmcasestudy
{

    ATM::ATM()
    {
        userAuthenticated = false; // user not authenticated to start
        currentAccountNumber = 0; // no current account number to start
        screen = new Screen(); // create screen
        keypad = new Keypad(); // create keypad
        cashDispenser = new CashDispenser(); // creat cash dispenser
        depositSlot = new DepositSlot(); // create deposit slot
        bankDatabase = new BankDatabase(); // create acct info database

    } //end no-arguement constructor

    void ATM::run()
    {
        // welcome and authenticate user; perform transactions
        while (true)
        {
            // loop while user is not yet autheenticatd
            while (!userAuthenticated)
            {
                screen->displayMessageLine(L"\nWelcome");
                authenticateUser(); // authenticate user
            } // end while

            performTransactions(); // user is now authenticated
            userAuthenticated = false; // reset before next ATM session
            currentAccountNumber = 0; // reset before next ATM session
            screen->displayMessageLine(L"\nThank you! Goodbye");
        } // end while
    } // end run method

    void ATM::authenticateUser()
    {
        screen->displayMessage(L"\nPlease enter your account number:");
        int accountNumber= keypad->getInput(); // input account number
       screen->displayMessage(L"\nEnter your PIN: "); // prompt for PIN
       int pin = keypad->getInput(); // input PIN

        // set userAuthnticated to boolean value returned by database
        userAuthenticated = bankDatabase->authenticateUser(accountNumber, pin);

        // check whether authentication succeeded
        if (userAuthenticated)
        {
            currentAccountNumber = accountNumber; // save user's account #
        } // end if
        else
        {
            screen->displayMessageLine(L"Invalide account number of PIN. Please try again. ");
        }

    } // end method authenticateUser

    void ATM::performTransactions()
    {
        // local variable to store transaction currently being processed
        Transaction *currentTransaction = nullptr;
        bool userExited = false; // user has not chosen to exit

        // loop while user has not chosen option to exit system
        while (!userExited)
        {
            // show main menu and get user selection
            int mainMenuSelection = displayMainMenu();

            // decide how to proceed based on user's menu selection
            switch (mainMenuSelection)
            {
                // user chose to perform one of the three transaction types
                case BALANCE_INQUIRY:
                case WITHDRAWAL:
                case DEPOSIT:

                    // initialize as new object of chosen type
                    currentTransaction = createTransaction(mainMenuSelection);

                    currentTransaction->execute(); // execute transaction
                    break;

                case EXIT: // user chose to terminate session
                    screen->displayMessageLine(L"\nExiting the system....");
                    userExited = true; // this ATM session should end
                    break;
                default: // user did not enter an integrer from 1-4
                    screen->displayMessageLine(L"\nYou did not enter a valid selection. Try again ");
                    break;
            } // end switch
        } //end while
    } //end method performTransactions

    int ATM::displayMainMenu()
    {
        screen->displayMessageLine(L"\nMain menu:");
        screen->displayMessageLine(L"1 - View my balance");
        screen->displayMessageLine(L"2 - Withdraw cash");
        screen->displayMessageLine(L"3 - Deposit funds");
        screen->displayMessageLine(L"4 - Exit\n");
        screen->displayMessageLine(L"Enter a choice: ");
        return keypad->getInput(); // return user's selection
    } // end method displayMainMenu

    Transaction *ATM::createTransaction(int type)
    {
        Transaction *temp = nullptr; // temporary transaction variable

        // determine which type of Transaction to create
        switch (type)
        {
            case BALANCE_INQUIRY: // create new BanlanceInquiry transaction
                temp = new BalanceInquiry(currentAccountNumber, screen, bankDatabase);
                break;
            case WITHDRAWAL: // create a new withdrawal transaction
                temp = new Withdrawal(currentAccountNumber, screen, bankDatabase, keypad, cashDispenser);
                break;
            case DEPOSIT: // create new Deposit transaction
                temp = new Deposit(currentAccountNumber, screen, bankDatabase, keypad, depositSlot);
                break;
        } //ene switch
        return temp; // return the newly created object
    } // end method createTransaction
}
