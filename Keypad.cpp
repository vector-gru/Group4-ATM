//
// Created by PopeLouis on 30/12/2022.
//

#include "Keypad.h"


namespace atmcasestudy
{

    Keypad::Keypad()
    {
        input = new Scanner(System::in);
    } // end no-arguement Keypad constructor

    int Keypad::getInput()
    {
        return input->nextInt(); // we assume that the user enters an integer
    } // end method getInput
}
