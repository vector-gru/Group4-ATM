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
#include "Keypad.h"
#include <iostream>
#include <sstream>
#include <string>
namespace atmcasestudy {

    ///
    /// <summary>
    /// @author PopeLouis
    /// </summary>


//    using namespace std;
//
//    class Keypad {
//    public:
//        static int getInput();
//    };
//
//    int Keypad::getInput() {
//        string input;
//        int output;
//        getline(cin, input);
//        stringstream(input) >> output;
//        return output;
//
//    }

 //Keypad Represents the keyboard of the ATM

    class Keypad
    {
    private:
        int input{}; // reads data from the command line

        // no-argument constructor initializes the Scanner
    public:
        Keypad();

        // return an integer value entered by user
        virtual int getInput();

    }; // end class Keypad

}

#endif //GROUP4_ATM_KEYPAD_H

