#ifndef INCOME_H
#define INCOME_H

#include "Transaction.h"

class Income : public Transaction {
private:
    std::string source;

public:
    Income(double amt, std::string dt, std::string cat, std::string desc, std::string src);
    void display() const override;
};

#endif
