//
// Created by PopeLouis on 30/12/2022.
//

#ifndef GROUP4_ATM_CASHDISPENSER_H
#define GROUP4_ATM_CASHDISPENSER_H

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
    // Represents the cash dispenser of the ATM
    class CashDispenser
    {
        // the default initial number of bills in the cash dispenser
    private:
        static const int INITIAL_COUNT = 500;
        int count = 0; // number of $20 bills remaining

        // no-arguement CashDispenser constructor initializes count to default
    public:
        CashDispenser();

        // simulates dispensing of specific amount of cash
        virtual void dispenseCash(int amount);

        // indicates whether cash dispenser can dispense desired amount
        virtual bool isSufficientCashAvailable(int amount);
    }; //end class CashDispenser

}


#endif //GROUP4_ATM_CASHDISPENSER_H
