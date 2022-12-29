//
// Created by PopeLouis on 30/12/2022.
//

#ifndef GROUP4_ATM_DEPOSITSLOT_H
#define GROUP4_ATM_DEPOSITSLOT_H

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

    // Represents the deposit slot of the ATM

    class DepositSlot
    {
        // indicates whether enveolope was received (always returns true
        // because thisis only a software simulation of a real deposit slot)

    public:
        virtual bool isEnvelopeReceived();
    }; //end class DepositSlot

}


#endif //GROUP4_ATM_DEPOSITSLOT_H
