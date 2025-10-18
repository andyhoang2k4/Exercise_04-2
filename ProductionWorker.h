#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include "AdministrativeStaff.h"

class ProductionWorker : public AdministrativeStaff {
private:
    double coefficient;

public:
    ProductionWorker(int id, const char* last_name, const char* first_name,
                     int year_of_birth, const char* address, const char* phone,
                     const char* department, const char* job,
                     double salary, double allowance, double coefficient);

    ~ProductionWorker() override;

    void print() const override;
};

#endif
