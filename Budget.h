#ifndef BUDGET_H
#define BUDGET_H

#include <string>

class Budget {
private:
    std::string category;
    double limit;
    double spent;

public:
    Budget(std::string cat, double lim);
    void updateSpent(double amt);
    bool isExceeded() const;
};

#endif
