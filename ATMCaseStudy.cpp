//
// Created by PopeLouis on 30/12/2022.
//

#include <iostream>
#include "ATMCaseStudy.h"
#include "ATM.h"

namespace atmcasestudy
{

//    void ATMCaseStudy::main(std::wstring args[])
//    {
//        // TODO code application logic here
//        ATM *theATM = new ATM();
//
//        theATM->run();
//
//
//    } //end main
}



//int main() {
//
//}
int main() {
    // TODO code application logic here
    auto *theATM = new atmcasestudy::ATM();
    theATM->run();

    return 0;

} //end main
