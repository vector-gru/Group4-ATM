//
// Created by PopeLouis on 30/12/2022.
//

#include "BalanceInquiry.h"


#include "BankDatabase.h"
#include "Screen.h"

namespace atmcasestudy
{

    BalanceInquiry::BalanceInquiry(int userAccountNumber, Screen *atmScreen, BankDatabase *atmBankDatabase) : Transaction(userAccountNumber, atmScreen, atmBankDatabase)
    {
    } // end BalanceInquiry constructor

    void BalanceInquiry::execute()
    {
        // get reference to bank database and screen
        BankDatabase *bankDatabase = getBankDatabase();
        Screen *screen = getScreen();

        //get the available balance for the account involved
        double availableBalace = bankDatabase->getAvailableBalance(getAccountNumber());

        // get the total balance for the account involed
        double totalBalance = bankDatabase->getTotalBalance(getAccountNumber());

        // display the balance information on the screen
        screen->displayMessageLine(L"\nBalance Information:");
        screen->displayMessage(L" - Available balance:  ");
        screen->displayDollarAmount(availableBalace);
        screen->displayMessage(L"\n - Total balance: ");
        screen->displayDollarAmount(totalBalance);
        screen->displayMessageLine(L"");
    } // end methpd execute
}
