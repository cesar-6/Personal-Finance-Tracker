#ifndef GOAL_H
#define GOAL_H

#include <string>

class Goal {
private:
    std::string name;
    double targetAmount;
    double currentAmount;

public:
    Goal(std::string n, double target);
    void addSavings(double amt);
    double getProgress() const;
};

#endif
