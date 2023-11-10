// Copyright 2023
// Author: David Amoah

#include "Checking.h"
#include "Account.h"

Checking::Checking() : Account() {}

Checking::Checking(double initBal) : Account(initBal) {}

void Checking::daily_interest() {
    if (Account::get_balance() > 1000.0) {
        double interest = (Account::get_balance() - 1000.0) * 0.03 / DAYS_PER_MONTH;
        Account::deposit(interest);
    }
}




