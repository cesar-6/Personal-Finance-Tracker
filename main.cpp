#include <iostream>
#include "Income.h"
#include "Expense.h"

int main() {
    Income salary(3000, "2025-11-01", "Job", "Monthly salary", "Company Inc.");
    Expense rent(1200, "2025-11-02", "Housing", "Monthly rent", "Landlord LLC");

    salary.display();
    rent.display();

    return 0;
}
