#include "Transaction.h"

Transaction::Transaction(double amt, std::string dt, std::string cat, std::string desc)
    : amount(amt), date(dt), category(cat), description(desc) {}
