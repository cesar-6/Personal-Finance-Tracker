#ifndef EXPENSE_H
#define EXPENSE_H

#include "Transaction.h"

class Expense : public Transaction {
private:
    std::string vendor;

public:
    Expense(double amt, std::string dt, std::string cat, std::string desc, std::string vend);
    void display() const override;
};

#endif
