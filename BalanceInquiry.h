//
// Created by PopeLouis on 30/12/2022.
//

#ifndef GROUP4_ATM_BALANCEINQUIRY_H
#define GROUP4_ATM_BALANCEINQUIRY_H

#pragma once

#include "Transaction.h"

//JAVA TO C++ CONVERTER NOTE: Forward class declarations:
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

    // Represents a balance inquiry ATM transaction
    class BalanceInquiry : public Transaction
    {

        // BalanceInquiry constructor
    public:
        BalanceInquiry(int userAccountNumber, Screen *atmScreen, BankDatabase *atmBankDatabase);


        //performs the transaction
        virtual void execute() override;

    }; // end class BalanceInquiry

}


#endif //GROUP4_ATM_BALANCEINQUIRY_H
