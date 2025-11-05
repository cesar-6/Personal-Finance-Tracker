#ifndef REPORT_H
#define REPORT_H

#include <vector>
#include "Transaction.h"

class Report {
public:
    void generateMonthlyReport(const std::vector<Transaction*>& transactions);
};

#endif
