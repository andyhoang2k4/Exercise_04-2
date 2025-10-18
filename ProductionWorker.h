#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include "Employee.h"

class ProductionWorker : public Employee {
private:
    float coefficient;

public:
    ProductionWorker(int id = 0,
                     const char last_name[] = "",
                     const char first_name[] = "",
                     int year_of_birth = 0,
                     const char address[] = "",
                     const char phone[] = "",
                     const char job[] = "",
                     const char department[] = "",
                     double salary = 0,
                     double allowance = 0,
                     float coefficient = 0);

    void setCoefficient(float coefficient);
    float getCoefficient();

    void print() override;
};

#endif
