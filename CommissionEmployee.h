#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H

#include <string>

class CommissionEmployee {
public:
    CommissionEmployee(const std::string& firstName, const std::string& lastName,
                       const std::string& ssn, double grossSales, double commissionRate);

    virtual std::string toString() const;

private:
    std::string firstName;
    std::string lastName;
    std::string socialSecurityNumber;
    double grossSales;
    double commissionRate;
};

#endif // COMMISSIONEMPLOYEE_H
