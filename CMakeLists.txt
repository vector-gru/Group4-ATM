cmake_minimum_required(VERSION 3.24)
project(Group4_ATM)

set(CMAKE_CXX_STANDARD 17)

add_executable(Group4_ATM Account.cpp Account.h ATM.cpp ATM.h BalanceInquiry.cpp BalanceInquiry.h BankDatabase.cpp BankDatabase.h CashDispenser.cpp CashDispenser.h Deposit.cpp Deposit.h DepositSlot.cpp DepositSlot.h Keypad.cpp Keypad.h Screen.cpp Screen.h Transaction.cpp Transaction.h Withdrawal.cpp Withdrawal.h ATMCaseStudy.cpp ATMCaseStudy.h)
