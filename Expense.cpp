#include "Expense.h"
#include <iostream>

Expense::Expense(double amt, std::string dt, std::string cat, std::string desc, std::string vend)
    : Transaction(amt, dt, cat, desc), vendor(vend) {}

void Expense::display() const {
    std::cout << "Expense: $" << amount << " to " << vendor << std::endl;
}
