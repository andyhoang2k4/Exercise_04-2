#include "ProductionWorker.h"

ProductionWorker::ProductionWorker(int id,
                                   const char last_name[],
                                   const char first_name[],
                                   int year_of_birth,
                                   const char address[],
                                   const char phone[],
                                   const char job[],
                                   const char department[],
                                   double salary,
                                   double allowance,
                                   float coefficient)
    : Employee(id, last_name, first_name, year_of_birth, address, phone, job, department, salary, allowance) {
    this->coefficient = coefficient;
}

void ProductionWorker::setCoefficient(float coefficient) {
    this->coefficient = coefficient;
}

float ProductionWorker::getCoefficient() {
    return coefficient;
}

void ProductionWorker::print() {
    cout << "---- Cong nhan san xuat ----" << endl;
    Employee::print();
    cout << "He so bac: " << coefficient << endl;
}
