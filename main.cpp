#include <iostream>
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

void displayInfo(const CommissionEmployee& employee) {
    std::cout << employee.toString() << "\n\n";
}

int main() {
    // create base-class object
    CommissionEmployee commissionEmployee{
        "Sue", "Jones", "222-22-2222", 10000, .06};

    // create derived-class object
    BasePlusCommissionEmployee basePlusCommissionEmployee{
        "Bob", "Lewis", "333-33-3333", 5000, .04, 300};

    std::cout << "DISPLAY BASE-CLASS AND DERIVED-CLASS OBJECTS:\n";
    displayInfo(commissionEmployee);
    displayInfo(basePlusCommissionEmployee);

    std::cout << "CALLING TOSTRING WITH BASE-CLASS POINTER TO\n"
              << "BASE-CLASS OBJECT INVOKES BASE-CLASS TOSTRING FUNCTION:\n";
    CommissionEmployee* commissionEmployeePtr{&commissionEmployee};
    displayInfo(*commissionEmployeePtr);

    std::cout << "CALLING TOSTRING WITH DERIVED-CLASS POINTER TO\n"
              << "DERIVED-CLASS OBJECT INVOKES DERIVED-CLASS TOSTRING FUNCTION:\n";
    BasePlusCommissionEmployee* basePlusCommissionEmployeePtr{&basePlusCommissionEmployee};
    displayInfo(*basePlusCommissionEmployeePtr);

    std::cout << "CALLING TOSTRING WITH BASE-CLASS POINTER TO DERIVED-CLASS OBJECT\n"
              << "INVOKES BASE-CLASS TOSTRING FUNCTION ON THAT DERIVED-CLASS OBJECT:\n";
    commissionEmployeePtr = &basePlusCommissionEmployee;
    displayInfo(*commissionEmployeePtr);

    return 0;
}
