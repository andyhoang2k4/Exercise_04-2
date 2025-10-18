#include "ProductionWorker.h"

ProductionWorker::ProductionWorker(int id, const char* last_name, const char* first_name,
                                   int year_of_birth, const char* address, const char* phone,
                                   const char* department, const char* job,
                                   double salary, double allowance, double coefficient)
    : AdministrativeStaff(id, last_name, first_name, year_of_birth, address, phone, department, job, salary, allowance, 0) {
    this->coefficient = coefficient;
}

ProductionWorker::~ProductionWorker() {
    cout << "\n]ProductionWorker: " << last_name << " " << first_name << endl;
    print();
}

void ProductionWorker::print() const {
    cout << "\n===== PRODUCTION WORKER =====" << endl;
    cout << "ID: " << id << endl;
    cout << "Name: " << last_name << " " << first_name << endl;
    cout << "Year of Birth: " << year_of_birth << endl;
    cout << "Address: " << address << endl;
    cout << "Phone: " << phone << endl;
    cout << "Department: " << department << endl;
    cout << "Job: " << job << endl;
    cout << "Salary: " << salary << endl;
    cout << "Allowance: " << allowance << endl;
    cout << "Coefficient: " << coefficient << endl;
}
