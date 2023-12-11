#ifndef BASEPLUSCOMMISSIONEMPLOYEE_H
#define BASEPLUSCOMMISSIONEMPLOYEE_H

#include "CommissionEmployee.h"

class BasePlusCommissionEmployee : public CommissionEmployee {
public:
    BasePlusCommissionEmployee(const std::string& firstName, const std::string& lastName,
                               const std::string& ssn, double grossSales, double commissionRate,
                               double baseSalary);

    std::string toString() const override;

private:
    double baseSalary;
};

#endif // BASEPLUSCOMMISSIONEMPLOYEE_H
