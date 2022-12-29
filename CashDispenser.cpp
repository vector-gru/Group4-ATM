//
// Created by PopeLouis on 30/12/2022.
//

#include "CashDispenser.h"


namespace atmcasestudy
{

    CashDispenser::CashDispenser()
    {
        count = INITIAL_COUNT; // set count attribute to default
    } // end CashDispenser constructor

    void CashDispenser::dispenseCash(int amount)
    {
        int billsRequired = amount / 20; // number of $20 bills required
        count -= billsRequired; // update the count of bills
    } // end method dispenseCash

    bool CashDispenser::isSufficientCashAvailable(int amount)
    {
        int billsRequired = amount / 20; // number of $20 bills required

        if (count >= billsRequired)
        {
            return true; // enough bills available
        }
        else
        {
            return false; // not enough bills available
        }
    } // end method isSufficientCashAvailable
}
