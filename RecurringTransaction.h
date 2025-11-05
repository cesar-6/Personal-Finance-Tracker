#ifndef RECURRINGTRANSACTION_H
#define RECURRINGTRANSACTION_H

#include "Transaction.h"

class RecurringTransaction : public Transaction {
private:
    int frequencyDays;

public:
    RecurringTransaction(double amt, std::string dt, std::string cat, std::string desc, int freq);
    void display() const override;
};

#endif
