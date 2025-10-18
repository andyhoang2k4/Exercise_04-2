#ifndef PROBATIONERSTAFF_H
#define PROBATIONERSTAFF_H

#include "Employee.h"

class ProbationerStaff : public Employee {
private:
    float probation;

public:
    ProbationerStaff(int id = 0,
                     const char last_name[] = "",
                     const char first_name[] = "",
                     int year_of_birth = 0,
                     const char address[] = "",
                     const char phone[] = "",
                     const char job[] = "",
                     const char department[] = "",
                     double salary = 0,
                     double allowance = 0,
                     float probation = 0);

    void setProbation(float probation);
    float getProbation();

    void print() override;
};

#endif
