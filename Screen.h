//
// Created by PopeLouis on 30/12/2022.
//

#ifndef GROUP4_ATM_SCREEN_H
#define GROUP4_ATM_SCREEN_H

#pragma once

#include <string>
#include <iostream>

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

    // Represent the screen of the ATM
    class Screen
    {
    public:
        virtual void displayMessage(const std::wstring &message);

        // display a message with a carriage return
        virtual void displayMessageLine(const std::wstring &message);

        // display a dollar amount
        virtual void displayDollarAmount(double amount);
    }; // end class Screen

}


#endif //GROUP4_ATM_SCREEN_H
