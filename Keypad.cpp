//
// Created by PopeLouis on 30/12/2022.
//

#include "Keypad.h"
#include <iostream>


namespace atmcasestudy

{
    using namespace std;


    Keypad::Keypad()
    {
        //cin >> input;
       // input = new Scanner(System::in);
    } // end no-arguement Keypad constructor

    double Keypad::getInput()
    {
        cin >> input;
        return input; // we assume that the user enters an integer
    } // end method getInput
}
