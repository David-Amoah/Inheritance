// Copyright 2023
// Author: David Amoah

#include "Savings.h"

Savings::Savings() {}

Savings::Savings(double initBal) : Account(initBal) {}

void Savings::daily_interest() {
    double interest = get_balance() * 0.06 / DAYS_PER_MONTH;
    Account::deposit(interest);
}
