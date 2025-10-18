#include "Employee.h"

Employee::Employee(int id,
                   const char last_name[],
                   const char first_name[],
                   int year_of_birth,
                   const char address[],
                   const char phone[],
                   const char job[],
                   const char department[],
                   double salary,
                   double allowance) {
    this->id = id;
    strcpy_s(this->last_name, last_name);
    strcpy_s(this->first_name, first_name);
    this->year_of_birth = year_of_birth;
    strcpy_s(this->address, address);
    strcpy_s(this->phone, phone);
    strcpy_s(this->job, job);
    strcpy_s(this->department, department);
    this->salary = salary;
    this->allowance = allowance;
}

void Employee::setId(int id) {
    this->id = id;
}

int Employee::getId() {
    return id;
}

void Employee::setLastName(const char last_name[]) {
    strcpy_s(this->last_name, last_name);
}

char* Employee::getLastName() {
    return last_name;
}

void Employee::setFirstName(const char first_name[]) {
    strcpy_s(this->first_name, first_name);
}

char* Employee::getFirstName() {
    return first_name;
}

void Employee::print() {
    cout << "Ma nhan vien: " << id << endl;
    cout << "Ten nhan vien: " << first_name << " " << last_name << endl;
    cout << "Nam sinh: " << year_of_birth << endl;
    cout << "Dia chi: " << address << endl;
    cout << "So dien thoai: " << phone << endl;
    cout << "Cong viec: " << job << endl;
    cout << "Phong ban: " << department << endl;
    cout << "Luong: " << salary << endl;
    cout << "Phu cap: " << allowance << endl;
}
