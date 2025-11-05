#include "Income.h"
#include <iostream>

Income::Income(double amt, std::string dt, std::string cat, std::string desc, std::string src)
    : Transaction(amt, dt, cat, desc), source(src) {}

void Income::display() const {
    std::cout << "Income: $" << amount << " from " << source << std::endl;
}
