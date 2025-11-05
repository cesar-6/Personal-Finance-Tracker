#include "Budget.h"

Budget::Budget(std::string cat, double lim) : category(cat), limit(lim), spent(0) {}

void Budget::updateSpent(double amt) {
    spent += amt;
}

bool Budget::isExceeded() const {
    return spent > limit;
}
