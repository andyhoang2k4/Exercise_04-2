#ifndef ADMINISTRATIVESTAFF_H
#define ADMINISTRATIVESTAFF_H

#include "Employee.h"

class AdministrativeStaff : public Employee {
private:
    float seniority;

public:
    AdministrativeStaff(int id = 0,
                        const char last_name[] = "",
                        const char first_name[] = "",
                        int year_of_birth = 0,
                        const char address[] = "",
                        const char phone[] = "",
                        const char job[] = "",
                        const char department[] = "",
                        double salary = 0,
                        double allowance = 0,
                        float seniority = 0);

    void setSeniority(float seniority);
    float getSeniority();

    void print() override;
};

#endif
