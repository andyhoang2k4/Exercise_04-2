#include "AdministrativeStaff.h"

AdministrativeStaff::AdministrativeStaff(int id, const char* last_name, const char* first_name,
                                         int year_of_birth, const char* address, const char* phone,
                                         const char* department, const char* job,
                                         double salary, double allowance, int seniority) {
    this->id = id;
    strcpy_s(this->last_name, last_name);
    strcpy_s(this->first_name, first_name);
    this->year_of_birth = year_of_birth;
    strcpy_s(this->address, address);
    strcpy_s(this->phone, phone);
    strcpy_s(this->department, department);
    strcpy_s(this->job, job);
    this->salary = salary;
    this->allowance = allowance;
    this->seniority = seniority;
}

AdministrativeStaff::~AdministrativeStaff() {
    cout << "\nAdministrativeStaff: " << last_name << " " << first_name << endl;
    print();
}

void AdministrativeStaff::print() const {
    cout << "\n===== ADMINISTRATIVE STAFF =====" << endl;
    cout << "ID: " << id << endl;
    cout << "Name: " << last_name << " " << first_name << endl;
    cout << "Year of Birth: " << year_of_birth << endl;
    cout << "Address: " << address << endl;
    cout << "Phone: " << phone << endl;
    cout << "Department: " << department << endl;
    cout << "Job: " << job << endl;
    cout << "Salary: " << salary << endl;
    cout << "Allowance: " << allowance << endl;
    cout << "Seniority: " << seniority << " years" << endl;
}
