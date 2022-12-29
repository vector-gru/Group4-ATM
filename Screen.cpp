//
// Created by PopeLouis on 30/12/2022.
//

#include "Screen.h"
#include "Screen.h"

namespace atmcasestudy
{

    void Screen::displayMessage(const std::wstring &message)
    {
        std::wcout << message;
    } // end display message

    void Screen::displayMessageLine(const std::wstring &message)
    {
        std::wcout << message << std::endl;
    } // end method displayMessageLine

    void Screen::displayDollarAmount(double amount)
    {
        printf(reinterpret_cast<const char *>(L"$%, .2f"), amount);
    } // end method displayDollarAmount
}
