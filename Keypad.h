//
// Created by PopeLouis on 30/12/2022.
//

#ifndef GROUP4_ATM_KEYPAD_H
#define GROUP4_ATM_KEYPAD_H

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

    // Keypad Represents the keyboard of the ATM

    class Keypad
    {
    private:
        Scanner *input; // reads data from the command line

        // no-arguement constructor initializes the Scanner
    public:
        Keypad();

        // return an integer value entered by user
        virtual int getInput();

    }; // end class Keypad

}


#endif //GROUP4_ATM_KEYPAD_H
