#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>

class Transaction {
protected:
    double amount;
    std::string date;
    std::string category;
    std::string description;

public:
    Transaction(double amt, std::string dt, std::string cat, std::string desc);
    virtual void display() const = 0; // Pure virtual function
};

#endif
