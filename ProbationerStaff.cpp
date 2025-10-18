#include "ProbationerStaff.h"

ProbationerStaff::ProbationerStaff(int id,
                                   const char last_name[],
                                   const char first_name[],
                                   int year_of_birth,
                                   const char address[],
                                   const char phone[],
                                   const char job[],
                                   const char department[],
                                   double salary,
                                   double allowance,
                                   float probation)
    : Employee(id, last_name, first_name, year_of_birth, address, phone, job, department, salary, allowance) {
    this->probation = probation;
}

void ProbationerStaff::setProbation(float probation) {
    this->probation = probation;
}

float ProbationerStaff::getProbation() {
    return probation;
}

void ProbationerStaff::print() {
    cout << "---- Nhan vien tap su ----" << endl;
    Employee::print();
    cout << "Thoi gian tap su: " << probation << " thang" << endl;
}
