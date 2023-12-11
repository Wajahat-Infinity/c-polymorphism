#include "BasePlusCommissionEmployee.h"
#include <iostream>
#include <iomanip>
#include <sstream>

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const std::string& firstName,
                                                      const std::string& lastName,
                                                      const std::string& ssn,
                                                      double grossSales,
                                                      double commissionRate,
                                                      double baseSalary)
    : CommissionEmployee(firstName, lastName, ssn, grossSales, commissionRate),
      baseSalary(baseSalary) {}

std::string BasePlusCommissionEmployee::toString() const {
    // Call the base class version explicitly
    std::string baseInfo = CommissionEmployee::toString();

    // Append the derived class information
    std::ostringstream output;
    output << baseInfo
           << "\nbase salary: " << std::fixed << std::setprecision(2) << baseSalary;
    return output.str();
}
