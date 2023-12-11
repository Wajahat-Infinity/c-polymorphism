#include "CommissionEmployee.h"
#include <iostream>
#include <iomanip>
#include <sstream>

CommissionEmployee::CommissionEmployee(const std::string& firstName, const std::string& lastName,
                                       const std::string& ssn, double grossSales, double commissionRate)
    : firstName(firstName), lastName(lastName), socialSecurityNumber(ssn),
      grossSales(grossSales), commissionRate(commissionRate) {}

std::string CommissionEmployee::toString() const {
    std::ostringstream output;
    output << "commission employee: " << firstName << ' ' << lastName
           << "\nsocial security number: " << socialSecurityNumber
           << "\ngross sales: " << std::fixed << std::setprecision(2) << grossSales
           << "\ncommission rate: " << std::fixed << std::setprecision(2) << commissionRate;
    return output.str();
}
