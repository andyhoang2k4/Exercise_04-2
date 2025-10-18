#ifndef PROBATIONERSTAFF_H
#define PROBATIONERSTAFF_H

#include "AdministrativeStaff.h"

class ProbationerStaff : public AdministrativeStaff {
private:
    double probation_time;

public:
    ProbationerStaff(int id, const char* last_name, const char* first_name,
                     int year_of_birth, const char* address, const char* phone,
                     const char* department, const char* job,
                     double salary, double allowance, double probation_time);

    ~ProbationerStaff() override;

    void print() const override;
};

#endif
