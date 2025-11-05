#include "Goal.h"

Goal::Goal(std::string n, double target) : name(n), targetAmount(target), currentAmount(0) {}

void Goal::addSavings(double amt) {
    currentAmount += amt;
}

double Goal::getProgress() const {
    return (currentAmount / targetAmount) * 100;
}
