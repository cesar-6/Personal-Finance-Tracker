#include "RecurringTransaction.h"
#include <iostream>

RecurringTransaction::RecurringTransaction(double amt, std::string dt, std::string cat, std::string desc, int freq)
    : Transaction(amt, dt, cat, desc), frequencyDays(freq) {}

void RecurringTransaction::display() const {
    std::cout << "Recurring Transaction: $" << amount << " every " << frequencyDays << " days" << std::endl;
}
