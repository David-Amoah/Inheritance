// Copyright 2023
// Author: David Amoah

#include "Account.h"

Account::Account() {
    this -> balance = 0.0;
}

Account::Account(double b) {
    this -> balance = b;
}

void Account::deposit(double amount) {
    this -> balance += amount;
}

void Account::withdraw(double amount) {
    this -> balance -= amount;
}

double Account::get_balance() const {
    return this -> balance;
}

void Account::daily_interest() {

}
