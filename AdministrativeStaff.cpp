#include "AdministrativeStaff.h"

AdministrativeStaff::AdministrativeStaff(int id,
                                         const char last_name[], const char first_name[],
                                         int year_of_birth,
                                         const char address[],
                                         const char phone[],
                                         const char job[],
                                         const char department[],
                                         double salary,
                                         double allowance,
                                         float seniority)
    : Employee(id, last_name, first_name, year_of_birth, address, phone, job, department, salary, allowance) {
    this->seniority = seniority;
}

void AdministrativeStaff::setSeniority(float seniority) {
    this->seniority = seniority;
}

float AdministrativeStaff::getSeniority() {
    return seniority;
}

void AdministrativeStaff::print() {
    cout << "---- Nhan vien hanh chanh ----" << endl;
    Employee::print();
    cout << "Tham nien: " << seniority << endl;
}
