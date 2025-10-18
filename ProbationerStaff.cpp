#include "ProbationerStaff.h"

ProbationerStaff::ProbationerStaff(int id, const char* last_name, const char* first_name,
                                   int year_of_birth, const char* address, const char* phone,
                                   const char* department, const char* job,
                                   double salary, double allowance, double probation_time)
    : AdministrativeStaff(id, last_name, first_name, year_of_birth, address, phone, department, job, salary, allowance, 0) {
    this->probation_time = probation_time;
}

ProbationerStaff::~ProbationerStaff() {
    cout << "\nProbationerStaff: " << last_name << " " << first_name << endl;
    print();
}

void ProbationerStaff::print() const {
    cout << "\n===== PROBATIONER STAFF =====" << endl;
    cout << "ID: " << id << endl;
    cout << "Name: " << last_name << " " << first_name << endl;
    cout << "Year of Birth: " << year_of_birth << endl;
    cout << "Address: " << address << endl;
    cout << "Phone: " << phone << endl;
    cout << "Department: " << department << endl;
    cout << "Job: " << job << endl;
    cout << "Salary: " << salary << endl;
    cout << "Allowance: " << allowance << endl;
    cout << "Probation Time: " << probation_time << " months" << endl;
}
